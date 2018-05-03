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
 *
 * @ingroup themeable
 */
?><!DOCTYPE html>
<html lang="<?php print $language->language;?>">
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0">
  <meta charset="utf-8" />
  <meta http-equiv="x-ua-compatible" content="ie=edge, chrome=1" />
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <link rel="stylesheet" type="text/css" href="//cdnjs.cloudflare.com/ajax/libs/cookieconsent2/3.0.3/cookieconsent.min.css" />
<script src="//cdnjs.cloudflare.com/ajax/libs/cookieconsent2/3.0.3/cookieconsent.min.js"></script>
<script>
window.addEventListener("load", function(){
	window.cookieconsent.initialise({
	  "palette": {
	    "popup": {
	      "background": "#f5f5f5"
	    },
	    "button": {
	      "background": "#54b2ef",
	      "text": "white"
	    }
	  },
	  "content": {
		  "header": 'Cookies used on the website!',
		  "message": 'We use cookies to ensure our website works properly and to collect statistics about users in order for us to improve the website. If you continue to browse this site you will accept our use of cookies.',
		  "dismiss": 'Got it!',
		  "link": 'About cookies',
		  "href": '/cookie-information',
		}
	  
	})
});

</script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <?php print $page_top; ?>
  <?php print $page; ?>

  <!-- Begin - toggler -->
  <div class="toggler" data-toggle="#after-sales-service">
      <div class="toggler__icon">
          <i class="fa fa-cogs"></i>
      </div>

      <div class="toggler__text">
          Need after sales service?
      </div>

      <div class="toggler__icon">
          <i class="fa fa-angle-up"></i>
      </div>
  </div>
  <!-- End - toggler -->

  <!-- Begin - popup cta -->
  <div class="popup-cta" id="after-sales-service">
      <button class="popup-cta__close" data-toggle="#after-sales-service">
          <i class="fa fa-times"></i>
      </button>

      <div class="popup-cta__heading">
          <h2 class="popup-cta__heading__title">How can i help?</h2>
      </div>

      <div class="popup-cta__image">
          <img src="/<?= $theme_path ?>/assets/img/popup-cta.jpg"
               alt="">
      </div>

      <div class="popup-cta__body">
          <div>
              <h5>Contact:</h5>
          </div>
          <div class="popup-cta__contact">
              <h3>GKS INTERNATIONAL</h3>
          </div>
          <div class="popup-cta__contact_description">
              Your global after sales service provider
          </div>

          <div class="popup-cta__contact-item">
              <div class="popup-cta__contact-item__icon">
                  <i class="fa fa-envelope"></i>
              </div>
              <div class="popup-cta__contact-item__text">
                  <a href="mailto:info@gks-international.com">info@gks-international.com</a>
              </div>
          </div>
          <div class="popup-cta__contact-item">
              <div class="popup-cta__contact-item__icon">
                  <i class="fa fa-phone"></i>
              </div>
              <div class="popup-cta__contact-item__text">
                  +45 5782 0910 (DK)
              </div>
          </div>
          <div class="popup-cta__contact-item">
              <div class="popup-cta__contact-item__icon">
                  <i class="fa fa-phone"></i>
              </div>
              <div class="popup-cta__contact-item__text">
                  +1 574 272 9950 (USA)
              </div>
          </div>
          <div class="popup-cta__contact-item">
              <div class="popup-cta__contact-item__icon">
                  <i class="fa fa-home"></i>
              </div>
              <div class="popup-cta__contact-item__text">
                  <a href="http://gks-international.com/" target="_blank">www.gks-international.com</a>
              </div>
          </div>
      </div>
  </div>
  <!-- End - popup cta -->

  <!-- Begin - load javascript files -->
  <?php print $scripts; ?>
  <!-- End - load javascript files -->

  <?php print $page_bottom; ?>
</body>
</html>
