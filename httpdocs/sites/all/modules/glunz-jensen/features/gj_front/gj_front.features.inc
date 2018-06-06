<?php
/**
 * @file
 * gj_front.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function gj_front_image_default_styles() {
  $styles = array();

  // Exported image style: news_teaser.
  $styles['news_teaser'] = array(
    'label' => 'News teaser',
    'effects' => array(
      81 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
