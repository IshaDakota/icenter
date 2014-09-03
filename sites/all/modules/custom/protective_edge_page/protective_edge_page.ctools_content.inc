<?php
/**
 * @file
 * protective_edge_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function protective_edge_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'protective_edge_resources_intro';
  $content->admin_title = '';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><img alt="" src="/sites/default/files/gan-gani.jpg" style="width: 400px; height: 267px;" /></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['protective_edge_resources_intro'] = $content;

  return $export;
}
