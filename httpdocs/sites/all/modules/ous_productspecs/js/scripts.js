(function ($) {
	Drupal.behaviors.ousbehavior = {
	  attach: function (context, settings) {
		  //$('div#div95502').addClass('dutdut');
		  var productId = $('.productspecs').attr('id');
		  //$.get('http://www.glunz-jensen.com/product-specifications/' + productId, function(data) {
		  $.get('/product-specifications/' + productId, function(data) {
			  $('.productspecs').html(data);
			  //alert('Load was performed.');
			});	  
	  }
	};

})(jQuery);
