<?php
/**
 * @file
 * gj_context_conditions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gj_context_conditions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
