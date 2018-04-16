/* this script  will create a mobile device menu and make it clickable*/
(function ($) {
    /* GLOBAL VARIABLES START */
    /* define  GENERAL the width of devices */
    var TABLET_WIDTH = 1024;
    var MOBILE_WIDTH = 605;
    var EXCEPTION_LIST = [];

    /* GLOBAL VARIABLES END */

    $(document).ready(function () {

        var ww = document.body.clientWidth;
        //reset_menu($(".nice-menu"),$(".toggleMenu"));


        /* EXCLUDING DEVICES UAGENTS AND  THAIR WIDTHS FROM GETTING TRANSFORMED MENU */
        var ipad = new exception('ipad', 768);
        //var iphone = new exception('iphone', 320);

        /* uncomment this function to get current device width and device uagent */
        //showDeviceAgentAndWidth();


        /* assigning parent classes to parent list items */
        $("ul.nice-menu li a").each(function () {
            //console.log('1');
            if ($(this).next().length > 0) {
                $(this).addClass("parent");
            }
        });
        if (ww <= TABLET_WIDTH) {

            /* toggle button for mobile devices */
            /* start */
            $(".toggleMenu").click(function (e) {
                e.preventDefault();
                $(".nice-menu").toggle();
                resetClickedAndHovered($(".nice-menu"));
            });
            /* end */
            /* this function will reset counter of clicks and remove .hover class */
            main_nav_reset($(".nice-menu"));


            /* polifil androids  to make sure user is not redirected to the page when he clicks on category empty space*/
            if (isDevice("android")) {
                polifil_android();
                // alert('android');
            }
            /* polifil for iphone /ipad and ipad to make main menu dropdowns work properly */
            if (isDevice("iphone") || isDevice("ipad")) {

                $("#nice-menu-1 li a.parent").live("hover", function (e) {
                    e.preventDefault();

                    //alert('hover');
                     $(this).click();
                });
            }


            $("#nice-menu-1 li a.parent").live("click", function (e) {
                //alert('click');
                //console.log('prevented');
                var target = $(this);
                if (!$(this).hasClass("clicked-1"))
                    e.preventDefault();
                clickCount(target);
                $(this).parent("li").addClass('hover');
                //alert($(this).parent("li").attr("class"));
            });

            /* if mobile phone - hide main nav and display a button */
            /* UNLESS DEVICE AND WIDTH ARE EXCLUDED */
            /* start */
            if (ww <= MOBILE_WIDTH && !isExcluded()) {
                transform_menu();
            }
            /*  mobile device end */
        } else {
            $(".toggleMenu").css("display", "none");
            $("ul.nice-menu li").hover(function () {
                $(this).addClass('hover');
            }, function () {
                $(this).removeClass('hover');
            });
        }
    });


    /* function for transforming desktop menu into mobile */
    function transform_menu() {
        $(".toggleMenu").css("display", "inline-block");
        $(".nice-menu").css("display", "none");
    }

    /* classes for excluded devices */
    function exception(uagent, width, exception_list) {

        var object = {
            width: width,
            uagent: uagent
        };
        EXCEPTION_LIST.push(object);
        return object;
    }

    /* check if current device and width are excluded */
    function isExcluded() {
        var ww = document.body.clientWidth;
        var uagent = navigator.userAgent.toLowerCase();
        for (var i = 0; i < EXCEPTION_LIST.length; i++) {
            //alert(uagent.search(exception_list[i].uagent) + "" + exception_list[i].width);
            if (uagent.search(EXCEPTION_LIST[i].uagent) > -1 && EXCEPTION_LIST[i].width == ww)
                return true;

        }
        return false;

    }

    /* this function verifies if it is the device based on passed strings */
    function isDevice(device) {
        var uagent = navigator.userAgent.toLowerCase();
        if (uagent.search(device) > -1)
            return true;
    }

    /* THIS FUNCTION ALERTS THE CURRENT DEVICE AGENT */
    function showDeviceAgentAndWidth() {
        var ww = document.body.clientWidth;
        var uagent = navigator.userAgent.toLowerCase();
        alert(uagent);
        alert('width is:' + ww);
    }

    function polifil_android() {
        var clicked_times = 0;
        $(".block-menu").click(function () {
            $(this).removeClass("clicked-" + clicked_times);
            clicked_times = clicked_times + 1;
            $(this).addClass("clicked-" + clicked_times);
        });

        $(".block-menu").hover(function () {
            $(this).removeClass("clicked-" + clicked_times);
            clicked_times = clicked_times + 1;
            $(this).addClass("clicked-" + clicked_times);

        }, function () {
            $(this).removeClass("clicked-" + clicked_times);
            clicked_times = 0;
        });

        /* modify the link click event */
        $("ul.menu li a").click(function (e) {
            if ($(this).closest(".block-menu").hasClass("clicked-1")) {
                e.preventDefault();
            }
            ;
        });


    }
    function reset_menu(menu,exception){
        $("*").not(menu).not(exception).click(function(){
           // alert('click');
                resetClickedAndHovered(".nice-menu");
                 //menu.css("display","none");
        },false);

    }


    function main_nav_reset(nav){
        $(">li>a",nav).live("click",function(){
            resetClickedAndHovered($(".nice-menu"),$(this));
        });
    }

    /* calculates how many times element was clicked */
    /* removes the click count when another element was clicked */
    function clickCount(element) {
        if (!$(element).hasClass("clicked-1"))
            $(element).addClass("clicked-1");

    }

    function resetClickedAndHovered(container,expection) {
        if(typeof expection==='undefined'){
            $(".hover",container).removeClass("hover");
            $(".clicked-1", container).removeClass("clicked-1");
        }else{
            $(".hover",container).not(expection).removeClass("hover");
            $(".clicked-1", container).not(expection).removeClass("clicked-1");
        }

    }


}(jQuery));