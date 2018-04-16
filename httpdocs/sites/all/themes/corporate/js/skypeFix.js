$=$||jQuery


$(document).ready(function(){

    $(".skype-link").each(function(){
        var href=$(this).attr("href");

        href= 'skype:'+href;
        $(this).attr("href",href);
    });

});