<?php

/*
 * implimentation of hook_theme()
 */
function openpublic_video_theme($existing) {
  $item = $existing['node'];
  $item['path'] = drupal_get_path('module', 'openpublic_video') ."/theme";
  $item['template'] = 'node--video';
  return array("node__video" => $item);
}
function openpublic_video_page_preprocess_node($vars) {
}
