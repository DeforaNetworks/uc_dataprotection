/**
 * @file
 * Terms of Service modal frames.
 */

(function ($) {

Drupal.behaviors.uc_dataprotection_modalframe = function() {
  $('.uc_dataprotection-child:not(.modalframe-dp-processed)').addClass('modalframe-dp-processed').click(function() {
    var element = this;

    function onSubmitCallbackToS(args, statusMessages){
     if (args && args.dp_selected.agreed) {
       if (args.dp_selected.agreed == 'agreed') {
        $(".form-checkboxes input[id*='dp-agree-popup-agreed']").attr('checked', true);
       }
       else {
        $(".form-checkboxes input[id*='dp-agree-popup-agreed']").attr('checked', false);
       }
     }
    }

    // Build modal frame options.
    var modalOptions = {
      url: $(element).attr('href'),
      autoResize: true,
      onSubmit: onSubmitCallbackToS
    };

    // Try to obtain the dialog size from the className of the element.
    var regExp = /^.*uc_dataprotection-size\[\s*([0-9]*\s*,\s*[0-9]*)\s*\].*$/;
    if (typeof element.className == 'string' && regExp.test(element.className)) {
      var size = element.className.replace(regExp, '$1').split(',');
      modalOptions.width = parseInt(size[0].replace(/ /g, ''));
      modalOptions.height = parseInt(size[1].replace(/ /g, ''));
    }

    // Open the modal frame dialog.
    Drupal.modalFrame.open(modalOptions);

    // Prevent default action of the link click event.
    return false;
  });
};

})(jQuery);
