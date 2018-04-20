<?php
/**
 * @file
 * gj_investornews_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gj_investornews_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'investornews';
  $view->description = 'Display a list of years that link to inevestordata for that year.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Investornews';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Delårsrapporter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'domain';
  $handler->display->display_options['access']['domains'] = array(
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
    2 => 0,
  );
  $handler->display->display_options['access']['domain_strict'] = 0;
  $handler->display->display_options['access']['domain_member'] = 0;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  /* Filter criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['filters']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['filters']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['filters']['field_message_year_value']['field'] = 'field_message_year_value';

  /* Display: Page - Selskabsmeddelelser */
  $handler = $view->new_display('page', 'Page - Selskabsmeddelelser', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Public announcements';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Selskabsmeddelelser';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_message_number' => 'field_message_number',
    'created' => 'created',
    'title' => 'title',
    'field_pdf' => 'field_pdf',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_message_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'field_pdf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'investornews:block';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf_1']['id'] = 'field_pdf_1';
  $handler->display->display_options['fields']['field_pdf_1']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf_1']['delta_offset'] = '0';
  /* Field: Content: Nr. */
  $handler->display->display_options['fields']['field_message_number']['id'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['table'] = 'field_data_field_message_number';
  $handler->display->display_options['fields']['field_message_number']['field'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['label'] = '';
  $handler->display->display_options['fields']['field_message_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_message_number']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['field_message_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_message_number']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['created']['element_class'] = 'investor-date';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-label';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['field_pdf']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['element_class'] = 'investor-pdf';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['arguments']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['arguments']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['arguments']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['arguments']['field_message_year_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_message_year_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_message_year_value']['default_argument_options']['code'] = 'return date("Y");';
  $handler->display->display_options['arguments']['field_message_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_message_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_message_year_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_message_year_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  $handler->display->display_options['path'] = 'investor/nyheder/selskabsmeddelelser';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Selskabsmeddelelser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-of-years';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_message_year',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Meddelelses år */
  $handler->display->display_options['fields']['field_message_year']['id'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['fields']['field_message_year']['field'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['label'] = '';
  $handler->display->display_options['fields']['field_message_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_message_year']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_message_year']['alter']['path'] = 'investor/nyheder/selskabsmeddelelser/[field_message_year]';
  $handler->display->display_options['fields']['field_message_year']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_message_year']['alter']['link_class'] = 'targetyear';
  $handler->display->display_options['fields']['field_message_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_message_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['sorts']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['sorts']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  /* Filter criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['filters']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['filters']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['filters']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['filters']['field_message_year_value']['operator'] = 'shorterthan';
  $handler->display->display_options['filters']['field_message_year_value']['value'] = '5';

  /* Display: Page - Delårsrapport */
  $handler = $view->new_display('page', 'Page - Delårsrapport', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Delårsrapporter';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_message_number' => 'field_message_number',
    'title' => 'title',
    'field_pdf' => 'field_pdf',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_message_number' => array(
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
    'field_pdf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf_1']['id'] = 'field_pdf_1';
  $handler->display->display_options['fields']['field_pdf_1']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf_1']['delta_offset'] = '0';
  /* Field: Content: Nr. */
  $handler->display->display_options['fields']['field_message_number']['id'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['table'] = 'field_data_field_message_number';
  $handler->display->display_options['fields']['field_message_number']['field'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['label'] = '';
  $handler->display->display_options['fields']['field_message_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_message_number']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['field_message_number']['element_label_colon'] = FALSE;
  /* Field: Content: Kvartalsmeddelelse */
  $handler->display->display_options['fields']['field_quarter']['id'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['fields']['field_quarter']['field'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['label'] = '';
  $handler->display->display_options['fields']['field_quarter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_quarter']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['field_quarter']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  /* Filter criterion: Content: Kvartalsmeddelelse (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['value'] = array(
    'Q1' => 'Q1',
    'Q2' => 'Q2',
    'Q3' => 'Q3',
    'Q4' => 'Q4',
  );
  $handler->display->display_options['path'] = 'investor/delårsrapport';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Delårsrapport';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page - Årsrapport */
  $handler = $view->new_display('page', 'Page - Årsrapport', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Årsrapporter';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'aarsrapport';
  $handler->display->display_options['display_description'] = 'Årsrapporter';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_message_number' => 'field_message_number',
    'title' => 'title',
    'field_pdf' => 'field_pdf',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_message_number' => array(
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
    'field_pdf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf_1']['id'] = 'field_pdf_1';
  $handler->display->display_options['fields']['field_pdf_1']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_1']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf_1']['delta_offset'] = '0';
  /* Field: Content: Meddelelses år */
  $handler->display->display_options['fields']['field_message_year']['id'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['fields']['field_message_year']['field'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['label'] = '';
  $handler->display->display_options['fields']['field_message_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_message_year']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = '[field_pdf-fid]';
  $handler->display->display_options['fields']['field_pdf']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['sorts']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['sorts']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  /* Filter criterion: Content: Kvartalsmeddelelse (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['value'] = array(
    'Aarsrapport' => 'Aarsrapport',
  );
  /* Filter criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['filters']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['filters']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['filters']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['filters']['field_message_year_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_message_year_value']['value'] = '6';
  $handler->display->display_options['path'] = 'investor/årsrapport';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Årsrapport';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block - 3 selskabsmeddeleler */
  $handler = $view->new_display('block', 'Block - 3 selskabsmeddeleler', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste Selskabsmeddelelser';
  $handler->display->display_options['display_description'] = '3 latest selskabsmeddeleler til Investor page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'created' => 'created',
    'field_message_number' => 'field_message_number',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'investor-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  /* Field: Content: Nr. */
  $handler->display->display_options['fields']['field_message_number']['id'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['table'] = 'field_data_field_message_number';
  $handler->display->display_options['fields']['field_message_number']['field'] = 'field_message_number';
  $handler->display->display_options['fields']['field_message_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_message_number']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['element_wrapper_class'] = 'investor-pdf';
  $handler->display->display_options['fields']['field_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_pdf]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title-label';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  $handler->display->display_options['block_description'] = 'View - 3 Selskabsmeddelelser';

  /* Display: Page - Andre udgivelser */
  $handler = $view->new_display('page', 'Page - Andre udgivelser', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Andre Udgivelser';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_message_year' => 'field_message_year',
    'field_pdf' => 'field_pdf',
    'title' => 'title',
    'field_pdf_1' => 'field_pdf_1',
    'field_quarter' => 'field_quarter',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_message_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pdf' => array(
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
    'field_pdf_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quarter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Meddelelses år */
  $handler->display->display_options['fields']['field_message_year']['id'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['fields']['field_message_year']['field'] = 'field_message_year';
  $handler->display->display_options['fields']['field_message_year']['label'] = '';
  $handler->display->display_options['fields']['field_message_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_message_year']['element_label_colon'] = FALSE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_pdf']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_pdf]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Kvartalsmeddelelse */
  $handler->display->display_options['fields']['field_quarter']['id'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['fields']['field_quarter']['field'] = 'field_quarter';
  $handler->display->display_options['fields']['field_quarter']['label'] = 'Type';
  $handler->display->display_options['fields']['field_quarter']['exclude'] = TRUE;
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf_1']['id'] = 'field_pdf_1';
  $handler->display->display_options['fields']['field_pdf_1']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Meddelelses år (field_message_year) */
  $handler->display->display_options['sorts']['field_message_year_value']['id'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['table'] = 'field_data_field_message_year';
  $handler->display->display_options['sorts']['field_message_year_value']['field'] = 'field_message_year_value';
  $handler->display->display_options['sorts']['field_message_year_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'investor_data' => 'investor_data',
  );
  /* Filter criterion: Content: Kvartalsmeddelelse (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['value'] = array(
    'Aarsresume' => 'Aarsresume',
    'Summary' => 'Summary',
  );
  $handler->display->display_options['path'] = 'investor/udgivelser';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Andre Udgivelser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['investornews'] = array(
    t('Master'),
    t('Delårsrapporter'),
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
    t('Page - Selskabsmeddelelser'),
    t('Public announcements'),
    t('Selskabsmeddelelser'),
    t('All'),
    t('Block'),
    t('Page - Delårsrapport'),
    t('Page - Årsrapport'),
    t('Årsrapporter'),
    t('[field_pdf-fid]'),
    t('EDIT'),
    t('Block - 3 selskabsmeddeleler'),
    t('Seneste Selskabsmeddelelser'),
    t('3 latest selskabsmeddeleler til Investor page'),
    t('Nr.'),
    t('View - 3 Selskabsmeddelelser'),
    t('Page - Andre udgivelser'),
    t('Andre Udgivelser'),
    t('Type'),
  );
  $export['investornews'] = $view;

  return $export;
}
