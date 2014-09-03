<?php
/**
 * @file
 * curricular_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function curricular_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function curricular_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function curricular_content_node_info() {
  $items = array(
    'curriculum_pieces' => array(
      'name' => t('Curriculum Pieces'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
