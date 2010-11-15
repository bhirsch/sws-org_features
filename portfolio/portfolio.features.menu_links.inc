<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function portfolio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:node/19
  $menu_links['features:node/19'] = array(
    'menu_name' => 'features',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Portfolio');


  return $menu_links;
}
