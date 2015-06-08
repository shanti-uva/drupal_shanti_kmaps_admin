<?php
/**
 * @file
 * shanti_texts_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function shanti_texts_features_taxonomy_default_vocabularies() {
  return array(
    'places' => array(
      'name' => 'Places',
      'machine_name' => 'places',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'subjects' => array(
      'name' => 'Subjects',
      'machine_name' => 'subjects',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
