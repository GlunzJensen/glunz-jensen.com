<?php
/**
 * @file
 * investor_video.features.inc
 */

/**
 * Implements hook_views_api().
 */
function investor_video_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function investor_video_image_default_styles() {
  $styles = array();

  // Exported image style: preview_image.
  $styles['preview_image'] = array(
    'label' => 'preview_image',
    'effects' => array(
      82 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function investor_video_node_info() {
  $items = array(
    'investor_video' => array(
      'name' => t('Investor video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
