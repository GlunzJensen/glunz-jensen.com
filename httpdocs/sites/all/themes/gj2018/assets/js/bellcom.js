var sortSelect = function (select, attr, order) {

    if(attr === 'text'){
        
        if(order === 'asc'){
            jQuery(select).html(jQuery(select).children('option').sort(function (x, y) {
                return jQuery(x).text().toUpperCase() < jQuery(y).text().toUpperCase() ? -1 : 1;
            }));
            jQuery(select).get(0).selectedIndex = 0;
        }// end asc
        
        if(order === 'desc'){
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
