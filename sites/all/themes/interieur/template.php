<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * interieur theme.
 */

//add path to theme to js settings.
drupal_add_js(array('pathToTheme' => array('pathToTheme' => base_path() . path_to_theme())), 'setting');
