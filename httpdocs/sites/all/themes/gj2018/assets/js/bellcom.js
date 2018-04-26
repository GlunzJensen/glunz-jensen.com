var sortSelect = function (select, attr, order) {

    if (attr === 'text') {

        if (order === 'asc') {
            jQuery(select).html(jQuery(select).children('option').sort(function (x, y) {
                return jQuery(x).text().toUpperCase() < jQuery(y).text().toUpperCase() ? -1 : 1;
            }));
            jQuery(select).get(0).selectedIndex = 0;
        }// end asc

        if (order === 'desc') {
            jQuery(select).html(jQuery(select).children('option').sort(function (y, x) {
                return jQuery(x).text().toUpperCase() < jQuery(y).text().toUpperCase() ? -1 : 1;
            }));
            jQuery(select).get(0).selectedIndex = 0;
            e.preventDefault();
        }// end desc
    }
};


jQuery(document).ready(function () {
    sortSelect('select', 'text', 'asc');
});

// Document ready.
(function ($) {
    'use strict';

    // Init stackable responsive table plugin.
    Drupal.behaviors.stackable = {
        attach: function (context, settings) {
            $('table').once('stackable', function () {
                $(this).stacktable();
            });
        }
    };

    // Toggler
    $('[data-toggle]').on('click', function (event) {
        event.stopImmediatePropagation();
        event.preventDefault();
        console.log('Clicked');

        var $element = $(this),
            target = $element.attr('data-toggle'),
            $target = $(target);

        $target.toggleClass('visible');
    });

})(jQuery);
