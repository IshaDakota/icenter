<?php
/**
 * @file
 * curricular_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function curricular_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Curriculum Pieces',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'curricular-piece',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'curriculum_pieces' => 'curriculum_pieces',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '71.05853853309111',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '28.941461466908894',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '26f0afbe-9cfb-4ffe-963c-c2720e52421f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9e3f01d2-414a-4b2d-baae-a71733d84055';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9e3f01d2-414a-4b2d-baae-a71733d84055';
    $display->content['new-9e3f01d2-414a-4b2d-baae-a71733d84055'] = $pane;
    $display->panels['center'][0] = 'new-9e3f01d2-414a-4b2d-baae-a71733d84055';
    $pane = new stdClass();
    $pane->pid = 'new-ba35c099-04cb-4607-a3a1-1b748370bf8c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba35c099-04cb-4607-a3a1-1b748370bf8c';
    $display->content['new-ba35c099-04cb-4607-a3a1-1b748370bf8c'] = $pane;
    $display->panels['center'][1] = 'new-ba35c099-04cb-4607-a3a1-1b748370bf8c';
    $pane = new stdClass();
    $pane->pid = 'new-b82a0cb4-2f45-4e16-8bdf-d06861092653';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_setting';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b82a0cb4-2f45-4e16-8bdf-d06861092653';
    $display->content['new-b82a0cb4-2f45-4e16-8bdf-d06861092653'] = $pane;
    $display->panels['center'][2] = 'new-b82a0cb4-2f45-4e16-8bdf-d06861092653';
    $pane = new stdClass();
    $pane->pid = 'new-873057ab-c51d-4c78-ae17-63cad5a4d41e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '873057ab-c51d-4c78-ae17-63cad5a4d41e';
    $display->content['new-873057ab-c51d-4c78-ae17-63cad5a4d41e'] = $pane;
    $display->panels['center'][3] = 'new-873057ab-c51d-4c78-ae17-63cad5a4d41e';
    $pane = new stdClass();
    $pane->pid = 'new-355964cf-df5a-4264-8038-d08967ecb212';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '355964cf-df5a-4264-8038-d08967ecb212';
    $display->content['new-355964cf-df5a-4264-8038-d08967ecb212'] = $pane;
    $display->panels['center'][4] = 'new-355964cf-df5a-4264-8038-d08967ecb212';
    $pane = new stdClass();
    $pane->pid = 'new-0fbf8bee-95bc-44df-8ee3-20862a0dce36';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-30';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'iCenter Resources for Protective Edge',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0fbf8bee-95bc-44df-8ee3-20862a0dce36';
    $display->content['new-0fbf8bee-95bc-44df-8ee3-20862a0dce36'] = $pane;
    $display->panels['sidebar'][0] = 'new-0fbf8bee-95bc-44df-8ee3-20862a0dce36';
    $pane = new stdClass();
    $pane->pid = 'new-9a255270-7144-41e1-bbf5-7ca4fee6be57';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'curriculum_taxonomy-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a255270-7144-41e1-bbf5-7ca4fee6be57';
    $display->content['new-9a255270-7144-41e1-bbf5-7ca4fee6be57'] = $pane;
    $display->panels['sidebar'][1] = 'new-9a255270-7144-41e1-bbf5-7ca4fee6be57';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Curricular Taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        5 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'category_tags' => 'category_tags',
              'settings_tags' => 'settings_tags',
              'topic_tags' => 'topic_tags',
              'age_tags' => 'age_tags',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.49364107395196',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'sidebar',
        'width' => '25.506358926048044',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '10313dcd-676f-4cde-9ebb-609357858cd1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-21687f4e-683d-47d2-9367-fb54c84bcd5a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'currucular_taxonomy_term-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21687f4e-683d-47d2-9367-fb54c84bcd5a';
    $display->content['new-21687f4e-683d-47d2-9367-fb54c84bcd5a'] = $pane;
    $display->panels['center'][0] = 'new-21687f4e-683d-47d2-9367-fb54c84bcd5a';
    $pane = new stdClass();
    $pane->pid = 'new-b4f284b3-80ec-4651-bfc3-4157744d4eff';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-30';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'iCenter Resources for Protective Edge',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4f284b3-80ec-4651-bfc3-4157744d4eff';
    $display->content['new-b4f284b3-80ec-4651-bfc3-4157744d4eff'] = $pane;
    $display->panels['sidebar'][0] = 'new-b4f284b3-80ec-4651-bfc3-4157744d4eff';
    $pane = new stdClass();
    $pane->pid = 'new-0da1f31f-816e-488f-b277-200629035542';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'curriculum_taxonomy-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0da1f31f-816e-488f-b277-200629035542';
    $display->content['new-0da1f31f-816e-488f-b277-200629035542'] = $pane;
    $display->panels['sidebar'][1] = 'new-0da1f31f-816e-488f-b277-200629035542';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function curricular_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources_for_day_schools_2';
  $page->task = 'page';
  $page->admin_title = 'Resources for Day Schools 2';
  $page->admin_description = '';
  $page->path = 'resources-day-schools';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resources_for_day_schools_2_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'resources_for_day_schools_2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'resources-protective-edge',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'sidebar_',
          2 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'left side',
        'width' => '38.393252629100694',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'intro_left',
          1 => 'intro_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'intro_left' => array(
        'type' => 'region',
        'title' => 'Intro Left',
        'width' => '53.735238994267036',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'intro_right' => array(
        'type' => 'region',
        'title' => 'Intro Right',
        'width' => '46.264761005732964',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'reources',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'reources' => array(
        'type' => 'region',
        'title' => 'Reources',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'sidebar_' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '38.39085667163327',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right side',
        'width' => '23.215890699265405',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'intro_left' => NULL,
      'intro_right' => NULL,
      'reources' => NULL,
      'sidebar_' => NULL,
      'right_side' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Israel Today: Resources for Day Schools';
  $display->uuid = 'd139d56d-ace3-47ce-8a98-b59634b16e9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0dfd4d59-e88b-4a83-927f-f95c6e5a702c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ds_protective_edge_resources-ds_protective_edge_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0dfd4d59-e88b-4a83-927f-f95c6e5a702c';
    $display->content['new-0dfd4d59-e88b-4a83-927f-f95c6e5a702c'] = $pane;
    $display->panels['center'][0] = 'new-0dfd4d59-e88b-4a83-927f-f95c6e5a702c';
    $pane = new stdClass();
    $pane->pid = 'new-3d44f324-d8be-4212-aea3-4b2b36c514c8';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ds_protective_edge_resources-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d44f324-d8be-4212-aea3-4b2b36c514c8';
    $display->content['new-3d44f324-d8be-4212-aea3-4b2b36c514c8'] = $pane;
    $display->panels['center'][1] = 'new-3d44f324-d8be-4212-aea3-4b2b36c514c8';
    $pane = new stdClass();
    $pane->pid = 'new-2a2ed9af-3990-45e2-8660-6bbd0f3750e7';
    $pane->panel = 'intro_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Text Intro',
      'title' => '',
      'body' => '<p>As the conflict in Israel continues, we are looking for ways to bring Israel to our learners by gathering relevant resources, collecting authentic stories, and providing useful frames for educators and learners.</p>

<p>Please find some of our stories below.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'protectiveedgeintro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a2ed9af-3990-45e2-8660-6bbd0f3750e7';
    $display->content['new-2a2ed9af-3990-45e2-8660-6bbd0f3750e7'] = $pane;
    $display->panels['intro_left'][0] = 'new-2a2ed9af-3990-45e2-8660-6bbd0f3750e7';
    $pane = new stdClass();
    $pane->pid = 'new-509026e3-0a49-42f1-9aa7-dd54f9154b2a';
    $pane->panel = 'intro_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'protective_edge_resources_intro',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '509026e3-0a49-42f1-9aa7-dd54f9154b2a';
    $display->content['new-509026e3-0a49-42f1-9aa7-dd54f9154b2a'] = $pane;
    $display->panels['intro_right'][0] = 'new-509026e3-0a49-42f1-9aa7-dd54f9154b2a';
    $pane = new stdClass();
    $pane->pid = 'new-fb7bfddc-9054-4910-8539-cd9e18ad28ee';
    $pane->panel = 'reources';
    $pane->type = 'custom';
    $pane->subtype = 'outside_resources_ds';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb7bfddc-9054-4910-8539-cd9e18ad28ee';
    $display->content['new-fb7bfddc-9054-4910-8539-cd9e18ad28ee'] = $pane;
    $display->panels['reources'][0] = 'new-fb7bfddc-9054-4910-8539-cd9e18ad28ee';
    $pane = new stdClass();
    $pane->pid = 'new-075cb8ad-d883-4495-8429-85fa7ba5786b';
    $pane->panel = 'right_side';
    $pane->type = 'views_panes';
    $pane->subtype = 'curriculum_taxonomy-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '075cb8ad-d883-4495-8429-85fa7ba5786b';
    $display->content['new-075cb8ad-d883-4495-8429-85fa7ba5786b'] = $pane;
    $display->panels['right_side'][0] = 'new-075cb8ad-d883-4495-8429-85fa7ba5786b';
    $pane = new stdClass();
    $pane->pid = 'new-9f7a600f-6d8f-4d56-8816-f2c8b29dc310';
    $pane->panel = 'sidebar_';
    $pane->type = 'views_panes';
    $pane->subtype = 'ds_protective_edge_resources-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f7a600f-6d8f-4d56-8816-f2c8b29dc310';
    $display->content['new-9f7a600f-6d8f-4d56-8816-f2c8b29dc310'] = $pane;
    $display->panels['sidebar_'][0] = 'new-9f7a600f-6d8f-4d56-8816-f2c8b29dc310';
    $pane = new stdClass();
    $pane->pid = 'new-56f552d0-fc03-445d-aafd-2cb9e195dfa1';
    $pane->panel = 'sidebar_';
    $pane->type = 'views_panes';
    $pane->subtype = 'ds_protective_edge_resources-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '56f552d0-fc03-445d-aafd-2cb9e195dfa1';
    $display->content['new-56f552d0-fc03-445d-aafd-2cb9e195dfa1'] = $pane;
    $display->panels['sidebar_'][1] = 'new-56f552d0-fc03-445d-aafd-2cb9e195dfa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources_for_day_schools_2'] = $page;

  return $pages;

}
