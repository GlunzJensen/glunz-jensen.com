<?php
/**
 * @file
 * gj_product_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gj_product_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accessories|node|product|default';
  $field_group->group_name = 'group_accessories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product';
  $field_group->data = array(
    'label' => 'Accessories',
    'weight' => '4',
    'children' => array(
      0 => 'field_optional_features',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Accessories',
      'instance_settings' => array(
        'classes' => ' group-accessories field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_accessories|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brochures|node|product|default';
  $field_group->group_name = 'group_brochures';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_download';
  $field_group->data = array(
    'label' => 'Brochures',
    'weight' => '6',
    'children' => array(
      0 => 'field_brochure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Brochures',
      'instance_settings' => array(
        'classes' => 'product-tab group-brochures field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_product_full_group_brochures',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_brochures|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_case_stories|node|product|default';
  $field_group->group_name = 'group_case_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product';
  $field_group->data = array(
    'label' => 'Case stories',
    'weight' => '6',
    'children' => array(
      0 => 'field_prod_case_stories',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-case-stories field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_case_stories|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_download|node|product|default';
  $field_group->group_name = 'group_download';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product';
  $field_group->data = array(
    'label' => 'Download',
    'weight' => '7',
    'children' => array(
      0 => 'group_brochures',
      1 => 'group_software',
      2 => 'group_gallery',
      3 => 'group_manuals',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Download',
      'instance_settings' => array(
        'classes' => ' group-download field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_download|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|product|default';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_gallery_image',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'classes' => ' group-overview field-group-htab group-features',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_features|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlight|node|product|default';
  $field_group->group_name = 'group_highlight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '36',
    'children' => array(
      0 => 'field_highlight_image',
      1 => 'field_highlight_title',
      2 => 'field_highlight_body',
      3 => 'field_highlight_link',
      4 => 'field_highlight_file',
      5 => 'field_highlight_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'highlight group-highlight field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_highlight|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlight|node|product|form';
  $field_group->group_name = 'group_highlight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlight',
    'weight' => '18',
    'children' => array(
      0 => 'field_highlight_image',
      1 => 'field_highlight_title',
      2 => 'field_highlight_body',
      3 => 'field_highlight_link',
      4 => 'field_highlight_file',
      5 => 'field_highlight_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Highlight',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-highlight field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_highlight|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manuals|node|product|default';
  $field_group->group_name = 'group_manuals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_download';
  $field_group->data = array(
    'label' => 'Manuals',
    'weight' => '9',
    'children' => array(
      0 => 'field_manual',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Manuals',
      'instance_settings' => array(
        'classes' => 'product-tab group-manuals field-group-div',
        'description' => 'Below are listed the newest editions of the manuals available for this equipment. Please note that manuals intended for the end users are available in different languages (language code is shown at the end of the file name). Download a copy of each file number in order to cover the documentation needed for this equipment.
Spare parts will appear from either Service or Spare Parts manuals. Please check your equipment serial no with the serial nos listed on page 0-2 in the Service or Spare Parts manuals before ordering spare parts. The serial no appears from the equipment\'s name plate, which is normally placed on the rear side of the equipment.
Earlier editions of each manual can be retrieved by selecting "more".
The equipment will be delivered with a hardcopy of the <a href="/manual/21741"><strong>Safety Instruction Manual</strong></a> and the <a href="/support/download/approval-certificates"><strong>CE Declaration of Conformity</strong></a>.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_product_full_group_manuals',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_manuals|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product|node|product|default';
  $field_group->group_name = 'group_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' ',
    'weight' => '0',
    'children' => array(
      0 => 'group_features',
      1 => 'group_accessories',
      2 => 'group_specifications',
      3 => 'group_download',
      4 => 'group_case_stories',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => ' ',
      'instance_settings' => array(
        'classes' => ' group-product field-group-htabs',
      ),
    ),
  );
  $field_groups['group_product|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_software|node|product|default';
  $field_group->group_name = 'group_software';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_download';
  $field_group->data = array(
    'label' => 'Software',
    'weight' => '10',
    'children' => array(
      0 => 'field_software',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Software',
      'instance_settings' => array(
        'classes' => 'product-tab group-software field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_product_full_group_software',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_software|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_specifications|node|product|default';
  $field_group->group_name = 'group_specifications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_product';
  $field_group->data = array(
    'label' => 'Specifications',
    'weight' => '5',
    'children' => array(
      0 => 'field_productid',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Specifications',
      'instance_settings' => array(
        'classes' => ' group-specifications field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_specifications|node|product|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|product|default';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Videos',
    'weight' => '1',
    'children' => array(
      0 => 'field_video_reference',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-videos field-group-htab',
      ),
    ),
  );
  $field_groups['group_videos|node|product|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' ');
  t('Accessories');
  t('Brochures');
  t('Case stories');
  t('Download');
  t('Highlight');
  t('Manuals');
  t('Overview');
  t('Software');
  t('Specifications');
  t('Videos');

  return $field_groups;
}
