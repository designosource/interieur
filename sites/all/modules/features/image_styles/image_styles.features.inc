<?php
/**
 * @file
 * image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: extra-large__600x400_.
  $styles['extra-large__600x400_'] = array(
    'label' => 'extra-large (650x300)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large-banner.
  $styles['large-banner'] = array(
    'label' => 'large-banner (500x200)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mid-large.
  $styles['mid-large'] = array(
    'label' => 'mid-large (300x300)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: original.
  $styles['original'] = array(
    'label' => 'Original',
    'effects' => array(),
  );

  return $styles;
}
