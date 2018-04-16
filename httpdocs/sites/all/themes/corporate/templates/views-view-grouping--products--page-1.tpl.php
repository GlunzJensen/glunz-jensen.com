<?php

/**
 * @file
 * This template is used to print a single grouping in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $grouping: The grouping instruction.
 * - $grouping_level: Integer indicating the hierarchical level of the grouping.
 * - $rows: The rows contained in this grouping.
 * - $title: The title of this grouping.
 * - $content: The processed content output that will normally be used.
 */
?>
<div class="view-grouping">
  <div class="view-grouping-header"><?php print $title; ?></div>
  <div class="view-grouping-content">
  <?php print $content; ?>
  <?php 
  global $user;
  
//  if ($user->uid == '1') {
  //	print 'hello admin';
  	//var_dump($rows);
    $row = array_shift($rows);
    $row_data = $row['rows'];
    $row_node = array_shift($row_data);     
    $row_field = $row_node->_field_data['nid']['entity'];
  	$field_label = $row_field->field_label['und'][0]['tid'];
  	$pref_term = taxonomy_term_load($field_label);
    $pref_name = $pref_term->name;
    if ($field_label == 72) $pref_name = 'Fuji';

  	//print $field_label.' ';
  	$view_arg = $pref_name;
  	
$admin_role = false;
  	$oem_role = false;
  	
  	foreach($user->roles as $roles){
		if($roles == 'administrator'){
			$admin_role = true;
		}
		if($roles == 'oem - gj dealer'){
			$oem_role = true;
		}
	}
  	if ($oem_role == true && $admin_role == false && !empty($user->data['tac_lite'][7][103]) && $view_arg=='Fuji'){
		  

	} else{
		$renderedview = views_embed_view('preferred_products', 'page', $view_arg);
		if (strlen($renderedview) > 1) {
			print '<h3>Preferred products</h3>';
			print $renderedview;
		
		}
	}
//  } // end if ($user->uid == '1')
  ?>

  </div>
</div>
