<?php
/**
 * @file
 * gj_partners_ct.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gj_partners_ct_node_info() {
  $items = array(
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => t('Partners with Glunz-Jensen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
