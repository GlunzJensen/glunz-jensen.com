<?php 
/**
  * file theme_tablesort_indicator
  * Removes the <img> from a tables order 
*/
function corporate_tablesort_indicator($variables) {
  if ($variables['style'] == "asc") {
    return '<div class="table-order-asc"></div>';
  }
  else {
    return '<div class="table-order-desc"></div>';

  }

}

