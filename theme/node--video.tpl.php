<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"><div class="node-inner node-content">

  <?php if (!$page): //For teaser view, we will only show the thumbnail and title ?>
    <h2 class="title">
      <a href="<?php print $node_url; ?>" title="<?php print $title ?>"><?php print $title; ?></a>
    </h2>
    
     <?php print l(render($content['field_video']), 'node/'.$node->nid, array('html' => TRUE)); ?>    
  <?php else: ?>
    <?php if (!empty($unpublished)): ?>
      <div class="unpublished"><?php print t('Unpublished'); ?></div>
    <?php endif; ?>

    <?php if ($submitted): ?>
      <div class="meta">
        <?php if (!empty($submitted)): ?>
          <div class="submitted">
            <?php print $submitted; ?>
          </div>
        <?php endif; ?>

        <?php if (!empty($terms)): ?>
          <div class="terms terms-inline"><?php print t(' in ') . $terms; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <div class="content">
      <?php hide($content['comments']); ?>
      <?php hide($content['links']); ?>
      <?php print render($content); ?>
      <?php print render($content['comments']); ?>
    </div>

    <?php print render($content['links']); ?>
  <?php endif; ?>
</div></div> <!-- /node-inner, /node -->
