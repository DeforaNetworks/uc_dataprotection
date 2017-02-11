Ubercart Data Protection
========================
This module allows the administrator of a Ubercart Shop to add a check of Data
Protection in the Checkout pane or in the Cart pane.

This is a fork of the Terms of Service module for Ubercart.

Installation
------------
Just enable the module, cart module and checkout module of ubercart are 
required.
The configuration of this module is merged into the Ubercart pane settings.
You can configure the options for checkout in panes' checkout configuration
page (admin/store/settings/checkout/edit/panes) and for cart in panes' cart
configuration page (admin/store/settings/cart/edit/panes).

Options available for configuration:
- Whether the Data Protection is displayed or not in cart and/or checkout pages.
- The weight of the pane.
- The node you want for Data Protection page.
- In case of checkout, if the Data Protection is required or not. 
- Cart pane can't be required.
- If ModalFrame API is present, you can also select if the Data Protection is
  displayed in a popup window and its size.
- You can configure conditional actions so the checkout pane is only displayed
when there is one product from a given class.

Multilanguage is supported through the Translation module. You can translate the
Data Protection node and the correct translation will be displayed depending of
the language.

Data Protection in js popup
---------------------------
You can enable the ModalFrame API (http://drupal.org/project/modalframe) module
in order to have the Terms of Service opened in a js popup window, you can 
accept the Data Protection from this window.
You can disable the popup option in the settings of the module.

Theming & Data Protection text
------------------------------
You can theme both form and Data Protection text from two tpl files included
with this module and a css file, just copy those tpl files in your theme and
modify the text, structure or css.
By default, the node body will be displayed.

Conditional Actions
-------------------
You can configure conditional actions to display the Terms of Service in the
checkout only if a product from a given product class or content type is 
present. The admin url for this is 
admin/store/ca/uc_dataprotection_display_pane/edit/conditions
You can also add extra conditions and actions.

Known Issues
------------
The Data Protection can be placed as a cart pane, but then it won't be required. 
If you are using Secure Pages for a version of the checkout in SSL, you should 
add uc_dataprotection/* to the Secure Pages settings.

Original module supported by Neurotic (http://www.neurotic.es)
