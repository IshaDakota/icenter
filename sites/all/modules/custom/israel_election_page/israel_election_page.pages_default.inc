<?php
/**
 * @file
 * israel_election_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function israel_election_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources_for_the_israeli_election';
  $page->task = 'page';
  $page->admin_title = 'Resources for the Israeli Election';
  $page->admin_description = '';
  $page->path = 'resources-israel-election';
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
  $handler->name = 'page_resources_for_the_israeli_election__panel_context_12786558-958c-43e7-b3ab-f1524385c791';
  $handler->task = 'page';
  $handler->subtask = 'resources_for_the_israeli_election';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'resources-israel-election',
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
        'title' => 'Main',
        'width' => '66.69413803305017',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '33.305861966949834',
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
        'width' => '39.83894314962064',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'intro_right' => array(
        'type' => 'region',
        'title' => 'Intro Right',
        'width' => '60.16105685037936',
        'width_type' => '%',
        'parent' => '1',
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
    ),
  );
  $display->cache = array();
  $display->title = 'Elections in Israel: From Chosen to Choosing';
  $display->uuid = 'd139d56d-ace3-47ce-8a98-b59634b16e9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f951c44-bf4e-46e9-adcd-e96a0e5cf5c3';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'protective_edge_resources-protective_edge_voices_pane';
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
    $pane->uuid = '4f951c44-bf4e-46e9-adcd-e96a0e5cf5c3';
    $display->content['new-4f951c44-bf4e-46e9-adcd-e96a0e5cf5c3'] = $pane;
    $display->panels['center'][0] = 'new-4f951c44-bf4e-46e9-adcd-e96a0e5cf5c3';
    $pane = new stdClass();
    $pane->pid = 'new-1aa24009-d8c7-46de-99a4-603038400f19';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'protective_edge_resources-protective_edge_resources_pane';
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
    $pane->uuid = '1aa24009-d8c7-46de-99a4-603038400f19';
    $display->content['new-1aa24009-d8c7-46de-99a4-603038400f19'] = $pane;
    $display->panels['center'][1] = 'new-1aa24009-d8c7-46de-99a4-603038400f19';
    $pane = new stdClass();
    $pane->pid = 'new-2a2ed9af-3990-45e2-8660-6bbd0f3750e7';
    $pane->panel = 'intro_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
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
    $pane->pid = 'new-6f37103e-347a-4b74-8f40-0e2f2c7cfce7';
    $pane->panel = 'intro_left';
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
      'name' => 'israel_elections_intro',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6f37103e-347a-4b74-8f40-0e2f2c7cfce7';
    $display->content['new-6f37103e-347a-4b74-8f40-0e2f2c7cfce7'] = $pane;
    $display->panels['intro_left'][1] = 'new-6f37103e-347a-4b74-8f40-0e2f2c7cfce7';
    $pane = new stdClass();
    $pane->pid = 'new-8d306f9a-48cb-46fb-8c5d-2e30e605d22a';
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
      'name' => 'israel_elections_image',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d306f9a-48cb-46fb-8c5d-2e30e605d22a';
    $display->content['new-8d306f9a-48cb-46fb-8c5d-2e30e605d22a'] = $pane;
    $display->panels['intro_right'][0] = 'new-8d306f9a-48cb-46fb-8c5d-2e30e605d22a';
    $pane = new stdClass();
    $pane->pid = 'new-a3029fce-b317-4c27-bfc4-126a6ed87d3f';
    $pane->panel = 'sidebar';
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
      'name' => 'outside_resources',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3029fce-b317-4c27-bfc4-126a6ed87d3f';
    $display->content['new-a3029fce-b317-4c27-bfc4-126a6ed87d3f'] = $pane;
    $display->panels['sidebar'][0] = 'new-a3029fce-b317-4c27-bfc4-126a6ed87d3f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources_for_the_israeli_election'] = $page;

  return $pages;

}
