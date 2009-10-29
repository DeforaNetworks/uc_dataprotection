<?php
// $Id;


function uc_termsofservice_admin_settings() {
  $form = array();

  $form['tos_target'] = array(
    '#type' => 'radios',
    '#title' => t('Select where the ToS information will be shown'),
    '#options' => array(
      0 =>t('disabled'),
      UC_TERMSOFSERVICE_CART => t('cart'),
      UC_TERMSOFSERVICE_CHECKOUT => t('checkout'),
    ),
    '#default_value' => variable_get('tos_target', 0),
  );

  $form['tos_required'] = array(
    '#type' => 'checkbox',
    '#title' => t('ToS agreement is required'),
    '#default_value' => variable_get('tos_required', 0),
  );

  $form['tos_node'] = array(
    '#type' => 'textfield',
    '#title' => t('Select the node that corresponds to the Terms of Service'),
    '#autocomplete_path' => 'uc_termsofservice/node/autocomplete',
    '#default_value' => variable_get('tos_node', NULL),
  );

  return system_settings_form($form);
}

function uc_termsofservice_node_autocomplete($string) {
  if ($string != '') { // if there are node_types passed, we'll use those in a MySQL IN query.
    $preg_matches = array();
    $match = preg_match('/\[nid: (\d+)\]/', $string, $preg_matches);
    if (!$match) {
      $match = preg_match('/^nid: (\d+)/', $string, $preg_matches);
    }
    if ($match) {
      $arg = $preg_matches[1];
      $where = "n.nid = %d";
    }
    else {
      $arg = $string;
      $where = "LOWER(title) LIKE LOWER('%%%s%%')";
    }
    $result = db_query_range(db_rewrite_sql("SELECT n.nid, n.title, u.name FROM {node} n INNER JOIN {users} u ON u.uid = n.uid WHERE $where"), $arg, 0, 10);

    $matches = array();
    while ($node = db_fetch_object($result)) {
      $name = empty($node->name) ? variable_get('anonymous', t('Anonymous')) : check_plain($node->name);
      $matches[$node->title . " [nid: $node->nid]"] = '<span class="autocomplete_title">'. check_plain($node->title) .'</span> <span class="autocomplete_user">('. t('by @user', array('@user' => $name)) .')</span>';
    }
    drupal_json($matches);
  }
}