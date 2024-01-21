<?php

$foo = _wp_register_meta_args_whitelist(['foo'], ['bar']);
$foo = add_option_whitelist(['foo'], 'bar');
$foo = remove_option_whitelist(['foo'], 'bar');
$foo = wp_blacklist_check('foo', 'bar', 'baz', 'foo', 'bar', 'baz');
wp_make_content_images_responsive('foo');

$type = 'check';
$action = "wp_blacklist_{$type}";

add_action($action, 'cb');
add_filter('whitelist_options', '__return_empty_array');

?>
-----
<?php

$foo = _wp_register_meta_args_allowed_list(['foo'], ['bar']);
$foo = add_allowed_options(['foo'], 'bar');
$foo = remove_allowed_options(['foo'], 'bar');
$foo = wp_check_comment_disallowed_list('foo', 'bar', 'baz', 'foo', 'bar', 'baz');
wp_filter_content_tags('foo');

$type = 'check';
$action = "wp_blacklist_{$type}";

add_action('wp_check_comment_disallowed_list', 'cb');
add_filter('allowed_options', '__return_empty_array');

?>
