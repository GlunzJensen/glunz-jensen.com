<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print render($title_prefix); ?>
    <?php if ($block->subject): ?>
        <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div class="content"<?php print $content_attributes; ?>>
        <?php print $content ?>
    </div>

    <!-- Begin - product cta -->
    <div class="product-cta">

        <div class="product-cta__heading">
            <h2 class="product-cta__heading__title">Interested in this product?</h2>
        </div>

        <div class="product-cta__image">
            <img src="/<?= $theme_path ?>/assets/img/product-cta.jpg"
                 alt="">
        </div>

        <div class="product-cta__body">
            <div class="product-cta__contact">
                <h3>Contact us</h3>
            </div>

            <div class="product-cta__contact-item">
                <div class="product-cta__contact-item__icon">
                    <i class="fas fa-envelope"></i>
                </div>
                <div class="product-cta__contact-item__text">
                    <a href="mailto:gj@glunz-jensen.com">gj@glunz-jensen.com</a>
                </div>
            </div>
            <div class="product-cta__contact-item">
                <div class="product-cta__contact-item__icon">
                    <i class="fas fa-phone"></i>
                </div>
                <div class="product-cta__contact-item__text">
                    +45 5768 8181
                </div>
            </div>
        </div>
    </div>
    <!-- End - product cta -->

</div>
