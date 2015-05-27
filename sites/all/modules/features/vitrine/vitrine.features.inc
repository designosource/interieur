<?php
/**
 * @file
 * vitrine.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vitrine_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vitrine_node_info() {
  $items = array(
    'vitrine' => array(
      'name' => t('Vitrine'),
      'base' => 'node_content',
      'description' => t('Op deze pagina worden de werken van studenten interieur en vrienden van Faydherbe uitgestald.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
