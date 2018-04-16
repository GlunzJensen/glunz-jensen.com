jQuery(function() {
 //alert("Your Site has been Hacked!! I will hide your login");
 jQuery('.not-logged-in #loginfield').hide().addClass("closed");



/*
 jQuery(window).resize(function() {
   window.location.href = window.location.href;
 });
*/
});




    function toggleDiv(divId) {
        jQuery("#"+divId).toggleClass("open","closed");
        jQuery("#"+divId).slideToggle('200');

    }

(function($){

 $(document).ready(function(){

     var container=$("#loginfield");
     $("#block-user-login,#block-search-form").hide();
     $("#block-user-login,#block-search-form").hide().addClass("closed");

     $(".login-link").click(function(){

         var content=$("#block-user-login");
         $(this).toggleClass("active");
         toggleSubTab(content,container);
         toggleContainer(content);
     });

     $(".search-link").click(function(){

         var content=$("#block-search-form");
         $(this).toggleClass("active");
         toggleSubTab(content,container);
         toggleContainer(content);
     });



     function toggleSubTab(content,container){

             content.fadeToggle('200').toggleClass("open","closed");
     }

     function toggleContainer(trigger){
         if($("body").hasClass("not-logged-in")){
             if($(".block.open").not(trigger).length==0){
                 $(container).toggleClass("open","closed").slideToggle('200');
             }
         }

     }
 });


})(jQuery);
