<article id="node-<?php print $node->nid; ?>"
         class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if (isset($content['field_video'])): ?>
    <!-- Begin - video -->
    <div class="node__video">
      <?php print render($content['field_video']); ?>
    </div>
    <!-- End - image -->
  <?php endif; ?>

  <?php if (isset($content['field_date'])): ?>
    <!-- Begin - date -->
    <div class="node__date">
      <?php print render($content['field_date']); ?>
    </div>
    <!-- End - date -->
  <?php endif; ?>

  <?php if (isset($content['body'])): ?>
    <!-- Begin - body -->
    <div class="node__body">
      <?php print render($content['body']); ?>
    </div>
    <!-- End - body -->
  <?php endif; ?>

  <?php if ( isset( $content['field_files_for_download'] ) ): ?>
    <!-- Begin - files for download -->
    <div class="node__files-for-download">
      <h4><strong><?php print t('Files for download'); ?></strong></h4>

      <?php print render( $content['field_files_for_download'] ); ?>
    </div>
    <!-- End - files for download -->
  <?php endif; ?>

</article>
