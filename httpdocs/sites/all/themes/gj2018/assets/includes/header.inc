<header>
 <span class="container">
  <span class="logocontainer"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">logo</a></span>
  <span class="mainmenu-wrapper">
  <?php print render($page['topmenu']); ?>
    <!--<?php if ($main_menu): ?><?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('class' => array('links', 'inline', 'clearfix')))); ?><?php endif; ?>-->
  </span>
  <span class="searchlogin">
    <a class="search" href="#">search</a>
    <a class="login" href="/user" target="_self">login</a>
  </span>

  <div class="mm-container">
    <button id="mm-button" class="sidr__toggle"></button>
  </div>

   </span>
</header>