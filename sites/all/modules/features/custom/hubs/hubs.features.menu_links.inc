<?php
/**
 * @file
 * hubs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function hubs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:networking-hubs
  $menu_links['main-menu:networking-hubs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'networking-hubs',
    'router_path' => 'networking-hubs',
    'link_title' => 'Networking Hubs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => 'node/1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Networking Hubs');


  return $menu_links;
}
