<?php
// $Id: template.php,v 1.10 2011/01/14 02:57:57 jmburnz Exp $

/**
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function to match your subthemes name,
 *    e.g. if you name your theme "themeName" then the function
 *    name will be "themeName_preprocess_hook". Tip - you can
 *    search/replace on "genesis_SUBTHEME".
 * 2. Uncomment the required function to use.
 */

/**
 * Override or insert variables into all templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter__preprocess(&$vars, $hook) {
}
function genesis_icenter_process(&$vars, $hook) {
}
// */

/**
 * Override or insert variables into the html templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter_preprocess_html(&$vars) {
  // Uncomment the folowing line to add a conditional stylesheet for IE 7 or less.
  // drupal_add_css(path_to_theme() . '/css/ie/ie-lte-7.css', array('weight' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
}
function genesis_icenter_process_html(&$vars) {
}
// */

/**
 * Override or insert variables into the page templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter_preprocess_page(&$vars) {
}
function genesis_icenter_process_page(&$vars) {
}
// */

/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter_preprocess_node(&$vars) {
}
function genesis_icenter_process_node(&$vars) {
}
// */

/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter_preprocess_comment(&$vars) {
}
function genesis_icenter_process_comment(&$vars) {
}
// */

/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function genesis_icenter_preprocess_block(&$vars) {
}
function genesis_icenter_process_block(&$vars) {
}

// */
/**
* Override or insert variables into the node templates.
*
* @param $vars
*   An array of variables to pass to the theme template.
* @param $hook
*   The name of the template being rendered ("node" in this case.)
*/
function genesis_icenter_preprocess_node(&$variables, $hook) {
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}

function genesis_icenter_preprocess_node_alef_bet(&$vars, $hook) {
    if (isset($vars['field_authors']['und']) && is_array($vars['field_authors']['und'])) {
        $vars['name'] = t('!username', array(
        '!username' => genesis_icenter_article_authors($vars['field_authors']['und'])));


    } else {
        $vars['name'] = t('by !username', array(
        '!username' => t('Anonymous')));
    }
}

function genesis_icenter_article_authors($uids) {
    $authors = array();
    if (count($uids)) {
        foreach($uids as $author) {
            $user = user_load($author['uid']);
            if ($user->uid) {
                $authors[] = l($user->name, 'user/' . $user->uid);
            }
        }
    }
    if (count($authors) > 1) {
        $last_author = array_pop($authors);
        return implode(", ", $authors) . " and " . $last_author;
    }
    if (count($authors == 1)) {
        return $authors[0];
    }
    return t('Anonymous');
}

function genesis_icenter_user_login_form($form) {
    $form['submit']['#value'] = t('Sign in');
    //dsm($form);
    return drupal_render($form);
}

?>