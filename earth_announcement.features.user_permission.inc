<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function earth_announcement_user_default_permissions() {
  $permissions = array();

  // Exported permission: create earth_announcement content
  $permissions['create earth_announcement content'] = array(
    'name' => 'create earth_announcement content',
    'roles' => array(),
  );

  // Exported permission: delete any earth_announcement content
  $permissions['delete any earth_announcement content'] = array(
    'name' => 'delete any earth_announcement content',
    'roles' => array(),
  );

  // Exported permission: delete own earth_announcement content
  $permissions['delete own earth_announcement content'] = array(
    'name' => 'delete own earth_announcement content',
    'roles' => array(),
  );

  // Exported permission: edit any earth_announcement content
  $permissions['edit any earth_announcement content'] = array(
    'name' => 'edit any earth_announcement content',
    'roles' => array(),
  );

  // Exported permission: edit field_se_resource_link
  $permissions['edit field_se_resource_link'] = array(
    'name' => 'edit field_se_resource_link',
    'roles' => array(
      '0' => 'SUNet User',
      '1' => 'webeditor',
      '2' => 'webmaster',
    ),
  );

  // Exported permission: edit own earth_announcement content
  $permissions['edit own earth_announcement content'] = array(
    'name' => 'edit own earth_announcement content',
    'roles' => array(),
  );

  // Exported permission: view field_se_resource_link
  $permissions['view field_se_resource_link'] = array(
    'name' => 'view field_se_resource_link',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  return $permissions;
}
