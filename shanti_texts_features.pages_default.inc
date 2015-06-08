<?php
/**
 * @file
 * shanti_texts_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function shanti_texts_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'A front page with slider, etc.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel_context_4b65a299-58d7-4bff-87a4-844773a53597';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_css_js_files_css' => '',
    'panels_css_js_files_js' => '',
    'panels_css_js_code_css' => '.carousel-inner .item {
  max-width: 960px;
  margin: 0 auto;
}',
    'panels_css_js_code_js' => '',
    'panels_css_js_code_js_wrapper' => '0',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'style' => 'naked',
    'middle' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2440761-85aa-447f-934a-b1c623c62bf2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f78ba28e-06d2-46c2-9222-6199ac48c727';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'about_pane_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-overview',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f78ba28e-06d2-46c2-9222-6199ac48c727';
    $display->content['new-f78ba28e-06d2-46c2-9222-6199ac48c727'] = $pane;
    $display->panels['middle'][0] = 'new-f78ba28e-06d2-46c2-9222-6199ac48c727';
    $pane = new stdClass();
    $pane->pid = 'new-afe520fb-68f6-4e76-aec8-cd63e16d4e42';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'feature_content_carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'afe520fb-68f6-4e76-aec8-cd63e16d4e42';
    $display->content['new-afe520fb-68f6-4e76-aec8-cd63e16d4e42'] = $pane;
    $display->panels['middle'][1] = 'new-afe520fb-68f6-4e76-aec8-cd63e16d4e42';
    $pane = new stdClass();
    $pane->pid = 'new-528f844a-81e4-4931-af44-35c161fc31e2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'all_texts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '36',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '528f844a-81e4-4931-af44-35c161fc31e2';
    $display->content['new-528f844a-81e4-4931-af44-35c161fc31e2'] = $pane;
    $display->panels['middle'][2] = 'new-528f844a-81e4-4931-af44-35c161fc31e2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__template';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'template';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Overview',
    'contexts' => array(),
    'relationships' => array(),
    'module' => 'strongarm',
    'theme' => 'shanti_sarvaka_texts',
    'module_or_theme' => 'theme',
    'template' => 'shanti-texts-front-page',
    'template_path' => 'templates',
    'hook_theme' => 1,
    'full_page' => 0,
    'name' => 'template',
    'theme_function' => 'shanti_sarvaka_texts_template_shanti_texts_front_page',
    'base' => 'shanti_sarvaka_texts',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
