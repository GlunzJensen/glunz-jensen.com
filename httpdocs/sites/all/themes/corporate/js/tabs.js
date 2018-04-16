/* custom tabs plugin */


// constructor
function Tabs(args) {

    var trigger = '.trigger',
        tabs = '.tab',
        active_tab = 0,
        container='';

    if (typeof args != "undefined") {
        if (typeof args.trigger != "undefined") trigger = args.trigger;
        if (typeof args.tabs != "undefined") tabs = args.tabs;
        if (typeof args.active_tab != "undefined") active_tab = args.active_tab;
        if (typeof args.container != "undefined") container = args.container;
    }

    this.initialize = function () {

        placeControllers(trigger, container);
        fadeInTabsEvent(trigger);

        //hiding all expect the 1 one
        $(trigger).eq(active_tab).click();
    }


    //support functions

    function placeControllers(triggers, container) {

        var
            triggers_count = $(triggers).size(),
            collector = '';

        //giving data-index to trigger and id to container
        $(triggers).each(function (i) {


            $(this).attr('data-index', i);
            collector += $(this).outerHTML();


            //giving index to parent container
            $(this).parent('.product-tab').attr("id", 'data-' + i);


            $(this).remove();


        });

        //positioning tabs after #horizontal-tabs-wrapper
        $(container).prepend('<div class="controllers">' + collector + '</div>');

        //reassigning trigger var
        trigger=$(".controllers h3");

    }

    function fadeInTabsEvent(trigger) {

        $(trigger).bind('click', function () {

            var index = $(this).attr('data-index');
            var content_container = $("#data-" + index);

            //remove class
            $(trigger).not($(this)).removeClass("active");
            $(container+" .field-group-format").not(content_container).fadeOut();

            $(this).addClass('active');

            content_container.fadeIn();



        });

    }


}
jQuery.fn.outerHTML = function (s) {
    return s
        ? this.before(s).remove()
        : jQuery("<p>").append(this.eq(0).clone()).html();
};