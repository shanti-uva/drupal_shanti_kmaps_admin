<?php
/**
 * @file
 * shanti_texts_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function shanti_texts_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_texts';
  $view->description = 'A view to search all texts';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Texts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Texts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '6, 24, 96';
  $handler->display->display_options['pager']['options']['preset'] = 'shanti_default';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_book_author' => 'field_book_author',
    'field_dc_date_orginial_year' => 'field_dc_date_orginial_year',
    'field_dc_date_publication_year' => 'field_dc_date_publication_year',
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="view-result-count-info">Displaying @start - @end of @total texts</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no texts match your search terms. Please try again.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Featured image */
  $handler->display->display_options['fields']['field_general_featured_image']['id'] = 'field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['table'] = 'field_data_field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['field'] = 'field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_general_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_featured_image']['settings'] = array(
    'image_style' => 'card_square',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><i class="icon shanticon-texts"></i>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'book-view-card-title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['delta_offset'] = '0';
  /* Field: Content: Original publication year */
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['id'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['table'] = 'field_data_field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['field'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['text'] = '[[field_dc_date_orginial_year]]';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publication year */
  $handler->display->display_options['fields']['field_dc_date_publication_year']['id'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['table'] = 'field_data_field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['field'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['alter']['text'] = '[field_dc_date_publication_year] [field_dc_date_orginial_year]';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_dc_description']['id'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['table'] = 'field_data_field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['field'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['label'] = '';
  $handler->display->display_options['fields']['field_dc_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_description']['element_wrapper_class'] = 'book-view-card-desc';
  $handler->display->display_options['fields']['field_dc_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_dc_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '1';
  $handler->display->display_options['filters']['depth']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '20';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Author (field_book_author) */
  $handler->display->display_options['filters']['field_book_author_value']['id'] = 'field_book_author_value';
  $handler->display->display_options['filters']['field_book_author_value']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['filters']['field_book_author_value']['field'] = 'field_book_author_value';
  $handler->display->display_options['filters']['field_book_author_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_book_author_value']['group'] = 1;
  $handler->display->display_options['filters']['field_book_author_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_author_value']['expose']['operator_id'] = 'field_book_author_value_op';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['operator'] = 'field_book_author_value_op';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['identifier'] = 'field_book_author_value';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_field'] = 'field_book_author';
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_book_author_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_3');
  $handler->display->display_options['path'] = 'alltexts';

  /* Display: By Place */
  $handler = $view->new_display('page', 'By Place', 'page_2');
  $handler->display->display_options['display_description'] = 'All Texts by Place KMap ID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Places (field_kmap_places:id) */
  $handler->display->display_options['arguments']['field_kmap_places_id']['id'] = 'field_kmap_places_id';
  $handler->display->display_options['arguments']['field_kmap_places_id']['table'] = 'field_data_field_kmap_places';
  $handler->display->display_options['arguments']['field_kmap_places_id']['field'] = 'field_kmap_places_id';
  $handler->display->display_options['arguments']['field_kmap_places_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_kmap_places_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kmap_places_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kmap_places_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_kmap_places_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_kmap_places_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_kmap_places_id']['validate_options']['code'] = '$parents = shanti_kmaps_fields_get_my_parents(\'field_kmap_places\',$argument);
$new_arg = $argument .\'+\'. implode(\'+\',$parents);
$new_arg = preg_replace("/(subjects|places)-/","",$new_arg);
$handler->argument = $new_arg;
return 1;';
  $handler->display->display_options['arguments']['field_kmap_places_id']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_kmap_places_id']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'alltexts/places/%';

  /* Display: By Subject */
  $handler = $view->new_display('page', 'By Subject', 'page_1');
  $handler->display->display_options['display_description'] = 'All Texts by Subject KMap ID';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Subjects (field_kmap_term:id) */
  $handler->display->display_options['arguments']['field_kmap_term_id']['id'] = 'field_kmap_term_id';
  $handler->display->display_options['arguments']['field_kmap_term_id']['table'] = 'field_data_field_kmap_term';
  $handler->display->display_options['arguments']['field_kmap_term_id']['field'] = 'field_kmap_term_id';
  $handler->display->display_options['arguments']['field_kmap_term_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_kmap_term_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_kmap_term_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_kmap_term_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_kmap_term_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_kmap_term_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_kmap_term_id']['validate_options']['code'] = '$parents = shanti_kmaps_fields_get_my_parents(\'field_kmap_term\',$argument);
$new_arg = $argument .\'+\'. implode(\'+\',$parents);
$new_arg = preg_replace("/(subjects|places)-/","",$new_arg);
$handler->argument = $new_arg;
return 1;';
  $handler->display->display_options['arguments']['field_kmap_term_id']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'alltexts/subjects/%';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3><i class="icon shanticon-texts"></i>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'book-view-card-title';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['delta_offset'] = '0';
  /* Field: Content: Original publication year */
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['id'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['table'] = 'field_data_field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['field'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['text'] = '[[field_dc_date_orginial_year]]';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publication year */
  $handler->display->display_options['fields']['field_dc_date_publication_year']['id'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['table'] = 'field_data_field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['field'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['alter']['text'] = '[field_dc_date_publication_year] [field_dc_date_orginial_year]';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_dc_description']['id'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['table'] = 'field_data_field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['field'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['label'] = '';
  $handler->display->display_options['fields']['field_dc_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_description']['element_wrapper_class'] = 'book-view-card-desc';
  $handler->display->display_options['fields']['field_dc_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_dc_description']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['pane_description'] = 'View All Texts';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: My */
  $handler = $view->new_display('page', 'My', 'page_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'mytexts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Texts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-test';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_texts'] = $view;

  $view = new view();
  $view->name = 'full_text_local';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_full_text_local';
  $view->human_name = 'Full Text Local';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Full Text Local';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Search Term */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Search Term';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $view->exposed_input[\'search_api_views_fulltext\']; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_full_text_local';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Ancestors */
  $handler->display->display_options['fields']['book_ancestors']['id'] = 'book_ancestors';
  $handler->display->display_options['fields']['book_ancestors']['table'] = 'search_api_index_full_text_local';
  $handler->display->display_options['fields']['book_ancestors']['field'] = 'book_ancestors';
  $handler->display->display_options['fields']['book_ancestors']['ui_name'] = 'Ancestors';
  $handler->display->display_options['fields']['book_ancestors']['label'] = '';
  $handler->display->display_options['fields']['book_ancestors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['book_ancestors']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['book_ancestors']['alter']['text'] = '[book_ancestors] >';
  $handler->display->display_options['fields']['book_ancestors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['book_ancestors']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['book_ancestors']['list']['separator'] = ' > ';
  $handler->display->display_options['fields']['book_ancestors']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['book_ancestors']['view_mode'] = 'full';
  $handler->display->display_options['fields']['book_ancestors']['bypass_access'] = 0;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_full_text_local';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]?s=[php]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_full_text_local';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['ui_name'] = 'Excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['text'] = '<h3>[book_ancestors] [title]</h3>
<p>[search_api_excerpt]</p>';
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_full_text_local';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['description'] = 'Search text content against local database';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Full Text Search';
  $handler->display->display_options['block_caching'] = '1';
  $export['full_text_local'] = $view;

  $view = new view();
  $view->name = 'mega_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mega Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mega Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'title' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['preset'] = 'shanti_default';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no text titles that match your search string. ';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'book' => 'book',
  );
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '1';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search by main title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Title */
  $handler = $view->new_display('block', 'Title', 'block');

  /* Display: Full */
  $handler = $view->new_display('block', 'Full', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mega Search Full';
  $handler->display->display_options['display_description'] = 'Full Text Search';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nid',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  $handler->display->display_options['relationships']['bid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Book: Depth */
  $handler->display->display_options['fields']['depth']['id'] = 'depth';
  $handler->display->display_options['fields']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['fields']['depth']['field'] = 'depth';
  $handler->display->display_options['fields']['depth']['label'] = '';
  $handler->display->display_options['fields']['depth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['depth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['depth']['separator'] = '';
  /* Field: Book: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'bid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'bid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="mega-search-title depth-[depth] weight-[weight]">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'bid';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'bid';
  /* Sort criterion: Book: Hierarchy */
  $handler->display->display_options['sorts']['p']['id'] = 'p';
  $handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['p']['field'] = 'p';
  $handler->display->display_options['sorts']['p']['sort_within_level'] = 0;
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Content (field_book_content) */
  $handler->display->display_options['filters']['field_book_content_value']['id'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['table'] = 'field_data_field_book_content';
  $handler->display->display_options['filters']['field_book_content_value']['field'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_book_content_value']['group'] = 1;
  $handler->display->display_options['filters']['field_book_content_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_content_value']['expose']['operator_id'] = 'field_book_content_value_op';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['description'] = 'Search full text content';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['operator'] = 'field_book_content_value_op';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['identifier'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $export['mega_search'] = $view;

  $view = new view();
  $view->name = 'text_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Text Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Featured image */
  $handler->display->display_options['fields']['field_general_featured_image']['id'] = 'field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['table'] = 'field_data_field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['field'] = 'field_general_featured_image';
  $handler->display->display_options['fields']['field_general_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_general_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_general_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_featured_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_dc_description']['id'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['table'] = 'field_data_field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['field'] = 'field_dc_description';
  $handler->display->display_options['fields']['field_dc_description']['label'] = '';
  $handler->display->display_options['fields']['field_dc_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_description']['element_default_classes'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_author']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_book_date']['id'] = 'field_book_date';
  $handler->display->display_options['fields']['field_book_date']['table'] = 'field_data_field_book_date';
  $handler->display->display_options['fields']['field_book_date']['field'] = 'field_book_date';
  $handler->display->display_options['fields']['field_book_date']['label'] = '';
  $handler->display->display_options['fields']['field_book_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Original publication year */
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['id'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['table'] = 'field_data_field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['field'] = 'field_dc_date_orginial_year';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['alter']['text'] = '([field_dc_date_orginial_year])';
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_orginial_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publication year */
  $handler->display->display_options['fields']['field_dc_date_publication_year']['id'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['table'] = 'field_data_field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['field'] = 'field_dc_date_publication_year';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_dc_date_publication_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_date_publication_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Display */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Display';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="carousel-main-content  col-xs-12 col-sm-7 col-md-8 col-lg-9">
  <h3 class="carousel-title"><span class="icon shanticon-texts"></span>[title]</h3>
  <div class="carousel-by-line">[field_book_author] [field_dc_date_publication_year] [field_dc_date_orginial_year]
</div>
  <div class="carousel-description">[field_dc_description]</div>
</div>
<div class="carousel-node-right">
  <div class="carousel-main-image col-xs-12 col-sm-5 col-md-4 col-lg-3">[field_general_featured_image]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'carousel-node';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'book' => 'book',
  );
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Text Carousel';
  $export['text_carousel'] = $view;

  $view = new view();
  $view->name = 'text_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Text Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Text Search';
  $handler->display->display_options['display_description'] = 'Full Text Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'pagerer';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['preset'] = 'shanti_default';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nid',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there were no results for your search string.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Book: Top level book */
  $handler->display->display_options['relationships']['bid']['id'] = 'bid';
  $handler->display->display_options['relationships']['bid']['table'] = 'book';
  $handler->display->display_options['relationships']['bid']['field'] = 'bid';
  $handler->display->display_options['relationships']['bid']['required'] = TRUE;
  /* Field: Book: Depth */
  $handler->display->display_options['fields']['depth']['id'] = 'depth';
  $handler->display->display_options['fields']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['fields']['depth']['field'] = 'depth';
  $handler->display->display_options['fields']['depth']['label'] = '';
  $handler->display->display_options['fields']['depth']['exclude'] = TRUE;
  $handler->display->display_options['fields']['depth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['depth']['separator'] = '';
  /* Field: Book: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'bid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'bid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="mega-search-title depth-[depth] weight-[weight]">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'bid';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['relationship'] = 'bid';
  /* Sort criterion: Book: Hierarchy */
  $handler->display->display_options['sorts']['p']['id'] = 'p';
  $handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['p']['field'] = 'p';
  $handler->display->display_options['sorts']['p']['sort_within_level'] = 0;
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Default */
  $handler = $view->new_display('block', 'Default', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Text Search Default';

  /* Display: Full */
  $handler = $view->new_display('block', 'Full', 'block_2');
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Content (field_book_content) */
  $handler->display->display_options['filters']['field_book_content_value']['id'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['table'] = 'field_data_field_book_content';
  $handler->display->display_options['filters']['field_book_content_value']['field'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_book_content_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_content_value']['expose']['operator_id'] = 'field_book_content_value_op';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['description'] = 'Search the content of texts';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['operator'] = 'field_book_content_value_op';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['identifier'] = 'field_book_content_value';
  $handler->display->display_options['filters']['field_book_content_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_book_content_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );

  /* Display: Title */
  $handler = $view->new_display('block', 'Title', 'block_3');
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Search the titles and subtitles of texts';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: My */
  $handler = $view->new_display('block', 'My', 'block_4');
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
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['text_search'] = $view;

  return $export;
}
