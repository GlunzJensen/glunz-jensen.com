<?php
/**
 * @file
 * gj_investordata_ct.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gj_investordata_ct_node_info() {
  $items = array(
    'investor_data' => array(
      'name' => t('Investor data'),
      'base' => 'node_content',
      'description' => t('Content for year specific investor news'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
