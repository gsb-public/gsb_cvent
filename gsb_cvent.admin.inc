<?php

/**
 * Functions related to cvent admin 
 */
/**
 * Admin configuration form for cvent
 */
function gsb_cvent_settings_form($form, $form_state) {

  $form['gsb_cvent_account_number'] = array(
    '#title' => 'GSB Cvent account number',
    '#type' => 'textfield',
    '#default_value' => variable_get('gsb_cvent_account_number', NULL),
  );

  $form['gsb_cvent_user_name'] = array(
    '#title' => 'GSB Cvent username',
    '#type' => 'textfield',
    '#default_value' => variable_get('gsb_cvent_user_name', NULL),
  );

  $form['gsb_cvent_password'] = array(
    '#title' => 'GSB Cvent password',
    '#type' => 'textfield',
    '#default_value' => variable_get('gsb_cvent_password', NULL),
  );

  return system_settings_form($form, $form_state);
}
