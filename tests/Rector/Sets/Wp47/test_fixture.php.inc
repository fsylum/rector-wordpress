<?php

unregister_setting('foo', 'bar', 'baz');
get_paged_template();

$foo = 'bar';
$bar = wp_kses_js_entities($foo);

(new WP_Roles)->reinit();

$baz = new WP_Roles;
$baz->reinit();

add_filter('blog_details', '__return_empty_array');

$class = new WP_Customize_Manager;

$class->customize_preview_base();
$class->customize_preview_html5();
$class->customize_preview_override_404_status();
$class->customize_preview_signature();
$foo = $class->remove_preview_signature('bar');

?>
-----
<?php

unregister_setting('foo', 'bar');
get_query_template('paged');

$foo = 'bar';
$bar = preg_replace('%&\s*\{[^}]*(\}\s*;?|$)%', '', $foo);

(new WP_Roles)->for_site();

$baz = new WP_Roles;
$baz->for_site();

add_filter('site_details', '__return_empty_array');

$class = new WP_Customize_Manager;
$foo = 'bar';

?>
