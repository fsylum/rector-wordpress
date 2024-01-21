<?php

remove_custom_background();
remove_custom_image_header();
clean_page_cache(1);

$foo = current_theme_info();

if (debug_fopen('foo', 'bar')) {
    echo 'foo';
}

$pages = [new WP_Post(new StdClass)];
update_page_cache($pages);
debug_fclose('foo');

?>
-----
<?php

remove_theme_support('custom-background');
remove_theme_support('custom-header');
clean_post_cache(1);

$foo = wp_get_theme();

if (__return_false()) {
    echo 'foo';
}

$pages = [new WP_Post(new StdClass)];
update_post_cache($pages);

?>
