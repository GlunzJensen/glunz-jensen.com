<?php
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

function gj2018_process_html(&$vars) {
 $before = array(
   "/>\s\s+/",
   "/\s\s+</",
   "/>\t+</",
   "/\s\s+(?=\w)/",
   "/(?<=\w)\s\s+/"
 );

 $after = array('> ', ' <', '> <', ' ', ' ');


 $page_top = $vars['page_top'];
 $page_top = preg_replace($before, $after, $page_top);
 $vars['page_top'] = $page_top;


 if (!preg_match('/<pre|<textarea/', $vars['page'])) {
   $page = $vars['page'];
   $page = preg_replace($before, $after, $page);
   $vars['page'] = $page;
 }

 $page_bottom = $vars['page_bottom'];
 $page_bottom = preg_replace($before, $after, $page_bottom);
 $vars['page_bottom'] = $page_bottom . drupal_get_js('footer');


}

function gj2018_process_node(&$vars) {
    switch($vars['type']){
        case 'product':
             drupal_add_js(drupal_get_path('theme','gj2018').'/assets/js/tabs.js');
             drupal_add_js(drupal_get_path('theme','gj2018').'/assets/js/view.product.js');
            drupal_add_js(drupal_get_path('module','ous_productspecs').'/js/scripts.js');
            drupal_add_js(drupal_get_path('module','ous_productspecs').'/js/clickshow.js');
            break;
    }

    if(arg(0)=='about'&& arg(1)=='videos'){
        drupal_add_js(drupal_get_path('theme','corporate').'/js/videos-page-mobile-fix.js');
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

function gj2018_preprocess_html(&$vars) {
 if ($vars['user']) {
   foreach($vars['user']->roles as $key => $role){
     $role_class = 'role-' . str_replace(' ', '-', $role);
     $vars['classes_array'][] = $role_class;
   }
 }
 $path = drupal_get_path_alias();
 $aliases = explode('/', $path);

 foreach($aliases as $alias) {
   $vars['classes_array'][] = drupal_clean_css_identifier($alias);
 }
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
