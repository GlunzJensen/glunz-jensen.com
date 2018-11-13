<?php
include( dirname(__FILE__) . '/include/menu.inc');

/**
* include template overwrites
*/
/*
$path_corporate = drupal_get_path('theme', 'corporate');
 include_once './' . $path_corporate . '/functions/css.php';
 //include_once './' . $path_corporate . '/functions/form.php';
 include_once './' . $path_corporate . '/functions/table.php';
 include_once './' . $path_corporate . '/functions/menu.php';
 include_once './' . $path_corporate . '/functions/system.php';
 include_once './' . $path_corporate . '/functions/date.php';
 include_once './' . $path_corporate . '/functions/misc.php';
*/
/**
* Implements HOOK_theme().
*/

function gj2018_theme(){
 return array(
   'nomarkup' => array (
     'render element' => 'element',
    ),
 );
}


function gj2018_section() {
 $section_path = explode('/', request_uri());
 $section_name = $section_path[1];
 $section_q = strpos($section_name, '?');

 if ($section_q) {
   $section_name = substr($section_name, 0, $section_q);
 }

 switch ($section_name) {
   case '':
     return 'section_home';
     break;
   case 'journal':
     return 'section_journal';
     break;
   case 'about':
     return 'section_about';
     break;
   case 'work':
     return 'section_work';
     break;
   case 'resources':
     return 'section_resources';
     break;
   case 'contact':
     return 'section_contact';
     break;
   case 'search':
     return 'section_search';
     break;
   case 'user':
     return 'section_user';
     break;
   case 'users':
     return 'section_user';
     break;
   case 'filter':
     return 'section_filter';
     break;
   case 'admin':
     return 'section_admin';
     break;
   default:
     return 'section_404';
 }
}

function gj2018_process_html(&$variables) {
 $before = array(
   "/>\s\s+/",
   "/\s\s+</",
   "/>\t+</",
   "/\s\s+(?=\w)/",
   "/(?<=\w)\s\s+/"
 );

 $after = array('> ', ' <', '> <', ' ', ' ');


 $page_top = $variables['page_top'];
 $page_top = preg_replace($before, $after, $page_top);
 $variables['page_top'] = $page_top;


 if (!preg_match('/<pre|<textarea/', $variables['page'])) {
   $page = $variables['page'];
   $page = preg_replace($before, $after, $page);
   $variables['page'] = $page;
 }

 $page_bottom = $variables['page_bottom'];
 $page_bottom = preg_replace($before, $after, $page_bottom);
 $variables['page_bottom'] = $page_bottom . drupal_get_js('footer');


}

/**
 * Implements template_preprocess_node().
 */
function gj2018_process_node(&$variables) {
  switch ($variables['type']) {
    case 'product':
      drupal_add_js(drupal_get_path('theme', 'gj2018') . '/assets/js/tabs.js');
      drupal_add_js(drupal_get_path('theme',
          'gj2018') . '/assets/js/view.product.js');
      drupal_add_js(drupal_get_path('module',
          'ous_productspecs') . '/js/scripts.js');
      drupal_add_js(drupal_get_path('module',
          'ous_productspecs') . '/js/clickshow.js');
      break;
  }

  if (arg(0) == 'about' && arg(1) == 'videos') {
    drupal_add_js(drupal_get_path('theme',
        'corporate') . '/js/videos-page-mobile-fix.js');
  }

  $node = $variables['node'];
  $view_mode = $variables['view_mode'];
  $content_type = $node->type;

  // Entity variables
  $variables['classes_array'][] = drupal_html_class('entity-' . $view_mode);
  $variables['classes_array'][] = drupal_html_class('entity-' . $view_mode . '--' . $content_type);

  $variables['classes_array'][] = drupal_html_class('node--' . $content_type . '--' . $view_mode);

  // Add node--view_mode.tpl.php suggestions.
  $variables['theme_hook_suggestions'][] = 'node__' . $view_mode;

  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes.
  $variables['theme_hook_suggestions'][] = 'node__' . $content_type . '__' . $view_mode;

  // Optionally, run node-type-specific preprocess functions, like
  // foo_preprocess_node_page() or foo_preprocess_node_story().
  $function = __FUNCTION__ . '__' . $content_type;
  if (function_exists($function)) {
    $function($variables);
  }
}

function gj2018_preprocess_field(&$variables) {

    if ($variables['element']['#bundle'] == 'field_regions_and_titles') {
        //dsm($variables['items']);
        //Iterate through all field items
        foreach ($variables['items'] as $key => $item) {
            $links = $item['links'];
            unset($item['links']);
            //Prepend links to render array
            $variables['items'][$key] = array_merge(array('links' => $links), $item);
        }
    }
}

function gj2018_preprocess_html(&$variables) {
  $theme_path = path_to_theme();

  $current_theme = variable_get('theme_default', 'none');

  if ($variables['user']) {
    foreach ($variables['user']->roles as $key => $role) {
      $role_class = 'role-' . str_replace(' ', '-', $role);
      $variables['classes_array'][] = $role_class;
    }
  }
  $path = drupal_get_path_alias();
  $aliases = explode('/', $path);

  foreach ($aliases as $alias) {
    $variables['classes_array'][] = drupal_clean_css_identifier($alias);
  }

  $variables['theme_path'] = $theme_path;

  // Add javascript files
  drupal_add_js($theme_path . '/assets/js/bellcom.js',
    array(
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_THEME,
    ));
}


/**
 * Implements hook_preprocess_page().
 */
function gj2018_preprocess_page(&$variables) {
  $primary_navigation_name = variable_get('menu_main_links_source', 'main-menu');
  $secondary_navigation_name = variable_get('menu_secondary_links_source', 'user-menu');

  // Navigation
  $variables['menu_slinky_custom__primary'] = _bellcom_generate_menu($primary_navigation_name, 'slinky-custom', TRUE);
  $variables['menu_slinky_custom__secondary'] = _bellcom_generate_menu($secondary_navigation_name, 'slinky-custom', TRUE);
}

/**
* Implements hook_form_alter().
*/
function gj2018_form_alter(&$form, &$form_state, $form_id) {

 if (in_array( $form_id, array( 'user_login', 'user_login_block')))
 {
   $form['name']['#title'] = Null;
   $form['pass']['#title'] = Null;
   $form['name']['#attributes']['placeholder'] = t( 'Username' );
   $form['pass']['#attributes']['placeholder'] = t( 'Password' );
 }
 if (in_array( $form_id, array( 'search_block_form')))
 {
   $form['search_block_form']['#attributes']['placeholder'] = t('Search');
 }
 if (in_array( $form_id, array('search_form')))
 {
   $form['basic']['keys']['#attributes']['placeholder'] = t( 'Search' );
   $form['advanced']['type']['#title'] = NULL;
   $form['advanced']['submit']['#value'] = "Type selection";
   if(isset($form['advanced']['type']['#options']['investor_data'])){
     $form['advanced']['type']['#options']['investor_data'] = "Investor";
   }


 }
}

function gj2018_preprocess_block(&$variables) {
  $theme_path = path_to_theme();

  $variables['theme_path'] = $theme_path;
}

/*
 * Implements theme_menu_tree().
 * For custom slinky menu types.
 */
function gj2018_menu_tree__slinky_custom(&$variables) {
  return $variables['tree'];
}

/*
 * Implements theme_menu_link().
 */
function gj2018_menu_link__slinky_custom(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {

    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }

    elseif ((!empty($element['#original_link']['depth']))) {

      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);

      // Submenu classes
      $sub_menu = ' <ul>' . drupal_render($element['#below']) . '</ul>';
    }
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);

  return '<li>' . $output . $sub_menu . "</li>\n";
}
