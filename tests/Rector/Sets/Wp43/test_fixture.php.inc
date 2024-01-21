<?php

$foo = _preview_theme_stylesheet_filter();
$bar = _preview_theme_template_filter();
$baz = preview_theme_ob_filter_callback(['foo']);

$foo = wp_htmledit_pre('bar');

add_filter('htmledit_pre', '__return_empty_string');

preview_theme();

$foo = preview_theme_ob_filter('bar');

?>
-----
<?php

$foo = __return_empty_string();
$bar = __return_empty_string();
$baz = __return_empty_string();

$foo = format_for_editor('bar');

add_filter('format_for_editor', '__return_empty_string');

$foo = 'bar';

?>
