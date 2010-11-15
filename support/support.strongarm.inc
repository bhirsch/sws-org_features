<?php

/**
 * Implementation of hook_strongarm().
 */
function support_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_assign_to_widget';
  $strongarm->value = 'flexible';

  $export['casetracker_assign_to_widget'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_case_node_types';
  $strongarm->value = array(
    'ticket' => 'ticket',
    'blog' => 0,
    'button' => 0,
    'job' => 0,
    'page' => 0,
    'portfolio_entry' => 0,
    'product' => 0,
    'rotor_item' => 0,
    'slide' => 0,
    'website' => 0,
  );

  $export['casetracker_case_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_default_assign_to';
  $strongarm->value = 'Anonymous';

  $export['casetracker_default_assign_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_default_case_priority';
  $strongarm->value = '2';

  $export['casetracker_default_case_priority'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_default_case_status';
  $strongarm->value = '4';

  $export['casetracker_default_case_status'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_default_case_type';
  $strongarm->value = '12';

  $export['casetracker_default_case_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_project_node_types';
  $strongarm->value = array(
    'product' => 'product',
    'blog' => 0,
    'button' => 0,
    'job' => 0,
    'page' => 0,
    'portfolio_entry' => 0,
    'rotor_item' => 0,
    'slide' => 0,
    'ticket' => 0,
    'website' => 0,
  );

  $export['casetracker_project_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_view_assignee_options';
  $strongarm->value = 'casetracker_assignee_options';

  $export['casetracker_view_assignee_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'casetracker_view_project_options';
  $strongarm->value = 'casetracker_project_options';

  $export['casetracker_view_project_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ticket';
  $strongarm->value = 0;

  $export['comment_anonymous_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ticket';
  $strongarm->value = '3';

  $export['comment_controls_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ticket';
  $strongarm->value = '4';

  $export['comment_default_mode_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ticket';
  $strongarm->value = '1';

  $export['comment_default_order_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ticket';
  $strongarm->value = '50';

  $export['comment_default_per_page_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ticket';
  $strongarm->value = '1';

  $export['comment_form_location_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ticket';
  $strongarm->value = '1';

  $export['comment_preview_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ticket';
  $strongarm->value = '0';

  $export['comment_subject_field_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ticket';
  $strongarm->value = '2';

  $export['comment_ticket'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_product';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_product'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ticket';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_ticket'] = $strongarm;
  return $export;
}
