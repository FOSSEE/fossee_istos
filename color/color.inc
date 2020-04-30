<?php

/**
 * @file
 * Lists available colors and color schemes for the Fossee theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'topnav' => t('Header Text color'),
    'topnav1' => t('Footer Text color'),
    'header' => t('Header background'),
    'footer' => t('Footer background'),
    'top' => t('Navbar background'),
    'nav-text' => t('Navbar text'),
    'nav-hover' => t('Navbar hover'),
    'main' => t('Main background'),
    'bg' => t('Text background'),
    'sidebar' => t('Sidebar background'),
    'text' => t('Default Text color'),
    'link' => t('Link color'),
    
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Fossee (default)'),
      'colors' => [
        'topnav' => '#ffffff',
        'topnav1' => '#f8f8f8',
        'header' => '#1233c4',
        'footer' => '#444444',
        'top' => '#3498db',
        'nav-text' => '#000000',
        'nav-hover' => '#ebe1ce',
        'main' => '#fffacd',
        'bg'  => '#e0ffff',
        'sidebar' => '#f6f6f2',
        'text' => '#343536',
        'link' => '#337ab7',
      ],
    ],
  ],
 

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.png',
  ],

  // Gradient definitions.
  'gradients' => [
    [
      // (x, y, width, height).
      'dimension' => [0, 0, 0, 0],
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => ['top', 'bottom'],
    ],
  ],

  // Preview files.
  'preview_library' => 'fossee_istos/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'fossee_istos'),
      ],
    ],
  ],
];
