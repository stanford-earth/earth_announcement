<?php

/**
 * Implementation of hook_node_info().
 */
function earth_announcement_node_info() {
  $items = array(
    'earth_announcement' => array(
      'name' => t('Announcement'),
      'module' => 'features',
      'description' => t('Time sensitive information such as deadlines or status updates.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function earth_announcement_views_api() {
  return array(
    'api' => '2',
  );
}
