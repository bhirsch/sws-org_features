<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function designs_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'designs_list';
  $context->description = '';
  $context->tag = 'Designs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'designs' => 'designs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-button_block-block_1' => array(
          'module' => 'views',
          'delta' => 'button_block-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Designs');

  $export['designs_list'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'new_designs--front_page';
  $context->description = '270x270 thumbnails of new website skins';
  $context->tag = 'Front Page';
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
        'views-new_designs-block_1' => array(
          'module' => 'views',
          'delta' => 'new_designs-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('270x270 thumbnails of new website skins');
  t('Front Page');

  $export['new_designs--front_page'] = $context;
  return $export;
}
