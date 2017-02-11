<?php

/**
 * @file
 * Template file for agreement form.
 */

drupal_add_css(drupal_get_path('module', 'uc_dataprotection') .'/uc_dataprotection.css', 'theme', 'all');
?>

<div class="dp-text">
  <?php print drupal_render($form['dp_text']); ?>
</div>

<div class ="dp-agree">
  <?php print drupal_render($form['dp_agree']); ?>
</div>
<?php print drupal_render($form);?>
