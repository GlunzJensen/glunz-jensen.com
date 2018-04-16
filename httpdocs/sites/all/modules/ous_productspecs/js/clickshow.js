


function ousadder($productId) {


  jQuery('.targetDiv').removeClass("showtable").addClass("hidetable");
  //jQuery('.targetDiv').hide();
  jQuery('#div'+$productId).removeClass("hidetable").addClass("showtable");
  //jQuery('#div'+$productId).show();
  
	
	//jQuery(".targetDiv").addClass("targetDiv hidetable");
	//document.getElementById("div"+$productId).className = "targetDiv showtable";
	//document.getElementById("div95502").className += " showtable";
	//alert("hello");


    links_click($productId);

};

$=jQuery;
function links_click(id){
    $(".productName").removeClass('active');
    $(".productName[target='"+id+"']").attr("target",id).addClass('active');
}

