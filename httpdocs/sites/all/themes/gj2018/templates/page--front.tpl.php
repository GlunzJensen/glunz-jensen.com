<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
$theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));
$path = current_path();
global $base_url;
$path_alias = $base_url . '/' . drupal_lookup_path('alias', $path);
$url_encoded = urlencode($path_alias);
?>
<div id="pagewrapper">
  <div id="back-top">^</div>

  <!-- Begin - sidr source provider -->
  <aside class="sidr-source-provider">

    <!-- Begin - navigation -->
    <div class="slinky-menu">

      <?php if (!empty($menu_slinky_custom__primary)): ?>
        <?php print render($menu_slinky_custom__primary); ?>
      <?php endif; ?>

    </div>
    <!-- End - navigation -->

  </aside>
  <!-- End - sidr source provider -->

  <?php include $theme_path . '/assets/includes/header.inc'; ?>
  <div id="searchbar">
    <span class="container">
    <?php print render($page['search']); ?>
    </span>
  </div>
  <?php if ($page['toppic']): ?>
    <span class="txt-topbanner">
      <?php print render($page['toppic']); ?>
    </span><!--/txt-topbanner-->
  <?php endif; ?>
  <div class="socials-top">
    <a id="facebook" class="facebook popup"
       href="https://www.facebook.com/sharer/sharer.php?u=<?php print $url_encoded; ?>&t=<?php print urlencode($title); ?>">Share
      on facebook</a>
    <a id="twitter" class="twitter popup"
       href="http://twitter.com/share?url=<?php print $url_encoded; ?>&text=<?php print urlencode($title) ?>&via=TWITTER_HANDLE">Share
      on twitter</a>
    <a id="linkedin" class="linkedin popup"
       href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $url_encoded; ?>&title=<?php print urlencode($title) ?>&source=LinkedIn
  ">Share on LinkedIn</a>
    <a class="contact"
       href="mailto:?&subject=I wanted you to see this site&body=Check out this site: <?php print $url_encoded; ?>">Share
      by E-mail</a>
  </div><!--/Socials-top-->

  <div id="content">
  <span class="innerwrapper">
    <?php if ($tabs): ?>
      <div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
    <?php if ($action_links): ?>
      <ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <div class="msg-wrapper"><?php print $messages; ?></div><!--msg-wrapper-->
    <!--<?php if ($title): ?>
  <h1 class="title" id="page-title"><?php print $title; ?></h1>
  <?php endif; ?>-->
    <?php print render($page['content']); ?>
    <?php print render($page['partners']); ?>
    <?php print render($page['highlight']); ?>
  </span><!--/innerwrapper-->
  </div><!--/content-->
  <span class="counter"> <?php print render($page['footercounter']); ?> </span>
  <?php include $theme_path . '/assets/includes/footer.inc'; ?>
</div><!--/pagewrapper-->
