<?php
/**
 * @file
 * israel_election_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function israel_election_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources_israel_election';
  $view->description = 'Educational Resources';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Resources - Israel Election';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Teaching Methodologies';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_setting' => 'field_setting',
    'field_ages' => 'field_ages',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Setting */
  $handler->display->display_options['fields']['field_setting']['id'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['table'] = 'field_data_field_setting';
  $handler->display->display_options['fields']['field_setting']['field'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['label'] = '';
  $handler->display->display_options['fields']['field_setting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_setting']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'educational_resource' => 'educational_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Resource Page Pane */
  $handler = $view->new_display('panel_pane', 'Resource Page Pane', 'protective_edge_resources_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'iCenter Resources and Ideas';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'educational_resource' => 'educational_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tags (field_educational_tag) */
  $handler->display->display_options['filters']['field_educational_tag_tid']['id'] = 'field_educational_tag_tid';
  $handler->display->display_options['filters']['field_educational_tag_tid']['table'] = 'field_data_field_educational_tag';
  $handler->display->display_options['filters']['field_educational_tag_tid']['field'] = 'field_educational_tag_tid';
  $handler->display->display_options['filters']['field_educational_tag_tid']['value'] = array(
    0 => '252',
  );
  $handler->display->display_options['filters']['field_educational_tag_tid']['vocabulary'] = 'resource_tags';

  /* Display: Voices Page Pane */
  $handler = $view->new_display('panel_pane', 'Voices Page Pane', 'protective_edge_voices_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Voices on the Election and Education';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_picture_small';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices_article' => 'voices_article',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filter criterion: Content: Tags (field_voices_tags) */
  $handler->display->display_options['filters']['field_voices_tags_tid']['id'] = 'field_voices_tags_tid';
  $handler->display->display_options['filters']['field_voices_tags_tid']['table'] = 'field_data_field_voices_tags';
  $handler->display->display_options['filters']['field_voices_tags_tid']['field'] = 'field_voices_tags_tid';
  $handler->display->display_options['filters']['field_voices_tags_tid']['value'] = array(
    0 => '253',
  );
  $handler->display->display_options['filters']['field_voices_tags_tid']['vocabulary'] = 'voices_tags';

  /* Display: Voices -DS Page Pane */
  $handler = $view->new_display('panel_pane', 'Voices -DS Page Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Frameworks for Discussions at Day Schools and Beyond';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'uid';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'user_picture_small';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'by';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices_article' => 'voices_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_voices_tags) */
  $handler->display->display_options['filters']['field_voices_tags_tid']['id'] = 'field_voices_tags_tid';
  $handler->display->display_options['filters']['field_voices_tags_tid']['table'] = 'field_data_field_voices_tags';
  $handler->display->display_options['filters']['field_voices_tags_tid']['field'] = 'field_voices_tags_tid';
  $handler->display->display_options['filters']['field_voices_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_voices_tags_tid']['value'] = array(
    0 => '219',
    1 => '216',
  );
  $handler->display->display_options['filters']['field_voices_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_voices_tags_tid']['vocabulary'] = 'voices_tags';

  /* Display: Resource-DS Page Pane */
  $handler = $view->new_display('panel_pane', 'Resource-DS Page Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'iCenter Resources and Ideas';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'educational_resource' => 'educational_resource',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_educational_tag) */
  $handler->display->display_options['filters']['field_educational_tag_tid']['id'] = 'field_educational_tag_tid';
  $handler->display->display_options['filters']['field_educational_tag_tid']['table'] = 'field_data_field_educational_tag';
  $handler->display->display_options['filters']['field_educational_tag_tid']['field'] = 'field_educational_tag_tid';
  $handler->display->display_options['filters']['field_educational_tag_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_educational_tag_tid']['value'] = array(
    0 => '218',
    1 => '217',
  );
  $handler->display->display_options['filters']['field_educational_tag_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_educational_tag_tid']['vocabulary'] = 'resource_tags';

  /* Display: Classroom Resources - DS */
  $handler = $view->new_display('panel_pane', 'Classroom Resources - DS', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Classroom Resources';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more classroom resources >>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_setting' => 'field_setting',
    'field_ages' => 'field_ages',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'age_tags' => 'age_tags',
    'category_tags' => 'category_tags',
    'resource_tags' => 'resource_tags',
    'settings_tags' => 'settings_tags',
    'forums' => 0,
    'educ_categories' => 0,
    'featured_content' => 0,
    'topic_tags' => 0,
    'voices_categories' => 0,
    'voices_tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Curriculum Piece Image */
  $handler->display->display_options['fields']['field_curriculum_piece_image']['id'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['table'] = 'field_data_field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['field'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_piece_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Setting */
  $handler->display->display_options['fields']['field_setting']['id'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['table'] = 'field_data_field_setting';
  $handler->display->display_options['fields']['field_setting']['field'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['label'] = '';
  $handler->display->display_options['fields']['field_setting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_setting']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum_pieces' => 'curriculum_pieces',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Classroom Resources';

  /* Display: Methodology - DS */
  $handler = $view->new_display('panel_pane', 'Methodology - DS', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teaching Methodologies';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more methodology >>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_setting' => 'field_setting',
    'field_ages' => 'field_ages',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'category_tags' => 'category_tags',
    'forums' => 0,
    'age_tags' => 0,
    'educ_categories' => 0,
    'resource_tags' => 0,
    'featured_content' => 0,
    'settings_tags' => 0,
    'topic_tags' => 0,
    'voices_categories' => 0,
    'voices_tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Curriculum Piece Image */
  $handler->display->display_options['fields']['field_curriculum_piece_image']['id'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['table'] = 'field_data_field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['field'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_piece_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Setting */
  $handler->display->display_options['fields']['field_setting']['id'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['table'] = 'field_data_field_setting';
  $handler->display->display_options['fields']['field_setting']['field'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['label'] = '';
  $handler->display->display_options['fields']['field_setting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_setting']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum_pieces' => 'curriculum_pieces',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Methodology';

  /* Display: Voices - DS */
  $handler = $view->new_display('panel_pane', 'Voices - DS', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Voices from the Field';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more voices >>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'category_tags' => 'category_tags',
    'forums' => 0,
    'age_tags' => 0,
    'educ_categories' => 0,
    'resource_tags' => 0,
    'featured_content' => 0,
    'settings_tags' => 0,
    'topic_tags' => 0,
    'voices_categories' => 0,
    'voices_tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Curriculum Piece Image */
  $handler->display->display_options['fields']['field_curriculum_piece_image']['id'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['table'] = 'field_data_field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['field'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_piece_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Setting */
  $handler->display->display_options['fields']['field_setting']['id'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['table'] = 'field_data_field_setting';
  $handler->display->display_options['fields']['field_setting']['field'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['label'] = '';
  $handler->display->display_options['fields']['field_setting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_setting']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum_pieces' => 'curriculum_pieces',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Voices';

  /* Display: Big Picture - DS */
  $handler = $view->new_display('panel_pane', 'Big Picture - DS', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Big Picture: Questions & Frameworks';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more big picture >>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_setting' => 'field_setting',
    'field_ages' => 'field_ages',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'age_tags' => 'age_tags',
    'category_tags' => 'category_tags',
    'settings_tags' => 'settings_tags',
    'topic_tags' => 'topic_tags',
    'forums' => 0,
    'educ_categories' => 0,
    'resource_tags' => 0,
    'featured_content' => 0,
    'voices_categories' => 0,
    'voices_tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_educational_resource_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['group_column'] = 'fid';
  /* Field: Content: Curriculum Piece Image */
  $handler->display->display_options['fields']['field_curriculum_piece_image']['id'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['table'] = 'field_data_field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['field'] = 'field_curriculum_piece_image';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_piece_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_curriculum_piece_image']['settings'] = array(
    'image_style' => 'resource_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Setting */
  $handler->display->display_options['fields']['field_setting']['id'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['table'] = 'field_data_field_setting';
  $handler->display->display_options['fields']['field_setting']['field'] = 'field_setting';
  $handler->display->display_options['fields']['field_setting']['label'] = '';
  $handler->display->display_options['fields']['field_setting']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_setting']['delta_offset'] = '0';
  /* Field: Content: Ages */
  $handler->display->display_options['fields']['field_ages']['id'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['table'] = 'field_data_field_ages';
  $handler->display->display_options['fields']['field_ages']['field'] = 'field_ages';
  $handler->display->display_options['fields']['field_ages']['label'] = '';
  $handler->display->display_options['fields']['field_ages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ages']['delta_offset'] = '0';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'curriculum_pieces' => 'curriculum_pieces',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Big Picture';
  $export['resources_israel_election'] = $view;

  return $export;
}
