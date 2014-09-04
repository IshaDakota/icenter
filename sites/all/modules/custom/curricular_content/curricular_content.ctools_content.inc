<?php
/**
 * @file
 * curricular_content.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function curricular_content_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'ds_protective_edge_intro';
  $content->admin_title = 'DS Protective Edge Inro';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'DS Protective Edge Inro',
    'title' => '',
    'body' => '<p>As school begins, we know that Israel is very much on the minds of students, staff and parents.&nbsp; This page contain extensive Israel education resources for each of these populations drawn from the iCenter and beyond in the following categories:</p>

<ul>
	<li>Big Picture: Questions and Frameworks (for staff and parents)</li>
	<li>Classroom Resources&nbsp;</li>
	<li>Teaching Methodologies &nbsp;&nbsp;</li>
	<li>Voices from the Field</li>
</ul>

<p>In a sidebar, access the same resources by curricular themes, age groups, and settings within the school. At the bottom of the page are resources drawn from throughout the Jewish education world.</p>

<p>We wish you all a fruitful and rich year of learning.<br />
&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['ds_protective_edge_intro'] = $content;

  return $export;
}
