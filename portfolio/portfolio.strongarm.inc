<?php

/**
 * Implementation of hook_strongarm().
 */
function portfolio_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_portfolio_entry';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'menu' => '-4',
    'path' => '2',
  );

  $export['content_extra_weights_portfolio_entry'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_portfolio_entry';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_portfolio_entry'] = $strongarm;
  return $export;
}
