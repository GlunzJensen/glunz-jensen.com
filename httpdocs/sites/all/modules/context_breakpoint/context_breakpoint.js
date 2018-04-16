
(function ($) {
  Drupal.behaviors.contextBreakpoint = {

    width: null,
    height: null,

    attach: function (context, settings) {
      var that = this;

      // Update cookies on each resize.
      $(window).resize(function() {
        that.onResize();
      });

      // Do a first manual cookie update to catch the current width.
      this.onResize();
    },

    // Set the cookie with screen and browser width+ height.
    // Then check if we need to reload.
    onResize: function() {
      var date = new Date();
      date.setTime(date.getTime() + 30*24*60*60*1000);

      var expires = date.toGMTString();

      $window = $(window);

      var value = $window.width() + 'x' + $window.height()
        + '|' + screen.width + 'x' + screen.height;

      // If the page is being loaded, we want to test the window size against
      // the existing cookie (if the cookie is set). This ensures a necessary
      // reload will happen if the user's window matches a different context
      // than the cookie they have stored.
      // If the page is being loaded and the cookie wasn't set, we'll force a
      // reload in the checkForReload function when it gets called a few lines
      // down.
      if (!(this.width && this.height) && $.cookie('context_breakpoint')) {
        var existing_cookie = $.cookie('context_breakpoint').split('x');
        this.width = existing_cookie[0];
        this.height = existing_cookie[1].split('|')[0];
      }      
      
      // Set cookie for screen resolution.
      document.cookie = 'context_breakpoint=' + value + '; expires=' + expires + '; path=/';
/*
      if (this.width && this.height) {
        this.checkForReload($window.width(), $window.height());
      }
*/
      
      this.checkForReload($window.width(), $window.height());
      
      this.width = $window.width();
      this.height = $window.height()
    },

    checkForReload: function(curWidth, curHeight) {
      if (!('context_breakpoint' in Drupal.settings)) {
        return;
      }
      var settings = Drupal.settings.context_breakpoint;
      var $window = $(window);

      for (var key in settings) {
        for (var cmd in settings[key]) {
          var value = settings[key][cmd];
          // If the result changes, the condition has changed, so we need
          // to reload.
          var now = this.checkCondition(cmd, $window.width(), $window.height(), value);
//          var before = this.checkCondition(cmd, this.width, this.height, value);

          // this.width and this.height get set in onResize on page load if
          // there was an existing cookie. If they aren't set at this point,
          // that can only mean a cookie didn't exist, so we should reload the
          // page to apply the context.
          if (!(this.width && this.height)) {
            var before = !now;
          }
          else {
            var before = this.checkCondition(cmd, this.width, this.height, value);
          }
           
          if (now !== before) {
            window.location.reload(true);

            // FF prevents reload in onRsize event, so we need to do it
            // in a timeout. See issue #1859058
            if ('mozilla' in $.browser)  {
              setTimeout(function() {
                window.location.reload(true);
              }, 10);
            }
            return;
          }
        }
      }
    },

    checkCondition: function(condition, width, height, value) {
      var flag = null;

      switch (condition) {
        case 'width':
          flag = width === value;
          break;

        case 'min-width':
          flag = width >= value;
          break;

        case 'max-width':
          flag = width <= value;
          break;

        case 'height':
          flag = height === value;
          break;

        case 'min-height':
          flag = height >= value;
          break;

        case 'max-height':
          flag = height <= value;
          break;

        case 'aspect-ratio':
          flag = width / height === value;
          break;

        case 'min-aspect-ratio':
          flag = width / height >= value;
          break;

        case 'max-aspect-ratio':
          flag = width / height <= value;
          break;

        default:
          break;
      }

      return flag;
    }
  };
})(jQuery);
