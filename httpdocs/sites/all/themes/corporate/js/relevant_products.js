(function($){
  $(document).ready(function(){
$("#block-views-products-on-solutions-block").addClass("hid");
  $(".hid").live("click", function() {
  $(this).animate({
    bottom: "0px"
    }).removeClass("hid").addClass("out");
});
$(".out").live("click", function() {
  $(this).animate({
    bottom: "-9999px"
    }, function() {
$(this).removeClass("out").addClass("hid");
    });
});
});
})(jQuery);