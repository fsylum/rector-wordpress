<?php

print_embed_styles();
print_emoji_styles();
wp_admin_bar_header();
_admin_bar_bump_cb();
wp_img_tag_add_decoding_attr('foo', 'bar');

$foo = TEMPLATEPATH;
$bar = STYLESHEETPATH;

?>
-----
<?php

wp_enqueue_embed_styles();
wp_enqueue_emoji_styles();
wp_enqueue_admin_bar_header_styles();
wp_enqueue_admin_bar_bump_styles();
wp_img_tag_add_loading_optimization_attrs('foo', 'bar');

$foo = \get_template_directory();
$bar = \get_stylesheet_directory();

?>
