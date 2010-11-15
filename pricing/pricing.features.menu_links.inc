<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function pricing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:pricing
  $menu_links['features:pricing'] = array(
    'menu_name' => 'features',
    'link_path' => 'pricing',
    'router_path' => 'pricing',
    'link_title' => 'Pricing',
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
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Pricing');


  return $menu_links;
}
