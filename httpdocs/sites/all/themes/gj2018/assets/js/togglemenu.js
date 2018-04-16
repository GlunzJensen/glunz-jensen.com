
(function($){


$(document).ready(function(){
    $("#mm-button").click(function () {
        $("#mobile-nav").toggleClass("nav-open");
        $(".mainmenuwrapper").toggleClass("to-left");
        $(".html").toggleClass("site-push");
        $("#mm-button").toggleClass("push");
    });
});


$(document).ready(function(){
    $("a.search").click(function () {
        $("#searchbar").toggleClass("show");
        $("a.search").toggleClass("open");
    });
});


/* When Mobile Menu open, close by clicking other than menu */

$(document).on('vmouseup mouseup touchend',function (e) {
    var container = $(".nav-open");
    var button = $('#mm-button');
    if (!container.is(e.target)
    && container.has(e.target).length === 0 && !button.is(e.target)) {
        container.removeClass("nav-open");
        $(".mainmenuwrapper").removeClass("to-left");
        $("#mm-button").removeClass("push");
    }
});

})(jQuery);