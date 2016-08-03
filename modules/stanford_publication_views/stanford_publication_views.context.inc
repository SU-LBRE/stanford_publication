<?php
/**
 * @file
 * stanford_publication_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_publication_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'documents';
  $context->description = 'Blocks placed on Document Library page';
  $context->tag = 'Document Library';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'documents' => 'documents',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-publications-table_page' => array(
          'module' => 'views',
          'delta' => '-exp-publications-table_page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks placed on Document Library page');
  t('Document Library');
  $export['documents'] = $context;

  return $export;
}
