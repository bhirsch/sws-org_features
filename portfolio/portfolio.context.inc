<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function portfolio_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portfolio';
  $context->description = '';
  $context->tag = 'portfolio';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'portfolio' => 'portfolio',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portfolio-block_1' => array(
          'module' => 'views',
          'delta' => 'portfolio-block_1',
          'region' => 'subheader',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portfolio');

  $export['portfolio'] = $context;
  return $export;
}
