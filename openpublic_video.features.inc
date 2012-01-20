<?php
/**
 * @file
 * openpublic_video.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function openpublic_video_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function openpublic_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Video content can be entered by referencing an external source, like YouTube or Vimeo.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
