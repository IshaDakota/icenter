<?php
/**
 * @file
 * incubator_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function incubator_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_user_blog_post';
  $strongarm->value = 0;
  $export['comment_anonymous_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_user_blog_post';
  $strongarm->value = 1;
  $export['comment_default_mode_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_user_blog_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_user_blog_post';
  $strongarm->value = 1;
  $export['comment_form_location_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_user_blog_post';
  $strongarm->value = '1';
  $export['comment_preview_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_user_blog_post';
  $strongarm->value = 1;
  $export['comment_subject_field_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_user_blog_post';
  $strongarm->value = '2';
  $export['comment_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_user_blog_post';
  $strongarm->value = array();
  $export['menu_options_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_user_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_user_blog_post';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_user_blog_post';
  $strongarm->value = '1';
  $export['node_preview_user_blog_post'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_user_blog_post';
  $strongarm->value = 1;
  $export['node_submitted_user_blog_post'] = $strongarm;

  return $export;
}
