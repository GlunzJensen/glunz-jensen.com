<header>
  <span class="header-left">
 <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">logo</a>
  </span><!-- /header-left -->
  <span class="header-right">
    <!--<div class="mobile-menu-wrapper">
    <div class="mm-container">
      <button id="mm-button"></button>
    </div>
    <div class="nav-closed" id="mobile-nav">
      <div class="indhold">
     <!--<?php if ($main_menu): ?><?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('class' => array('links', 'inline', 'clearfix')))); ?><?php endif; ?> -->
       <!--</div><!--/indhold-->
    <!--</div><!--/mobile-nav-->
    <!--</div>-->
    <a href="mailto:gj-americas@glunz-jensen.com"  class="mail">gj-americas@glunz-jensen.com</a>
  </span><!-- /header-right -->
  <div class="picformbg">
    <span class="toppicture"> 
    <h1 class="big">iCtP PlateWriter 3600 Pro</h1>
    <h4 class="sub">Affordable platemaking </br>for your prepress room</h4>
    <?php print render($page['toppicture']); ?>
    <span class="itcplogo"></span>
    </span>
    <span class="formwrapper"> <?php print render($page['formwrapper']); ?></span>
  </div>
</header>