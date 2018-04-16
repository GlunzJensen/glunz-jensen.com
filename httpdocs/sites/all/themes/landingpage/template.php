<?php

function landingpage_form_alter(&$form, &$form_state, $form_id) {
    if($form_id == webform_client_form_10291) {       
      foreach ($form["submitted"] as $key => $value) {
          if (in_array($value["#type"], array("textfield", "webform_email", "textarea"))) {
              $form["submitted"][$key]['#attributes']["placeholder"] = t(" ").strtolower(t($value["#title"]));
              $form["submitted"][$key]['#title_display'] = 'invisible';
          } 
      }
  }
}




