<?php
/**
 * @file Overrinden page tpl file for Plate writer printer
 */
$path = current_path();
global $base_url;
$theme_path = $base_url . '/' . drupal_get_path('theme', variable_get('theme_default', NULL));
$path_alias = $base_url . '/' . drupal_lookup_path('alias', $path);
$url_encoded = urlencode($path_alias);
$module_path = $base_url . '/' . drupal_get_path('module', 'gj_landing_pages');
?>
<div id="pagewrapper" class="ictp-infuse">
  <div id="back-top">^</div>
  <div class="container">
    <div class="logo">
      <img src="<?php print $theme_path . '/assets/img/landing-pages/ictp-infuse/logo.png' ;?>" alt="<?php variable_get('site_name');?>">
    </div>
    <?php if ($tabs): ?>
      <div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
    <?php if ($action_links): ?>
      <ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <div class="msg-wrapper"><?php print $messages; ?></div><!--msg-wrapper-->
  </div>
  <div id="content">
    <div class="innerwrapper">
      <div class="container">
        <div class="content-wrapper row">
          <div class="text col-sm-12 col-md-6">
            <?php if ($title): ?>
              <h1><?php print $title; ?> test</h1>
            <?php endif; ?>
            <?php print render($page['content']['system_main']['nodes']); ?>
          </div>
          <div class="image col-sm-12 col-md-6">
            <img class="img-responsive" src="<?php print $theme_path . '/assets/img/landing-pages/ictp-infuse/PWInfuse_750x500px.png' ?>" alt="Plate writer Infuse">
          </div>
        </div>
      </div>
    </div><!--/innerwrapper-->
    <div class="container">
      <div class="row additional">
        <div class="form col-sx-12 col-sm-6 col-md-3">
          <?php print render($request_form); ?>
        </div>
        <div class="col-sx-12 col-sm-6 col-md-3">
          <div class="image">
            <img class="img-responsive" src="<?php print $theme_path . '/assets/img/landing-pages/ictp-infuse/save-money.jpg' ?>" alt="Save money & resources">
          </div>
          <div class="text save-money">
            <span class="arrow-top"></span>Save&nbsp;money&nbsp;&&nbsp;resources
          </div>
        </div>
        <div class="col-sx-12 col-sm-6 col-md-3">
          <div class="image">
            <img class="img-responsive" src="<?php print $theme_path . '/assets/img/landing-pages/ictp-infuse/reuse-and-renew.jpg' ?>" alt="Reuse & renew">
          </div>
          <div class="text renew">
            <span class="arrow-top"></span>Reuse & renew
          </div>
        </div>
        <div class="col-sx-12 col-sm-6 col-md-3">
          <div class="image">
            <img class="img-responsive" src="<?php print $theme_path . '/assets/img/landing-pages/ictp-infuse/quick-assemble.jpg' ?>" alt="Quick to assemble">
          </div>
          <div class="text assemble">
            <span class="arrow-top"></span>Quick to assemble
          </div>
        </div>
      </div>
    </div>
  </div><!--/content-->
  <div class="footer">
    <div class="container">
      Glunz & Jensen <?php print date('Y', strtotime('now')); ?>
      <div class="row"></div>
    </div>
  </div>
</div><!--/pagewrapper-->
