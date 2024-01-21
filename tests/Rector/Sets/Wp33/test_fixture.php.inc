<?php

start_post_rel_link('foo', 'bar', 'baz');

type_url_form_audio();
type_url_form_file();
type_url_form_image();
type_url_form_video();

wp_preload_dialogs();
wp_print_editor_js();
wp_quicktags();

media_upload_audio();
media_upload_file();
media_upload_image();
media_upload_video();

$foo = new WP_Scripts;

$foo->print_scripts_l10n('foo');

$foo = get_user_by_email('bar');
$foo = get_userdatabylogin('bar');
$foo = is_blog_user(1);

$foo = 'foo';
$media = true;

the_editor($foo, 'bar', 'baz', false);
the_editor($foo, 'bar', 'baz', $media);

?>
-----
<?php

get_boundary_post_rel_link('foo', 'bar', 'baz', true);

wp_media_insert_url_form('audio');
wp_media_insert_url_form('file');
wp_media_insert_url_form('image');
wp_media_insert_url_form('video');

wp_media_upload_handler();
wp_media_upload_handler();
wp_media_upload_handler();
wp_media_upload_handler();

$foo = new WP_Scripts;

$foo->print_extra_script('foo');

$foo = get_user_by('email', 'bar');
$foo = get_user_by('login', 'bar');
$foo = is_user_member_of_blog(get_current_user_id(), 1);

$foo = 'foo';
$media = true;

wp_editor($foo, 'bar', ['media_buttons' => false]);
wp_editor($foo, 'bar', ['media_buttons' => $media]);

?>
