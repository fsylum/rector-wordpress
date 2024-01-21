<?php

get_the_author('foo');
$foo = get_autotoggle(1);

wp_get_post_cats(1, 2);
wp_set_post_cats(1, 2, ['foo', 'bar']);

links_popup_script();

get_link(1);
get_settings('foo');

?>
-----
<?php

get_the_author();
$foo = 0;

wp_get_post_categories(2);
wp_set_post_categories(2, ['foo', 'bar']);

get_bookmark(1);
get_option('foo');

?>
