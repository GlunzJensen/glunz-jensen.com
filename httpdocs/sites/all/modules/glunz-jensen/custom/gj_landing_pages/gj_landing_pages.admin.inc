<?php

/**
 * @file
 * Main module file for the Landing pages module admin settings .
 */

function gj_landing_pages_settings($form, &$form_state) {
  $form['gl_landing_page_email_recipient'] = array(
    '#type' => 'emailfield',
    '#title' => t('Landing pages recipient mail'),
    '#default_value' => variable_get('gl_landing_page_email_recipient'),
    '#required' => TRUE,
  );

  $form['gl_landing_page_ictp_infuse_nid'] = array(
    '#type' => 'textfield',
    '#title' => t('Node id for iCtP Infuse machine'),
    '#default_value' => variable_get('gl_landing_page_ictp_infuse_nid'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
