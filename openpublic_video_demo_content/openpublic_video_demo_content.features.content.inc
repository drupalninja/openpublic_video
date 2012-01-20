<?php
/**
 * @file
 * openpublic_video_demo_content.features.content.inc
 */

/**
 * Implementation of hook_content_defaults().
 */
function openpublic_video_demo_content_content_defaults() {
$content = array();
$content['op_video_introducing_op'] = (object)array(
  'exported_path' => 'video/introducing-openpublic',
  'title' => 'Introducing OpenPublic',
  'status' => '1',
  'promote' => '1',
  'sticky' => '0',
  'type' => 'video',
  'language' => 'und',
  'created' => '1327080872',
  'comment' => '2',
  'translate' => '0',
  'machine_name' => 'op_video_introducing_op',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'An introduction to OpenPublic, a Drupal distribution for government websites.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>An introduction to OpenPublic, a Drupal distribution for government websites.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_video' => array(
    'und' => array(
      0 => array(
        'fid' => '116',
        'title' => NULL,
        'data' => NULL,
      ),
    ),
  ),
);
return $content;
}
