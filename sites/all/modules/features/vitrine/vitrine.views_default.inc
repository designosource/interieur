<?php
/**
 * @file
 * vitrine.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vitrine_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vitrine';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vitrine';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vitrine';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['text'] = 'lees meer';
  /* Field: Content: Auteur */
  $handler->display->display_options['fields']['field_auteur']['id'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['fields']['field_auteur']['field'] = 'field_auteur';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vitrine' => 'vitrine',
  );
  /* Filter criterion: Content: Categorie_vitrine (field_categorie_vitrine) */
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['id'] = 'field_categorie_vitrine_tid';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['table'] = 'field_data_field_categorie_vitrine';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['field'] = 'field_categorie_vitrine_tid';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['operator_id'] = 'field_categorie_vitrine_tid_op';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['label'] = 'Categorie_vitrine (field_categorie_vitrine)';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['operator'] = 'field_categorie_vitrine_tid_op';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['identifier'] = 'field_categorie_vitrine_tid';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['group_info']['label'] = 'Categorie_vitrine (field_categorie_vitrine)';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['group_info']['identifier'] = 'field_categorie_vitrine_tid';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_categorie_vitrine_tid']['vocabulary'] = 'vitrine';
  /* Filter criterion: Content: Auteur (field_auteur) */
  $handler->display->display_options['filters']['field_auteur_value']['id'] = 'field_auteur_value';
  $handler->display->display_options['filters']['field_auteur_value']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['filters']['field_auteur_value']['field'] = 'field_auteur_value';
  $handler->display->display_options['filters']['field_auteur_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_auteur_value']['expose']['operator_id'] = 'field_auteur_value_op';
  $handler->display->display_options['filters']['field_auteur_value']['expose']['label'] = 'Auteur (field_auteur)';
  $handler->display->display_options['filters']['field_auteur_value']['expose']['operator'] = 'field_auteur_value_op';
  $handler->display->display_options['filters']['field_auteur_value']['expose']['identifier'] = 'field_auteur_value';
  $handler->display->display_options['filters']['field_auteur_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'vitrine';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vitrine';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['vitrine'] = $view;

  return $export;
}
