<?php

add_settings_field('foo', 'bar', 'baz', 'privacy');
add_settings_section('foo', 'bar', 'baz', 'privacy');
register_setting('privacy', 'foo');
unregister_setting('privacy', 'foo');

get_default_page_to_edit();
get_post_to_edit(1);
get_udims(32, 32);

$wpdb = new wpdb;

$wpdb->supports_collation();

switch_to_blog(1, 'foo');
wp_create_thumbnail('foo', 1, 'bar');

$post = new WP_Post;

_get_post_ancestors($post);
_insert_into_post_button('foo');
_media_button('foo', 'bar', 'baz', 'qux');
_save_post_hook();
ms_deprecated_blogs_file();

wp_get_single_post(1);
get_page(1);

$foo = new Custom_Background;

$bar = $foo->attachment_fields_to_edit(['bar']);
$baz = $foo->filter_upload_tabs(['baz']);

?>
-----
<?php

add_settings_field('foo', 'bar', 'baz', 'reading');
add_settings_section('foo', 'bar', 'baz', 'reading');
register_setting('reading', 'foo');
unregister_setting('reading', 'foo');

get_default_post_to_edit('page');
get_post(1, OBJECT, 'edit');
wp_constrain_dimensions(32, 32, 128, 96);

$wpdb = new wpdb;

$wpdb->has_cap('collation');

switch_to_blog(1);
wp_create_thumbnail('foo', 1);

$post = new WP_Post;

get_post(1);
get_post(1);

$foo = new Custom_Background;

$bar = ['bar'];
$baz = ['baz'];

?>
