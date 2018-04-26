<?php
/**
 * @file
 * gj_captcha_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gj_captcha_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}
