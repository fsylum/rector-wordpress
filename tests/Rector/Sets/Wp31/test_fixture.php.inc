<?php

add_filter('tag_rewrite_rules', 'foobar');

update_blog_option(1, 'foo', 'bar', true);
update_blog_status(1, 'foo', 'bar', true);

if (update_category_cache()) {
    echo 'foo';
}

?>
-----
<?php

add_filter('post_tag_rewrite_rules', 'foobar');

update_blog_option(1, 'foo', 'bar');
update_blog_status(1, 'foo', 'bar');

if (__return_true()) {
    echo 'foo';
}

?>
