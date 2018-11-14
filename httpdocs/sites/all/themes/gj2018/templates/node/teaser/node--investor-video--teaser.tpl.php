<?php if ($view_mode == 'teaser'): ?>
  <!-- Begin - teaser -->
  <a href="<?php print $node_url; ?>" id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> element-wrapper-link entity-teaser clearfix"<?php print $attributes; ?>>

    <?php if (isset($content['field_preview_image'])): ?>
      <!-- Begin - preview image -->
      <div class="entity-teaser__preview-image">
        <?php print render($content['field_preview_image']); ?>
      </div>
      <!-- End - preview image -->
    <?php endif; ?>

    <div class="entity-teaser__heading">
      <h2 class="entity-teaser__heading__title heading-h4">
        <?php print $title; ?>
      </h2>
    </div>

    <?php if (isset($content['field_date'])): ?>
      <!-- Begin - date -->
      <div class="entity-teaser__date">
        <?php print render($content['field_date']); ?>
      </div>
      <!-- End - date -->
    <?php endif; ?>

  </a>
  <!-- End - teaser -->
<?php endif; ?>
