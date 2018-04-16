<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?>
<!DOCTYPE html>
<html lang="en">
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0">
<meta charset="utf-8" />
<meta http-equiv="x-ua-compatible" content="ie=edge, chrome=1" />
<title><?php
  if (corporate_section() === 'section_home') {
    print 'The worlds leading supplier of innovative solutions for the global prepress industry';
  }
  else {
    print $head_title;
  }
?></title>

<meta name="author" content="www.openUsource.com">
<meta name="description" content="The worlds leading supplier of innovative solutions for the global prepress industry" />
<link rel="alternate" type="application/rss+xml" title="Qvist RSS" href="#" />
<link rel="shortcut icon" type="image/x-icon" href="#" />
<link rel="stylesheet" href="#" />
<?php print $styles; ?>
<?php print $scripts; ?>
</head>
<body id="<?php print corporate_section(); ?>" class="<?php print $classes; ?>">
<?php
  print $page_top;
  print $page;
  print $page_bottom;
?>
<script async="async" src="#"></script>
<!-- Tracking system by LeadTracker, www.leadtracker.dk -->
<script type="text/javascript" src="https://trk.leadtracker.dk/impl.js"></script>
<script type="text/javascript">
   _ltTrack('D2Sxsgydfth3');
</script>
<!-- End LeadTracker script -->
</body>
</html>