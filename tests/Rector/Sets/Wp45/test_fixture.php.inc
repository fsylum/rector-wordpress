<?php

_wp_post_revision_fields(['foo'], 'bar');
comments_popup_script();
$foo = get_comments_popup_template();
$bar = get_currentuserinfo();

if (is_comments_popup()) {
    echo 'foo';
}

$query = new WP_Query();

if ($query->is_comments_popup()) {
    echo 'bar';
}

$foo = $query->lazyload_comment_meta('foo', 1);
$bar = $query->lazyload_term_meta('bar', 1);

?>
-----
<?php

_wp_post_revision_fields(['foo']);
$foo = __return_empty_string();
$bar = wp_get_current_user();

if (__return_false()) {
    echo 'foo';
}

$query = new WP_Query();

if (\__return_false()) {
    echo 'bar';
}

$foo = 'foo';
$bar = 'bar';

?>
