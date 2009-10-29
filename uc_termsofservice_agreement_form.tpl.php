<?php
drupal_add_css(drupal_get_path('module', 'uc_termsofservice').'/uc_termsofservice.css', 'theme', 'all');
?>

<div class="tos-text">
  <span>
    <?php print drupal_render($form['tos_text']); ?>
  </span>
</div>
<div class ="tos-agree">
  <?php print drupal_render($form['tos_agree']); ?>
</div>
<?php print drupal_render($form);?>