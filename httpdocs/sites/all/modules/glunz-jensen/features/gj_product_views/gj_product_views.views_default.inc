<?php
/**
 * @file
 * gj_product_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gj_product_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No gallery for this item';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'product_images';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="instruction-text">Click to download images</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'product_gallery_800_flexslider',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Gallery image (field_gallery_image:alt) */
  $handler->display->display_options['filters']['field_gallery_image_alt']['id'] = 'field_gallery_image_alt';
  $handler->display->display_options['filters']['field_gallery_image_alt']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['filters']['field_gallery_image_alt']['field'] = 'field_gallery_image_alt';
  $handler->display->display_options['filters']['field_gallery_image_alt']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'productgallery';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nothing' => 'nothing',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery image (field_gallery_image:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<p class="gallery2500"><a href="/productgallery2500/!1/[delta]">Max resolution, 300 dpi – 2500 px</a></p>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<p class="gallery1100"><a href="/productgallery1100/!1/[delta]">For Word (printing), 150 dpi (max 20 CM) – 1100 px</a></p>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<p class="gallery600"><a href="/productgallery600/!1/[delta]">PowerPoint, 72 dpi (max 20 cm) – 600 px</a></p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="instruction-text">Click to download images</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Page gallery 300px */
  $handler = $view->new_display('page', 'Page gallery 300px', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'productgallery300',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Gallery image (field_gallery_image:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'default';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['delta']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'productgallery300/%/%';

  /* Display: Page gallery 600px */
  $handler = $view->new_display('page', 'Page gallery 600px', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'productgallery600',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Gallery image (field_gallery_image:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'default';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['delta']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'productgallery600/%/%';

  /* Display: Page gallery 1100px */
  $handler = $view->new_display('page', 'Page gallery 1100px', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'productgallery1100',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Gallery image (field_gallery_image:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'default';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['delta']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'productgallery1100/%/%';

  /* Display: Page gallery 2500px */
  $handler = $view->new_display('page', 'Page gallery 2500px', 'page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'productgallery2500',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Gallery image (field_gallery_image:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'default';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['delta']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'productgallery2500/%/%';
  $translatables['gallery'] = array(
    t('Master'),
    t('Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No gallery for this item'),
    t('Page'),
    t('<h3 class="instruction-text">Click to download images</h3>'),
    t('All'),
    t('Block'),
    t('.'),
    t(','),
    t('<p class="gallery2500"><a href="/productgallery2500/!1/[delta]">Max resolution, 300 dpi – 2500 px</a></p>'),
    t('<p class="gallery1100"><a href="/productgallery1100/!1/[delta]">For Word (printing), 150 dpi (max 20 CM) – 1100 px</a></p>'),
    t('<p class="gallery600"><a href="/productgallery600/!1/[delta]">PowerPoint, 72 dpi (max 20 cm) – 600 px</a></p>'),
    t('<h2 class="instruction-text">Click to download images</h2>'),
    t('Page gallery 300px'),
    t('Page gallery 600px'),
    t('Page gallery 1100px'),
    t('Page gallery 2500px'),
  );
  $export['gallery'] = $view;

  $view = new view();
  $view->name = 'product_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product filter';
  $handler->display->display_options['css_class'] = 'product-filter-page';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Filter format */
  $handler->display->display_options['fields']['field_filter_format']['id'] = 'field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['field'] = 'field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['label'] = '';
  $handler->display->display_options['fields']['field_filter_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_filter_format']['delta_offset'] = '0';
  /* Field: Content: Filter technology */
  $handler->display->display_options['fields']['field_filter_technology']['id'] = 'field_filter_technology';
  $handler->display->display_options['fields']['field_filter_technology']['table'] = 'field_data_field_filter_technology';
  $handler->display->display_options['fields']['field_filter_technology']['field'] = 'field_filter_technology';
  $handler->display->display_options['fields']['field_filter_technology']['delta_offset'] = '0';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['field_accessory_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accessory_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_discontinued_value']['group'] = 1;
  $handler->display->display_options['filters']['field_discontinued_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Filter type (field_filter_type) */
  $handler->display->display_options['filters']['field_filter_type_value']['id'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['table'] = 'field_data_field_filter_type';
  $handler->display->display_options['filters']['field_filter_type_value']['field'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['value'] = array(
    'ictp' => 'ictp',
  );
  $handler->display->display_options['filters']['field_filter_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator_id'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['label'] = 'TYPE';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['identifier'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Filter segment (field_filter_segment) */
  $handler->display->display_options['filters']['field_filter_segment_value']['id'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['table'] = 'field_data_field_filter_segment';
  $handler->display->display_options['filters']['field_filter_segment_value']['field'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_segment_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator_id'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['label'] = 'SEGMENT';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['identifier'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Filter format (field_filter_format) (selective) */
  $handler->display->display_options['filters']['field_filter_format_value_selective']['id'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['field'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['ui_name'] = 'Filter format (field_filter_format) (selective)';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['label'] = 'FORMAT';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['identifier'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_display_field'] = 'field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Content: Filter functions (field_filter_functions) */
  $handler->display->display_options['filters']['field_filter_functions_value']['id'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['table'] = 'field_data_field_filter_functions';
  $handler->display->display_options['filters']['field_filter_functions_value']['field'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_functions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['operator_id'] = 'field_filter_functions_value_op';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['label'] = 'FUNCTIONS';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['operator'] = 'field_filter_functions_value_op';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['identifier'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Page Offset */
  $handler = $view->new_display('page', 'Page Offset', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'OFFSET';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['field_accessory_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accessory_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_discontinued_value']['group'] = 1;
  $handler->display->display_options['filters']['field_discontinued_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Filter type (field_filter_type) */
  $handler->display->display_options['filters']['field_filter_type_value']['id'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['table'] = 'field_data_field_filter_type';
  $handler->display->display_options['filters']['field_filter_type_value']['field'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['value'] = array(
    'offset' => 'offset',
  );
  $handler->display->display_options['filters']['field_filter_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator_id'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['label'] = 'TYPE';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['identifier'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Filter segment (field_filter_segment) */
  $handler->display->display_options['filters']['field_filter_segment_value']['id'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['table'] = 'field_data_field_filter_segment';
  $handler->display->display_options['filters']['field_filter_segment_value']['field'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_segment_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator_id'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['label'] = 'SEGMENT';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['identifier'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Filter format (field_filter_format) (selective) */
  $handler->display->display_options['filters']['field_filter_format_value_selective']['id'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['field'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['ui_name'] = 'Filter format (field_filter_format) (selective)';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['label'] = 'FORMAT';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['identifier'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_display_field'] = 'field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Content: Filter technology (field_filter_technology) */
  $handler->display->display_options['filters']['field_filter_technology_tid']['id'] = 'field_filter_technology_tid';
  $handler->display->display_options['filters']['field_filter_technology_tid']['table'] = 'field_data_field_filter_technology';
  $handler->display->display_options['filters']['field_filter_technology_tid']['field'] = 'field_filter_technology_tid';
  $handler->display->display_options['filters']['field_filter_technology_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_technology_tid']['expose']['operator_id'] = 'field_filter_technology_tid_op';
  $handler->display->display_options['filters']['field_filter_technology_tid']['expose']['label'] = 'TECHNOLOGY';
  $handler->display->display_options['filters']['field_filter_technology_tid']['expose']['operator'] = 'field_filter_technology_tid_op';
  $handler->display->display_options['filters']['field_filter_technology_tid']['expose']['identifier'] = 'field_filter_technology_tid';
  $handler->display->display_options['filters']['field_filter_technology_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_technology_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_filter_technology_tid']['vocabulary'] = 'product_filter_technology';
  $handler->display->display_options['filters']['field_filter_technology_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'product-filter/offset';

  /* Display: Page Flexo */
  $handler = $view->new_display('page', 'Page Flexo', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FLEXO';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Filter format */
  $handler->display->display_options['fields']['field_filter_format']['id'] = 'field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['field'] = 'field_filter_format';
  $handler->display->display_options['fields']['field_filter_format']['label'] = '';
  $handler->display->display_options['fields']['field_filter_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_filter_format']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['field_accessory_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accessory_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_discontinued_value']['group'] = 1;
  $handler->display->display_options['filters']['field_discontinued_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Filter type (field_filter_type) */
  $handler->display->display_options['filters']['field_filter_type_value']['id'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['table'] = 'field_data_field_filter_type';
  $handler->display->display_options['filters']['field_filter_type_value']['field'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['value'] = array(
    'flexo' => 'flexo',
  );
  $handler->display->display_options['filters']['field_filter_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator_id'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['label'] = 'TYPE';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['identifier'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Filter format (field_filter_format) (selective) */
  $handler->display->display_options['filters']['field_filter_format_value_selective']['id'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['field'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['ui_name'] = 'Filter format (field_filter_format) (selective)';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['label'] = 'FORMAT';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['identifier'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_display_field'] = 'field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Content: Filter functions (field_filter_functions) */
  $handler->display->display_options['filters']['field_filter_functions_value']['id'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['table'] = 'field_data_field_filter_functions';
  $handler->display->display_options['filters']['field_filter_functions_value']['field'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_functions_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['operator_id'] = 'field_filter_functions_value_op';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['label'] = 'FUNCTIONS';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['operator'] = 'field_filter_functions_value_op';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['identifier'] = 'field_filter_functions_value';
  $handler->display->display_options['filters']['field_filter_functions_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Filter technology flexo (field_filter_technology_flexo) */
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['id'] = 'field_filter_technology_flexo_tid';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['table'] = 'field_data_field_filter_technology_flexo';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['field'] = 'field_filter_technology_flexo_tid';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['expose']['operator_id'] = 'field_filter_technology_flexo_tid_op';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['expose']['label'] = 'TECHNOLOGY';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['expose']['operator'] = 'field_filter_technology_flexo_tid_op';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['expose']['identifier'] = 'field_filter_technology_flexo_tid';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['vocabulary'] = 'product_filter_technology_flexo';
  $handler->display->display_options['filters']['field_filter_technology_flexo_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'product-filter/flexo';

  /* Display: Page ICTP */
  $handler = $view->new_display('page', 'Page ICTP', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ICTP';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['field_accessory_value']['group'] = 1;
  $handler->display->display_options['filters']['field_accessory_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['filters']['field_discontinued_value']['group'] = 1;
  $handler->display->display_options['filters']['field_discontinued_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Filter type (field_filter_type) */
  $handler->display->display_options['filters']['field_filter_type_value']['id'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['table'] = 'field_data_field_filter_type';
  $handler->display->display_options['filters']['field_filter_type_value']['field'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['value'] = array(
    'ictp' => 'ictp',
  );
  $handler->display->display_options['filters']['field_filter_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator_id'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['label'] = 'TYPE';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['operator'] = 'field_filter_type_value_op';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['identifier'] = 'field_filter_type_value';
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Filter segment (field_filter_segment) */
  $handler->display->display_options['filters']['field_filter_segment_value']['id'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['table'] = 'field_data_field_filter_segment';
  $handler->display->display_options['filters']['field_filter_segment_value']['field'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_segment_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator_id'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['label'] = 'SEGMENT';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['operator'] = 'field_filter_segment_value_op';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['identifier'] = 'field_filter_segment_value';
  $handler->display->display_options['filters']['field_filter_segment_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Filter format (field_filter_format) (selective) */
  $handler->display->display_options['filters']['field_filter_format_value_selective']['id'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['table'] = 'field_data_field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['field'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['ui_name'] = 'Filter format (field_filter_format) (selective)';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['label'] = 'FORMAT';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['identifier'] = 'field_filter_format_value_selective';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_display_field'] = 'field_filter_format';
  $handler->display->display_options['filters']['field_filter_format_value_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'product-filter/ictp';
  $translatables['product_filter'] = array(
    t('Master'),
    t('Product filter'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Filter technology'),
    t('TYPE'),
    t('SEGMENT'),
    t('FORMAT'),
    t('FUNCTIONS'),
    t('Page Offset'),
    t('OFFSET'),
    t('TECHNOLOGY'),
    t('Page Flexo'),
    t('FLEXO'),
    t('Page ICTP'),
    t('ICTP'),
  );
  $export['product_filter'] = $view;

  $view = new view();
  $view->name = 'product_highlight_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product highlight';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Highlight image */
  $handler->display->display_options['fields']['field_highlight_image']['id'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['table'] = 'field_data_field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['field'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Highlight title */
  $handler->display->display_options['fields']['field_highlight_title']['id'] = 'field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['table'] = 'field_data_field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['field'] = 'field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_title']['element_label_colon'] = FALSE;
  /* Field: Content: Highlight body */
  $handler->display->display_options['fields']['field_highlight_body']['id'] = 'field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['table'] = 'field_data_field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['field'] = 'field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_body']['element_label_colon'] = FALSE;
  /* Field: Content: Highlight link */
  $handler->display->display_options['fields']['field_highlight_link']['id'] = 'field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['table'] = 'field_data_field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['field'] = 'field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['click_sort_column'] = 'url';
  /* Field: Content: Highlight file */
  $handler->display->display_options['fields']['field_highlight_file']['id'] = 'field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['table'] = 'field_data_field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['field'] = 'field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_file']['delta_offset'] = '0';
  /* Field: Content: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_highlight_video']['settings'] = array(
    'view_mode' => 'full',
    'links' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Highlight title */
  $handler->display->display_options['fields']['field_highlight_title']['id'] = 'field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['table'] = 'field_data_field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['field'] = 'field_highlight_title';
  $handler->display->display_options['fields']['field_highlight_title']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_title']['element_label_colon'] = FALSE;
  /* Field: Content: Highlight image */
  $handler->display->display_options['fields']['field_highlight_image']['id'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['table'] = 'field_data_field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['field'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Highlight body */
  $handler->display->display_options['fields']['field_highlight_body']['id'] = 'field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['table'] = 'field_data_field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['field'] = 'field_highlight_body';
  $handler->display->display_options['fields']['field_highlight_body']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_body']['element_label_colon'] = FALSE;
  /* Field: Content: Highlight link */
  $handler->display->display_options['fields']['field_highlight_link']['id'] = 'field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['table'] = 'field_data_field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['field'] = 'field_highlight_link';
  $handler->display->display_options['fields']['field_highlight_link']['click_sort_column'] = 'url';
  /* Field: Content: Highlight file */
  $handler->display->display_options['fields']['field_highlight_file']['id'] = 'field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['table'] = 'field_data_field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['field'] = 'field_highlight_file';
  $handler->display->display_options['fields']['field_highlight_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_file']['delta_offset'] = '0';
  /* Field: Content: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_highlight_video']['settings'] = array(
    'view_mode' => 'full',
    'links' => 0,
  );
  $translatables['product_highlight_block'] = array(
    t('Master'),
    t('Product highlight'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Highlight link'),
    t('Highlight file'),
    t('All'),
    t('Block'),
  );
  $export['product_highlight_block'] = $view;

  $view = new view();
  $view->name = 'product_vbo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product VBO';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product VBO';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_manual' => 'field_manual',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manual' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Manual */
  $handler->display->display_options['fields']['field_manual']['id'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['table'] = 'field_data_field_manual';
  $handler->display->display_options['fields']['field_manual']['field'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_manual']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_manual']['delta_offset'] = '0';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page VBO */
  $handler = $view->new_display('page', 'Page VBO', 'page');
  $handler->display->display_options['path'] = 'product-vbo';

  /* Display: Page Edit */
  $handler = $view->new_display('page', 'Page Edit', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Edit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Manual */
  $handler->display->display_options['fields']['field_manual']['id'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['table'] = 'field_data_field_manual';
  $handler->display->display_options['fields']['field_manual']['field'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_manual']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_manual']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['path'] = 'product-edit';
  $translatables['product_vbo'] = array(
    t('Master'),
    t('Product VBO'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nid'),
    t('Title'),
    t('Manual'),
    t('Content'),
    t('Page VBO'),
    t('Page Edit'),
    t('Product Edit'),
    t('Edit link'),
    t('Edit'),
  );
  $export['product_vbo'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_category' => 'product_category',
    'labels' => 0,
    'newstype' => 0,
    'oem' => 0,
    'platforms' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Product category';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );

  /* Display: Product Page */
  $handler = $view->new_display('page', 'Product Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_category' => 'product_category',
    'labels' => 0,
    'newstype' => 0,
    'oem' => 0,
    'platforms' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'label';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'labels' => 'labels',
    'event_location' => 0,
    'investor_data' => 0,
    'newstype' => 0,
    'oem' => 0,
    'permissions' => 0,
    'platforms' => 0,
    'product_category' => 0,
    'tags' => 0,
    'type_of_event' => 0,
    'type_of_video' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid_1';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: OEM Dedicated products Page */
  $handler = $view->new_display('page', 'OEM Dedicated products Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[field_label] Products';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_category' => 'product_category',
    'labels' => 0,
    'newstype' => 0,
    'oem' => 0,
    'platforms' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'label';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'labels' => 'labels',
    'event_location' => 0,
    'investor_data' => 0,
    'newstype' => 0,
    'oem' => 0,
    'permissions' => 0,
    'platforms' => 0,
    'product_category' => 0,
    'tags' => 0,
    'type_of_event' => 0,
    'type_of_video' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid_1';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Label (field_label) */
  $handler->display->display_options['filters']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['filters']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['filters']['field_label_tid']['field'] = 'field_label_tid';
  $handler->display->display_options['filters']['field_label_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_label_tid']['value'] = array(
    79 => '79',
    82 => '82',
    81 => '81',
  );
  $handler->display->display_options['filters']['field_label_tid']['expose']['operator_id'] = 'field_label_tid_op';
  $handler->display->display_options['filters']['field_label_tid']['expose']['label'] = 'Label (field_label)';
  $handler->display->display_options['filters']['field_label_tid']['expose']['operator'] = 'field_label_tid_op';
  $handler->display->display_options['filters']['field_label_tid']['expose']['identifier'] = 'field_label_tid';
  $handler->display->display_options['filters']['field_label_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_label_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_label_tid']['vocabulary'] = 'labels';
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['path'] = 'products/oem-dedicated';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'OEM Products';
  $handler->display->display_options['menu']['description'] = 'OEM Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Offset Products Page */
  $handler = $view->new_display('page', 'Offset Products Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offset Products';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    84 => '84',
    33 => '33',
    34 => '34',
    35 => '35',
    25 => '25',
    86 => '86',
    64 => '64',
    26 => '26',
    30 => '30',
    29 => '29',
    27 => '27',
    28 => '28',
    42 => '42',
    67 => '67',
    38 => '38',
    40 => '40',
    56 => '56',
    60 => '60',
    58 => '58',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'products/offset';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Offset products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo Products Page */
  $handler = $view->new_display('page', 'Flexo Products Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flexo Products';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['sorts']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['sorts']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['sorts']['field_product_category_tid']['field'] = 'field_product_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    49 => '49',
    90 => '90',
    50 => '50',
    51 => '51',
    91 => '91',
    53 => '53',
    92 => '92',
    93 => '93',
    80 => '80',
    94 => '94',
    55 => '55',
    54 => '54',
    546 => '546',
    88 => '88',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['path'] = 'products/flexo';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Flexo products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Accessories and Spares Page */
  $handler = $view->new_display('page', 'Accessories and Spares Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accessories & Spares';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<hr/>
<p><em><h2>[name]</h2></em></p>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '';
  $handler->display->display_options['fields']['field_product_category']['delta_reversed'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['sorts']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['sorts']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['sorts']['field_product_category_tid']['field'] = 'field_product_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'accessory' => 'accessory',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  $handler->display->display_options['path'] = 'products/accessories-and-spares';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Accessories & Spares';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Discontinued Products */
  $handler = $view->new_display('page', 'Discontinued Products', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Discontinued Products';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'discontinued' => 'discontinued',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/discontinued';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Discontinued Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Offset -> Processors Products Page */
  $handler = $view->new_display('page', 'Offset -> Processors Products Page', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offset Processors';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['label'] = '';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    26 => '26',
    30 => '30',
    29 => '29',
    27 => '27',
    28 => '28',
    42 => '42',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid_1']['id'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid_1']['value'] = array(
    30 => '30',
    29 => '29',
    27 => '27',
    28 => '28',
    42 => '42',
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator_id'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['label'] = 'Technology';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['identifier'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid_1']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Solution (field_solution) */
  $handler->display->display_options['filters']['field_solution_target_id']['id'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['table'] = 'field_data_field_solution';
  $handler->display->display_options['filters']['field_solution_target_id']['field'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['operator_id'] = 'field_solution_target_id_op';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['label'] = 'Solution (field_solution)';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['operator'] = 'field_solution_target_id_op';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['identifier'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['label'] = 'Customer type';
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['identifier'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Commercial Solutions - high volume',
      'operator' => '=',
      'value' => array(
        'value' => '2829',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Commercial Solutions - medium volume',
      'operator' => '=',
      'value' => array(
        'value' => '2828',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Newspaper Solutions - high volume',
      'operator' => '=',
      'value' => array(
        'value' => '2826',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Newspaper Solutions - medium',
      'operator' => '=',
      'value' => array(
        'value' => '2825',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'products/offset/processors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Offset processors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Offset -> iCtP Products Page */
  $handler = $view->new_display('page', 'Offset -> iCtP Products Page', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'iCtP Systems';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid_1']['id'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid_1']['value'] = array(
    34 => '34',
    35 => '35',
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator_id'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['label'] = 'Technology';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['identifier'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid_1']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'products/offset/ictp';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'iCtP Systems';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Offset -> Commercial Automation Products Page */
  $handler = $view->new_display('page', 'Offset -> Commercial Automation Products Page', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offset Commercial Automation';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid_1']['id'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid_1']['value'] = array(
    67 => '67',
    38 => '38',
    40 => '40',
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator_id'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['label'] = 'Technology';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['identifier'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid_1']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/offset/automation';
  $handler->display->display_options['menu']['title'] = 'Commercial Automation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Flexo -> Exposure Units */
  $handler = $view->new_display('page', 'Flexo -> Exposure Units', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flexo Exposure Units';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    50 => '50',
    92 => '92',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/exposure-units';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Exposure Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> Processors */
  $handler = $view->new_display('page', 'Flexo -> Processors', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flexo Processors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    51 => '51',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/processors';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Processors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> Finishers & Dryers */
  $handler = $view->new_display('page', 'Flexo -> Finishers & Dryers', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Finishers & Dryers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    92 => '92',
    91 => '91',
    53 => '53',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/finishers-dryers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Finishers & Dryers ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> Trimmers & Mounting Tables */
  $handler = $view->new_display('page', 'Flexo -> Trimmers & Mounting Tables', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trimmers & Mounting Tables';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    55 => '55',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/trimmers-mounting-tables';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trimmers & Mounting Tables';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> Letterpresses */
  $handler = $view->new_display('page', 'Flexo -> Letterpresses', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Letterpresses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    54 => '54',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/letterpresses';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Letterpresses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> All in one units */
  $handler = $view->new_display('page', 'Flexo -> All in one units', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All-in-One Units';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    93 => '93',
    80 => '80',
    94 => '94',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/all-in-one-units';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All-in-One Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Accessories -> iCtP Consumables & Accessories */
  $handler = $view->new_display('page', 'Accessories -> iCtP Consumables & Accessories', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'iCtP Consumables & Accessories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'accessory' => 'accessory',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    25 => '25',
    86 => '86',
    64 => '64',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/accessories-and-spares/ictp-consumables-accessories';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'iCtP Consumables & Accessories';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Accessories -> Offset Accessories */
  $handler = $view->new_display('page', 'Accessories -> Offset Accessories', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offset Accessories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'accessory' => 'accessory',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    56 => '56',
    60 => '60',
    58 => '58',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/accessories-and-spares/offset-accessories';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Offset Accessories';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Accessories -> Flexo Accessories */
  $handler = $view->new_display('page', 'Accessories -> Flexo Accessories', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flexo Accessories';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'accessory' => 'accessory',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/accessories-and-spares/flexo-accessories';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Flexo Accessories';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'product_category' => 'product_category',
    'labels' => 0,
    'newstype' => 0,
    'oem' => 0,
    'platforms' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['required'] = TRUE;
  /* Relationship: Content: Gallery image (field_gallery_image:fid) */
  $handler->display->display_options['relationships']['field_gallery_image_fid']['id'] = 'field_gallery_image_fid';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['relationships']['field_gallery_image_fid']['field'] = 'field_gallery_image_fid';
  /* Relationship: Field: Image (field_image:fid) */
  $handler->display->display_options['relationships']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['relationships']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['relationships']['field_image_fid']['field'] = 'field_image_fid';
  /* Relationship: Domain Access: Domain node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'domain_access';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'min';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_gallery_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'Imagegallerypath';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri_1']['id'] = 'uri_1';
  $handler->display->display_options['fields']['uri_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri_1']['field'] = 'uri';
  $handler->display->display_options['fields']['uri_1']['relationship'] = 'field_image_fid';
  $handler->display->display_options['fields']['uri_1']['label'] = 'Imagepath';
  $handler->display->display_options['fields']['uri_1']['file_download_path'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['sorts']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['sorts']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['sorts']['field_product_category_tid']['field'] = 'field_product_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'products-export';

  /* Display: Accessories -> Spare Parts & Maintenance Kits */
  $handler = $view->new_display('page', 'Accessories -> Spare Parts & Maintenance Kits', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Various spare parts kits';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Accessory (field_accessory) */
  $handler->display->display_options['filters']['field_accessory_value']['id'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['table'] = 'field_data_field_accessory';
  $handler->display->display_options['filters']['field_accessory_value']['field'] = 'field_accessory_value';
  $handler->display->display_options['filters']['field_accessory_value']['value'] = array(
    'accessory' => 'accessory',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    496 => '496',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/accessories-and-spares/spare-parts-maintainance-kits';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Spare Parts & Maintenance Kits';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Manuals OEM Dedicated products Page */
  $handler = $view->new_display('page', 'Manuals OEM Dedicated products Page', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Download Product Manuals';
  $handler->display->display_options['display_description'] = 'Manuals for OEM Dedicated products Page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'manuals/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Manual (field_manual) */
  $handler->display->display_options['filters']['field_manual_target_id']['id'] = 'field_manual_target_id';
  $handler->display->display_options['filters']['field_manual_target_id']['table'] = 'field_data_field_manual';
  $handler->display->display_options['filters']['field_manual_target_id']['field'] = 'field_manual_target_id';
  $handler->display->display_options['filters']['field_manual_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'support/download/manuals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manuals';
  $handler->display->display_options['menu']['description'] = 'Download manuals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Manuals for product Page */
  $handler = $view->new_display('page', 'Manuals for product Page', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Manuals for [title]';
  $handler->display->display_options['display_description'] = 'Manuals for specific product Page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Below are listed the newest editions of the manuals available for this equipment. Please note that manuals intended for the end users are available in different languages (language code is shown at the end of the file name). Download a copy of each file number in order to cover the documentation needed for this equipment.
Spare parts will appear from either Service or Spare Parts manuals. Please check your equipment serial no with the serial nos listed on page 0-2 in the Service or Spare Parts manuals before ordering spare parts. The serial no appears from the equipment\'s name plate, which is normally placed on the rear side of the equipment.
Earlier editions of each manual can be retrieved by selecting "more".
The equipment will be delivered with a hardcopy of the <a href="/manual/21741"><strong>Safety Instruction Manual</strong></a> and the <a href="/support/download/approval-certificates"><strong>CE Declaration of Conformity</strong></a>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'manuals/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Manual */
  $handler->display->display_options['fields']['field_manual']['id'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['table'] = 'field_data_field_manual';
  $handler->display->display_options['fields']['field_manual']['field'] = 'field_manual';
  $handler->display->display_options['fields']['field_manual']['label'] = '';
  $handler->display->display_options['fields']['field_manual']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manual']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_manual']['settings'] = array(
    'view_mode' => 'full',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_manual']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_manual']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Sort criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['sorts']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['sorts']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['sorts']['field_product_category_tid']['field'] = 'field_product_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Manual (field_manual) */
  $handler->display->display_options['filters']['field_manual_target_id']['id'] = 'field_manual_target_id';
  $handler->display->display_options['filters']['field_manual_target_id']['table'] = 'field_data_field_manual';
  $handler->display->display_options['filters']['field_manual_target_id']['field'] = 'field_manual_target_id';
  $handler->display->display_options['filters']['field_manual_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'manuals/%';
  $handler->display->display_options['menu']['title'] = 'Manuals';
  $handler->display->display_options['menu']['description'] = 'Download manuals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Software OEM Dedicated products Page */
  $handler = $view->new_display('page', 'Software OEM Dedicated products Page', 'page_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Download Product Software';
  $handler->display->display_options['display_description'] = 'Software for OEM Dedicated products Page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'software-download/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Software (field_software) */
  $handler->display->display_options['filters']['field_software_target_id']['id'] = 'field_software_target_id';
  $handler->display->display_options['filters']['field_software_target_id']['table'] = 'field_data_field_software';
  $handler->display->display_options['filters']['field_software_target_id']['field'] = 'field_software_target_id';
  $handler->display->display_options['filters']['field_software_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'support/download/software';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Software';
  $handler->display->display_options['menu']['description'] = 'Download software';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Software for product Page */
  $handler = $view->new_display('page', 'Software for product Page', 'page_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Product Software';
  $handler->display->display_options['display_description'] = 'Software for specific product Page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
    5 => '5',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Software';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'software_manual_exception:block';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'manuals/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Software */
  $handler->display->display_options['fields']['field_software']['id'] = 'field_software';
  $handler->display->display_options['fields']['field_software']['table'] = 'field_data_field_software';
  $handler->display->display_options['fields']['field_software']['field'] = 'field_software';
  $handler->display->display_options['fields']['field_software']['label'] = '';
  $handler->display->display_options['fields']['field_software']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_software']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_software']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_software']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'software-download/%';
  $handler->display->display_options['menu']['title'] = 'Manuals';
  $handler->display->display_options['menu']['description'] = 'Download manuals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Gallery OEM Dedicated products Page */
  $handler = $view->new_display('page', 'Gallery OEM Dedicated products Page', 'page_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Download Product Software';
  $handler->display->display_options['display_description'] = 'Gallery for OEM Dedicated products Page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'productgallery/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['alter']['text'] = '<hr /><p><em><h2>[field_label]</h2></em></p>';
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_class'] = 'label';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Label (field_label) */
  $handler->display->display_options['sorts']['field_label_tid']['id'] = 'field_label_tid';
  $handler->display->display_options['sorts']['field_label_tid']['table'] = 'field_data_field_label';
  $handler->display->display_options['sorts']['field_label_tid']['field'] = 'field_label_tid';
  /* Sort criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['sorts']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['sorts']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['sorts']['field_product_category_tid']['field'] = 'field_product_category_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Gallery image (field_gallery_image:alt) */
  $handler->display->display_options['filters']['field_gallery_image_alt']['id'] = 'field_gallery_image_alt';
  $handler->display->display_options['filters']['field_gallery_image_alt']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['filters']['field_gallery_image_alt']['field'] = 'field_gallery_image_alt';
  $handler->display->display_options['filters']['field_gallery_image_alt']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'support/download/gallery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Gallery';
  $handler->display->display_options['menu']['description'] = 'Download product images';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Service -> Service Contracts */
  $handler = $view->new_display('page', 'Service -> Service Contracts', 'page_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Contracts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    523 => '523',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'services/contracts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Service Contracts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Service -> Other Services */
  $handler = $view->new_display('page', 'Service -> Other Services', 'page_25');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Services';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    524 => '524',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'services/other';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Other Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Offset -> Plateline Products Page */
  $handler = $view->new_display('page', 'Offset -> Plateline Products Page', 'page_26');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Offset Processors';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['label'] = '';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['label'] = '';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    534 => '534',
    42 => '42',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid_1']['id'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid_1']['value'] = array(
    30 => '30',
    29 => '29',
    27 => '27',
    28 => '28',
    42 => '42',
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator_id'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['label'] = 'Technology';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['operator'] = 'field_product_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['identifier'] = 'field_product_category_tid_1';
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_tid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid_1']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'active' => 'active',
  );
  /* Filter criterion: Content: Solution (field_solution) */
  $handler->display->display_options['filters']['field_solution_target_id']['id'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['table'] = 'field_data_field_solution';
  $handler->display->display_options['filters']['field_solution_target_id']['field'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['operator_id'] = 'field_solution_target_id_op';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['label'] = 'Solution (field_solution)';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['operator'] = 'field_solution_target_id_op';
  $handler->display->display_options['filters']['field_solution_target_id']['expose']['identifier'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['label'] = 'Customer type';
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['identifier'] = 'field_solution_target_id';
  $handler->display->display_options['filters']['field_solution_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Commercial Solutions - high volume',
      'operator' => '=',
      'value' => array(
        'value' => '2829',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Commercial Solutions - medium volume',
      'operator' => '=',
      'value' => array(
        'value' => '2828',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Newspaper Solutions - high volume',
      'operator' => '=',
      'value' => array(
        'value' => '2826',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Newspaper Solutions - medium',
      'operator' => '=',
      'value' => array(
        'value' => '2825',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'products/offset/plateline';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Plateline';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Flexo -> Other Flexo */
  $handler = $view->new_display('page', 'Flexo -> Other Flexo', 'page_27');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Flexo';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Label */
  $handler->display->display_options['fields']['field_label']['id'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['table'] = 'field_data_field_label';
  $handler->display->display_options['fields']['field_label']['field'] = 'field_label';
  $handler->display->display_options['fields']['field_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_label']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_label']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Platform */
  $handler->display->display_options['fields']['field_platform']['id'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['table'] = 'field_data_field_platform';
  $handler->display->display_options['fields']['field_platform']['field'] = 'field_platform';
  $handler->display->display_options['fields']['field_platform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_platform']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_platform']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_platform']['delta_offset'] = '0';
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Product category (field_product_category) */
  $handler->display->display_options['filters']['field_product_category_tid']['id'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['field'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['value'] = array(
    546 => '546',
  );
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator_id'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['label'] = 'Product category (field_product_category)';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['operator'] = 'field_product_category_tid_op';
  $handler->display->display_options['filters']['field_product_category_tid']['expose']['identifier'] = 'field_product_category_tid';
  $handler->display->display_options['filters']['field_product_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_tid']['vocabulary'] = 'product_category';
  $handler->display->display_options['filters']['field_product_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'products/flexo/other-flexo';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Other Flexo';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['products'] = array(
    t('Master'),
    t('Products'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Parent'),
    t('Label'),
    t('Product category'),
    t('Product Page'),
    t('label'),
    t('OEM Dedicated products Page'),
    t('[field_label] Products'),
    t('<hr /><p><em><h2>[field_label]</h2></em></p>'),
    t('Label (field_label)'),
    t('Offset Products Page'),
    t('Offset Products'),
    t('Product category (field_product_category)'),
    t('Flexo Products Page'),
    t('Flexo Products'),
    t('Accessories and Spares Page'),
    t('Accessories & Spares'),
    t('<hr/>
<p><em><h2>[name]</h2></em></p>'),
    t('Discontinued Products'),
    t('Platform'),
    t('Offset -> Processors Products Page'),
    t('Offset Processors'),
    t('Technology'),
    t('Solution (field_solution)'),
    t('Customer type'),
    t('Offset -> iCtP Products Page'),
    t('iCtP Systems'),
    t('Offset -> Commercial Automation Products Page'),
    t('Offset Commercial Automation'),
    t('Flexo -> Exposure Units'),
    t('Flexo Exposure Units'),
    t('Flexo -> Processors'),
    t('Flexo Processors'),
    t('Flexo -> Finishers & Dryers'),
    t('Finishers & Dryers'),
    t('Flexo -> Trimmers & Mounting Tables'),
    t('Trimmers & Mounting Tables'),
    t('Flexo -> Letterpresses'),
    t('Letterpresses'),
    t('Flexo -> All in one units'),
    t('All-in-One Units'),
    t('Accessories -> iCtP Consumables & Accessories'),
    t('iCtP Consumables & Accessories'),
    t('Accessories -> Offset Accessories'),
    t('Offset Accessories'),
    t('Accessories -> Flexo Accessories'),
    t('Flexo Accessories'),
    t('Data export'),
    t('File'),
    t('image from field_gallery_image'),
    t('image from field_image'),
    t('Domain node'),
    t('Nid'),
    t('Title'),
    t('Imagegallerypath'),
    t('Imagepath'),
    t('Accessories -> Spare Parts & Maintenance Kits'),
    t('Various spare parts kits'),
    t('Manuals OEM Dedicated products Page'),
    t('Download Product Manuals'),
    t('Manuals for OEM Dedicated products Page'),
    t('Manuals for product Page'),
    t('Product Manuals for [title]'),
    t('Manuals for specific product Page'),
    t('Below are listed the newest editions of the manuals available for this equipment. Please note that manuals intended for the end users are available in different languages (language code is shown at the end of the file name). Download a copy of each file number in order to cover the documentation needed for this equipment.
Spare parts will appear from either Service or Spare Parts manuals. Please check your equipment serial no with the serial nos listed on page 0-2 in the Service or Spare Parts manuals before ordering spare parts. The serial no appears from the equipment\'s name plate, which is normally placed on the rear side of the equipment.
Earlier editions of each manual can be retrieved by selecting "more".
The equipment will be delivered with a hardcopy of the <a href="/manual/21741"><strong>Safety Instruction Manual</strong></a> and the <a href="/support/download/approval-certificates"><strong>CE Declaration of Conformity</strong></a>.'),
    t('All'),
    t('Software OEM Dedicated products Page'),
    t('Download Product Software'),
    t('Software for OEM Dedicated products Page'),
    t('Software for product Page'),
    t('Product Software'),
    t('Software for specific product Page'),
    t('Software'),
    t('Gallery OEM Dedicated products Page'),
    t('Gallery for OEM Dedicated products Page'),
    t('Service -> Service Contracts'),
    t('Service Contracts'),
    t('Service -> Other Services'),
    t('Other Services'),
    t('Offset -> Plateline Products Page'),
    t('Flexo -> Other Flexo'),
    t('Other Flexo'),
  );
  $export['products'] = $view;

  $view = new view();
  $view->name = 'products_on_solutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products on solutions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relevant products ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_product_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_product_category' => 'field_product_category',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_product_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Product category */
  $handler->display->display_options['fields']['field_product_category']['id'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['table'] = 'field_data_field_product_category';
  $handler->display->display_options['fields']['field_product_category']['field'] = 'field_product_category';
  $handler->display->display_options['fields']['field_product_category']['label'] = '';
  $handler->display->display_options['fields']['field_product_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['alter']['text'] = '<span class="product-category">[field_product_category]</span>';
  $handler->display->display_options['fields']['field_product_category']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_product_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_category']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Solution (field_solution) */
  $handler->display->display_options['arguments']['field_solution_target_id']['id'] = 'field_solution_target_id';
  $handler->display->display_options['arguments']['field_solution_target_id']['table'] = 'field_data_field_solution';
  $handler->display->display_options['arguments']['field_solution_target_id']['field'] = 'field_solution_target_id';
  $handler->display->display_options['arguments']['field_solution_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_solution_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_solution_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_solution_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_solution_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_solution_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_solution_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_solution_target_id']['validate_options']['types'] = array(
    'solutions' => 'solutions',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Discontinued (field_discontinued) */
  $handler->display->display_options['filters']['field_discontinued_value']['id'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['table'] = 'field_data_field_discontinued';
  $handler->display->display_options['filters']['field_discontinued_value']['field'] = 'field_discontinued_value';
  $handler->display->display_options['filters']['field_discontinued_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_discontinued_value']['value'] = array(
    'discontinued' => 'discontinued',
  );
  $translatables['products_on_solutions'] = array(
    t('Master'),
    t('Relevant products '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<span class="product-category">[field_product_category]</span>'),
    t('All'),
    t('Block'),
  );
  $export['products_on_solutions'] = $view;

  return $export;
}
