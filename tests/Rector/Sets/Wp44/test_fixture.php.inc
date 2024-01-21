<?php

get_site_option('foo', 'bar', 'baz');

get_wp_title_rss('foo');
wp_title_rss('foo');

force_ssl_login();

$foo = post_permalink();

$bar = new WP_Widget_Recent_Comments;

$bar->flush_widget_cache();

?>
-----
<?php

get_site_option('foo', 'bar');

get_wp_title_rss();
wp_title_rss();

force_ssl_admin();

$foo = get_permalink();

$bar = new WP_Widget_Recent_Comments;

?>
