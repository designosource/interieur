<?php
/**
 * @file
 * vrienden_van_faydherbe.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vrienden_van_faydherbe_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_in_de_kijker'
  $field_bases['field_in_de_kijker'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_in_de_kijker',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nee',
        1 => 'Ja',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
