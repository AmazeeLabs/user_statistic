<?php
// $Id$

/**
 * @file
 * Admin settings for user_statistic module.
 */

/*
 * System settings form
 */
function user_statistic_admin_setting($form, &$form_state) {
  global $user;

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('Settings'),
  );
  $form['general']['user_statistic_default_interval'] = array(
    '#type' => 'textfield',
    '#title' => t('Interval in seconds, a user will be count as online (default: 900)'),
    '#default_value' => variable_get('user_statistic_default_interval', 900),
  );
  $form['general']['user_statistic_default_max_display'] = array(
    '#type' => 'textfield',
    '#title' => t('Max number of users and guests/spiders to display (default: 100), "0" for no limit'),
    '#default_value' => variable_get('user_statistic_default_max_display', 100),
  );
  $form['general']['user_statistic_default_display_authenticated'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display authenticated users'),
    '#default_value' => variable_get('user_statistic_default_display_authenticated', TRUE),
  );
  $form['general']['user_statistic_default_display_guests'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display guests'),
    '#default_value' => variable_get('user_statistic_default_display_guests', TRUE),
  );
  $form['general']['user_statistic_default_use_geoplugin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Try to locate guests with geoplugin'),
    '#default_value' => variable_get('user_statistic_default_use_geoplugin', TRUE),
  );
  $form['general']['user_statistic_default_display_spiders'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display spiders'),
    '#default_value' => variable_get('user_statistic_default_display_spiders', TRUE),
  );
  $form['general']['user_statistic_default_spiders'] = array(
    '#type' => 'textfield',
    '#title' => t('Comma separated list of spiders (aka bots), identified by hostname'),
    '#default_value' => variable_get('user_statistic_default_spiders', 'google, fatlens, yahoo, altavista, yandex, baidu, bing, thefind, bot, spider, crawl'),
  );
  $form['general']['user_statistic_default_table_output'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display block with table theming (default), when unchecked, results are displayed as divs'),
    '#default_value' => variable_get('user_statistic_default_table_output', TRUE),
  );

  return system_settings_form($form);
}
