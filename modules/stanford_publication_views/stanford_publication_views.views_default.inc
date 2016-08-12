<?php
/**
 * @file
 * stanford_publication_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_publication_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more publications';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_small_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Publication Year (field_s_publication_year) */
  $handler->display->display_options['sorts']['field_s_publication_year_value']['id'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['field'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['order'] = 'DESC';
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
    'stanford_publication' => 'stanford_publication',
  );

  /* Display: 21 Item Publication Page */
  $handler = $view->new_display('page', '21 Item Publication Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-five well';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No publications found.';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_sm_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['text'] = '([field_s_publication_year])';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Author (field_s_pub_author) */
  $handler->display->display_options['filters']['field_s_pub_author_value']['id'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['filters']['field_s_pub_author_value']['field'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_pub_author_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_author_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['operator_id'] = 'field_s_pub_author_value_op';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['label'] = 'Search by author';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['operator'] = 'field_s_pub_author_value_op';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['identifier'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['path'] = 'publications';
  $handler->display->display_options['menu']['title'] = 'Publications';

  /* Display: 14 Item Publication Page Block */
  $handler = $view->new_display('block', '14 Item Publication Page Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-five';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_small_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['text'] = '([field_s_publication_year])';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';

  /* Display: Table Page */
  $handler = $view->new_display('page', 'Table Page', 'table_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Document Library';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_s_image_info' => 'field_s_image_info',
    'title' => 'title',
    'body' => 'title',
    'field_s_pub_author' => 'field_s_pub_author',
    'field_s_publication_year' => 'field_s_publication_year',
    'field_s_pub_type' => 'field_s_pub_type',
    'field_stanford_subsite_sub_tags' => 'field_stanford_subsite_sub_tags',
    'edit_node' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_image_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_pub_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_publication_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_pub_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stanford_subsite_sub_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Subsite Tags (field_stanford_subsite_sub_tags) */
  $handler->display->display_options['relationships']['field_stanford_subsite_sub_tags_tid']['id'] = 'field_stanford_subsite_sub_tags_tid';
  $handler->display->display_options['relationships']['field_stanford_subsite_sub_tags_tid']['table'] = 'field_data_field_stanford_subsite_sub_tags';
  $handler->display->display_options['relationships']['field_stanford_subsite_sub_tags_tid']['field'] = 'field_stanford_subsite_sub_tags_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Featured Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title & Abstract';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_s_pub_type']['id'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['field'] = 'field_s_pub_type';
  $handler->display->display_options['fields']['field_s_pub_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_pub_type']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Subsite Tags */
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['id'] = 'field_stanford_subsite_sub_tags';
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['table'] = 'field_data_field_stanford_subsite_sub_tags';
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['field'] = 'field_stanford_subsite_sub_tags';
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['label'] = 'Responsible Organization';
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_stanford_subsite_sub_tags']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'stanford_publication' => 'stanford_publication',
    'stanford_publication_series' => 'stanford_publication_series',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search by keyword';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    8 => 0,
    7 => 0,
    6 => 0,
    11 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  /* Filter criterion: Content: Type (field_s_pub_type) */
  $handler->display->display_options['filters']['field_s_pub_type_tid']['id'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['table'] = 'field_data_field_s_pub_type';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['field'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['operator_id'] = 'field_s_pub_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['label'] = 'Filter by type';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['operator'] = 'field_s_pub_type_tid_op';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['identifier'] = 'field_s_pub_type_tid';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    8 => 0,
    7 => 0,
    6 => 0,
    11 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_s_pub_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_pub_type_tid']['vocabulary'] = 'publication_type';
  /* Filter criterion: Content: Subsite Tags (field_stanford_subsite_sub_tags) */
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['id'] = 'field_stanford_subsite_sub_tags_tid';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['table'] = 'field_data_field_stanford_subsite_sub_tags';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['field'] = 'field_stanford_subsite_sub_tags_tid';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['expose']['operator_id'] = 'field_stanford_subsite_sub_tags_tid_op';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['expose']['label'] = 'Filter by responsible organization';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['expose']['operator'] = 'field_stanford_subsite_sub_tags_tid_op';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['expose']['identifier'] = 'field_stanford_subsite_sub_tags_tid';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    8 => 0,
    7 => 0,
    6 => 0,
    11 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_stanford_subsite_sub_tags_tid']['vocabulary'] = 'stanford_subsites_sites';
  /* Filter criterion: Content: Publication Series (field_s_pub_series) */
  $handler->display->display_options['filters']['field_s_pub_series_target_id']['id'] = 'field_s_pub_series_target_id';
  $handler->display->display_options['filters']['field_s_pub_series_target_id']['table'] = 'field_data_field_s_pub_series';
  $handler->display->display_options['filters']['field_s_pub_series_target_id']['field'] = 'field_s_pub_series_target_id';
  $handler->display->display_options['filters']['field_s_pub_series_target_id']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'documents';
  $export['publications'] = $view;

  return $export;
}
