<?php

$class = new WP_Metadata_Lazyloader;

$class->lazyload_comment_meta('foo');
$class->lazyload_term_meta('foo');

block_core_navigation_submenu_build_css_colors(['foo'], ['bar'], false);
wlwmanifest_link();
wp_img_tag_add_loading_attr('foo', 'bar');

?>
-----
<?php

$class = new WP_Metadata_Lazyloader;

$class->lazyload_meta_callback('foo', 0, '', false, 'comment');
$class->lazyload_meta_callback('foo', 0, '', false, 'term');

block_core_navigation_link_build_css_colors(['foo'], ['bar'], false);
wp_img_tag_add_loading_optimization_attrs('foo', 'bar');

?>
