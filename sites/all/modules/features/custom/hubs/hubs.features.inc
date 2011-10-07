<?php
/**
 * @file
 * hubs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hubs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hubs_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function hubs_node_info() {
  $items = array(
    'hub_post' => array(
      'name' => t('Hub Post'),
      'base' => 'node_content',
      'description' => t('A post in a networking hub'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hubs' => array(
      'name' => t('Hubs'),
      'base' => 'node_content',
      'description' => t('Networking Hubs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
