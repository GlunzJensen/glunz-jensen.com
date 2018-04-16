
$=jQuery;

var Product = {

    initialized: false,

    initialize: function() {

        if (this.initialized) return;
        this.initialized = true;

        this.build();
        this.events();

    },

    build: function() {


        var settings={
            'tabs':'.product-tab',
            'trigger':'.product-tab h3',
            'active_tab':0, //count start from 0
            'container':'.horizontal-tabs-panes .group-download'
        }

        var tabs= new Tabs(settings);
        tabs.initialize();




    },

    events: function() {

    }



};
$(document).ready(function(){
    Product.initialize();
});
