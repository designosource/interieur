<?php
/**
 * @file
 * vitrine.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vitrine_taxonomy_default_vocabularies() {
  return array(
    'vitrine' => array(
      'name' => 'Vitrine',
      'machine_name' => 'vitrine',
      'description' => 'Categoriën voor de vitrine pagina',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
