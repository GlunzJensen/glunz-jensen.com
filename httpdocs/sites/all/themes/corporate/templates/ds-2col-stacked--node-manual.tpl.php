<?php

/**
 * @file
 * Display Suite 2 column stacked template.
 */
?>

<?php
$arg = arg();

if (empty($variables['field_manual_product_id'])) { ?>
  <<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-2col-stacked <?php print $classes;?> clearfix">
	
  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
	
  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
  <?php print $header; ?>
  </<?php print $header_wrapper ?>>
	
  <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
  <?php print $left; ?>
  </<?php print $left_wrapper ?>>
	
  <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
  <?php print $right; ?>
  </<?php print $right_wrapper ?>>
	
  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
  <?php print $footer; ?>
  </<?php print $footer_wrapper ?>>
	
  </<?php print $layout_wrapper ?>>
	 
  <?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
	  
  <?php endif; ?>
<?php 		
} 
else{ 
  $show = 'show';
  $node_url_id = node_load($arg[1]);
  $node_url_software_platform = $node_url_id->field_software['und'][0]['target_id'];
  foreach ($variables['field_manual_product_id'] as $product_id){
    $manual_software_platform_id = $product_id['entity']->field_software['und'][0]['target_id'];
    if ($manual_software_platform_id == $node_url_software_platform) {
	  $show = 'hide';
    }
	if ($product_id['target_id'] == $arg[1]) { ?>
	  <<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-2col-stacked <?php print $classes;?> clearfix">

 	  <?php if (isset($title_suffix['contextual_links'])): ?>
 	  <?php print render($title_suffix['contextual_links']); ?>
	  <?php endif; ?>
		
	  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
	  <?php print $header; ?>
	  </<?php print $header_wrapper ?>>
		
	  <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
	  <?php print $left; ?>
	  </<?php print $left_wrapper ?>>
		
	  <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
	  <?php print $right; ?>
	  </<?php print $right_wrapper ?>>
		
	  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
      <?php print $footer; ?>
	  </<?php print $footer_wrapper ?>>
		
	  </<?php print $layout_wrapper ?>>
		
	  <?php if (!empty($drupal_render_children)): ?>
		<?php print $drupal_render_children ?>
	  <?php endif; ?>
<?php 	  
	}
  }
  if ($show == 'show'){?>
     <<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-2col-stacked <?php print $classes;?> clearfix">
  
   	  <?php if (isset($title_suffix['contextual_links'])): ?>
   	  <?php print render($title_suffix['contextual_links']); ?>
  	  <?php endif; ?>
  		
  	  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
  	  <?php print $header; ?>
  	  </<?php print $header_wrapper ?>>
  		
  	  <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
  	  <?php print $left; ?>
  	  </<?php print $left_wrapper ?>>
  		
  	  <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
  	  <?php print $right; ?>
  	  </<?php print $right_wrapper ?>>
  		
  	  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
        <?php print $footer; ?>
  	  </<?php print $footer_wrapper ?>>
  		
  	  </<?php print $layout_wrapper ?>>
  		
  	  <?php if (!empty($drupal_render_children)): ?>
  		<?php print $drupal_render_children ?>
  	  <?php endif; ?>
  <?php 
  }
}   ?>  

<?php print ' ';?>

