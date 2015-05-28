<?php
/**
 * @file
 * vrienden_van_faydherbe.features.inc
 */

/**
 * Implements hook_node_info().
 */
function vrienden_van_faydherbe_node_info() {
  $items = array(
    'friends' => array(
      'name' => t('Vrienden'),
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
