<?php
/**
 * @file
 * incubator_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function incubator_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:ichallenge-blog
  $menu_links['main-menu:ichallenge-blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ichallenge-blog',
    'router_path' => 'ichallenge-blog',
    'link_title' => 'Blog',
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
    'weight' => '0',
    'parent_path' => 'node/37',
  );
  // Exported menu link: main-menu:mzteen-blog
  $menu_links['main-menu:mzteen-blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mzteen-blog',
    'router_path' => 'mzteen-blog',
    'link_title' => 'Blog',
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
    'weight' => '0',
    'parent_path' => 'node/97',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');


  return $menu_links;
}
