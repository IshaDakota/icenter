<?php
/**
 * @file
 * hubs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hubs_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'networking_hub_list';
  $view->description = 'Show active groups that are nodes';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Networking Hub List';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'iCenter Networking Hubs';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'As part of it\'s mission, the iCenter is committed to sparking and fostering dialogue on Israel education. The iCenter networking hubs are designed to be a part of that mission.

Hubs can be built around iCenter projects, particular areas of interest in the field of Israel Education, current events, or any other relevant point of engagement. Look below to see the growing list of iCenter Networking Hubs that you can join. If you would like to recommend a hub, please contact <a href="/users/ginger">Ginger Malin.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Relationship: Group: Node group */
  $handler->display->display_options['relationships']['og_rel']['id'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_rel']['field'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: OG group: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_rel';
  $handler->display->display_options['fields']['created']['label'] = 'Since';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Filter criterion: OG group: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Group: Group\'s state';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'networking-hubs';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'network-hubs/feed';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $export['networking_hub_list'] = $view;

  $view = new view;
  $view->name = 'networking_hub_members';
  $view->description = 'Newest group members.';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = 'Networking Hub members';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Group membership: User group membership */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Sort criterion: OG membership: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: OG membership: Group gid */
  $handler->display->display_options['arguments']['group']['id'] = 'group';
  $handler->display->display_options['arguments']['group']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['group']['field'] = 'group';
  $handler->display->display_options['arguments']['group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['group']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['group']['title_enable'] = 1;
  $handler->display->display_options['arguments']['group']['title'] = '%1 group members';
  $handler->display->display_options['arguments']['group']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['group']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['group']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'icon-30';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['pane_title'] = 'Networking Hub members';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group' => array(
      'type' => 'context',
      'context' => 'entity:group.gid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic groups membership: Group gid',
    ),
  );
  $export['networking_hub_members'] = $view;

  $view = new view;
  $view->name = 'networking_hub_user_groups';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Networking Hub User groups';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'state' => 'state',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: Group: Node group */
  $handler->display->display_options['relationships']['og_rel']['id'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_rel']['field'] = 'og_rel';
  $handler->display->display_options['relationships']['og_rel']['required'] = 0;
  /* Relationship: OG group: OG membership */
  $handler->display->display_options['relationships']['og_membership']['id'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership']['table'] = 'og';
  $handler->display->display_options['relationships']['og_membership']['field'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership']['relationship'] = 'og_rel';
  $handler->display->display_options['relationships']['og_membership']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'og_membership';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: We pass to the &quot;Entity ID&quot; the User ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['relationship'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass to the "Entity ID" the User ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['etid']['title'] = '%1 groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['etid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['etid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['etid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user-groups';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Networks';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: We pass to the &quot;Entity ID&quot; the User ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['relationship'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass to the "Entity ID" the User ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['title'] = '%1 groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['etid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['etid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['etid']['not'] = 0;
  $export['networking_hub_user_groups'] = $view;

  return $export;
}
