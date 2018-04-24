<?php
/**
 * @file
 * gj_context_conditions.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gj_context_conditions_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partners';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~products/*' => '~products/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-partners-block' => array(
          'module' => 'views',
          'delta' => 'partners-block',
          'region' => 'partners',
          'weight' => '-10',
        ),
        'views-partners-block_1' => array(
          'module' => 'views',
          'delta' => 'partners-block_1',
          'region' => 'partners',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['partners'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top-images-frontpage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-top_images-block' => array(
          'module' => 'views',
          'delta' => 'top_images-block',
          'region' => 'toppic',
          'weight' => '-10',
        ),
        'views-promotions-block' => array(
          'module' => 'views',
          'delta' => 'promotions-block',
          'region' => 'highlight',
          'weight' => '-10',
        ),
        'views-counters-block' => array(
          'module' => 'views',
          'delta' => 'counters-block',
          'region' => 'footercounter',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['top-images-frontpage'] = $context;

  return $export;
}
