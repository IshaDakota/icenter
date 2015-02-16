<?php
/**
 * @file
 * israel_election_page.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function israel_election_page_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'israel_elections_image';
  $content->admin_title = 'Israeli Elections picture';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Israeli Elections picture',
    'title' => '',
    'body' => '<p><img alt="" src="/sites/default/files/israel-elections.jpg" style="width: 550px; height: 318px;" /></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['israel_elections_image'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'israel_elections_intro';
  $content->admin_title = 'Israel Elections Intro';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Israel Elections Intro',
    'title' => '',
    'body' => '<p>For educators, these are momentous occasions for enabling discussions that relate to our aspirations as a People, our understanding of timeless values and commitments that ought to inform the fundamental conversations about what it means to be a Sovereign Jewish State. Let the educational as well as the electoral campaign begin!</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $export['israel_elections_intro'] = $content;

  return $export;
}
