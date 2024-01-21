<?php

term_description(1, 'foo');

add_action('refresh_blog_details', '__return_false');

$bar = new WP_User;

$bar->for_blog(1);
(new WP_User)->for_blog(2);

?>
-----
<?php

term_description(1);

add_action('clean_site_cache', '__return_false');

$bar = new WP_User;

$bar->for_site(1);
(new WP_User)->for_site(2);

?>
