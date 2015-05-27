<?php
/**
 * @file
 * event_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function event_content_type_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
