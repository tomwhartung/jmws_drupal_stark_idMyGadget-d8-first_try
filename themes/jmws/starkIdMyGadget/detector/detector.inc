<?php

/**
 * @file
 * Lists available colors and color schemes for the Bartik theme.
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'firehouse' => array(
      'title' => t('Firehouse Subs'),
      'colors' => array(
        'top' => '#cd2d2d',
        'bottom' => '#d64e4e',
      ),
    ),
    'plum' => array(
      'title' => t('Plum'),
      'colors' => array(
        'top' => '#4c1c58',
        'bottom' => '#593662',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.svg',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Preview files.
  'preview_library' => 'bartik/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'detector' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'bartik'),
      ],
    ],
  ],
);
