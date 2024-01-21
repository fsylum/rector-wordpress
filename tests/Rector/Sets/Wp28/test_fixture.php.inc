<?php

add_filter('tagsperpage', 'foo');

get_author_name(1);

get_the_author_aim();
get_the_author_description();
get_the_author_email();
get_the_author_firstname();
get_the_author_icq();
get_the_author_ID();
get_the_author_lastname();
get_the_author_login();
get_the_author_msn();
get_the_author_nickname();
get_the_author_url();
get_the_author_yim();
the_author_aim();
the_author_description();
the_author_email();
the_author_firstname();
the_author_icq();
the_author_ID();
the_author_lastname();
the_author_login();
the_author_msn();
the_author_nickname();
the_author_url();
the_author_yim();

__ngettext('foo', 'bar', 1);
$foo = __ngettext_noop('foo', 'bar', 'baz');

attribute_escape('foo');
get_catname(1);
js_escape('foo');

unregister_sidebar_widget('foo');
unregister_widget_control('foo');

?>
-----
<?php

add_filter('edit_tags_per_page', 'foo');

get_the_author_meta('display_name', 1);

get_the_author_meta('aim');
get_the_author_meta('description');
get_the_author_meta('email');
get_the_author_meta('first_name');
get_the_author_meta('icq');
get_the_author_meta('ID');
get_the_author_meta('last_name');
get_the_author_meta('login');
get_the_author_meta('msn');
get_the_author_meta('nickname');
get_the_author_meta('url');
get_the_author_meta('yim');
the_author_meta('aim');
the_author_meta('description');
the_author_meta('email');
the_author_meta('first_name');
the_author_meta('icq');
the_author_meta('ID');
the_author_meta('last_name');
the_author_meta('login');
the_author_meta('msn');
the_author_meta('nickname');
the_author_meta('url');
the_author_meta('yim');

_n('foo', 'bar', 1);
$foo = _n_noop('foo', 'bar', 'baz');

esc_attr('foo');
get_cat_name(1);
esc_js('foo');

wp_unregister_sidebar_widget('foo');
wp_unregister_widget_control('foo');

?>
