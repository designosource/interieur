<?php
/**
 * @file
 * nieuws.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nieuws_node_info() {
  $items = array(
    'nieuws' => array(
      'name' => t('Nieuws'),
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
