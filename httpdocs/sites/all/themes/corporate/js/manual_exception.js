(function($){
 $(document).ready(function(){
   if ($('.view-software-manual-exception .view-content').length > 0) {
     //console.log('works');
     $('.node-type-product .node-software-platform .node-manual.node-teaser, .page-software-download .node-software-platform .node-manual.node-teaser').css("display","none");
     $('.node-type-product .node-software-platform .view-software-manual-exception .node-manual.node-teaser').css("display","block");
   }
	 
 });
})(jQuery);

