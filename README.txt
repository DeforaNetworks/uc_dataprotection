-- Ubercart Terms of Service --
This module allows the administrator of a Ubercart Shop to add a check of 
Terms of Service (ToS) in the Checkout pane or in the Cart pane.

-- Installation --
Just enable the module, cart module and checkout module of ubercart are 
required.
The configuration panel of this module can be found in Store Administration > 
Configuration > Terms of Service (admin/store/settings/tos).
You can select there if the ToS is placed in cart or checkout pane, if they are
required and the node corresponding to the ToS.
Multilanguage is supported through the Translation module. You can translate the
ToS node and the correct translation will appear depending of the language.

-- ToS in js popup --
You can enable the ModalFrame API (http://drupal.org/project/modalframe) module
in order to have the Terms of Service opened in a js popup window, you can 
accept the ToS from this window.
You can disable the popup option in the settings of the module.

-- Theming & ToS text --
You can theme both form and ToS text from two tpl files included with this 
module and a css file, just copy those tpl files in your theme and modify the 
text, structure or css.
By default, the node body 

-- Know Issues --
The ToS can be placed as a cart pane, but then it won't be required. 

If you need a previous agreement checkbox, i.e. in the registration of the 
users, please take a look to the Legal (http://drupal.org/project/legal) or 
Terms of Service (http://drupal.org/project/terms_of_use) module.

Module supported by Neurotic (http://www.neurotic.es)
