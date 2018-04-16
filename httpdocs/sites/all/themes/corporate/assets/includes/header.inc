<div class="row" id="header">
  <div class="span4" id="logospot">
  <?php if ($logo): ?>
  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">logo</a>
  <?php endif; ?>
  </div><!--/logospot-->
<div class="row-fluid">
  <div class="span8" id="websitetabs">
  <?php print render($page['websitetabs']); ?>
  </div><!--/span8-->
</div><!--ROW-fluid--> 
</div><!--/1.row-->
<div class="row-fluid">  
  <div class="span12" id="loginsearch">
  <a class="search-link" href="#">SEARCH</a>
  <?php if (!$logged_in): ?>
  <a class="login-link" href="#">LOGIN</a>
  <?php endif; ?>
  <!-- <a class="search-link" href="javascript:toggleDiv('loginfield');">SEARCH</a> -->
  <?php print render($page['loginsearch']); ?>
  </div><!--/login-->
</div><!--row-fluid-->
<div id="loginfield" class="span12">
  <?php print render($page['loginsearch_open']); ?>
  <span class="ie8search"><a href="http://www.glunz-jensen.com/search">SEARCH</a></span>
</div><!--/loginfield-->
<div class="row-fluid">
  <div class="span12 topmenu">
  <a class="toggleMenu" href="#">menu</a>
  <?php print render($page['topmenu']); ?>
  <?php //print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
  </div><!--/topnav-->
</div>