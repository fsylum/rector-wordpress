<?php

add_settings_field('foo', 'bar', 'baz', 'misc');
add_settings_section('foo', 'bar', 'baz', 'misc');
register_setting('misc', 'foo');
unregister_setting('misc', 'foo');

get_blog_list(1, 2, 'foo');
get_user_option('foo', 1, 'bar');
newblog_notify_siteadmin(1, 'foo');
redirect_this_site('foo');
update_posts_count('foo');
update_user_status(1, 'foo', 2, 'bar');

clear_global_post_cache(1);
codepress_footer_js();
codepress_get_lang('foo');
deactivate_sitewide_plugin();
use_codepress();
wpmu_menu();

get_user_details('foo');

$foo = activate_sitewide_plugin();
add_option_update_handler('foo', 'bar');
generate_random_password();
get_alloptions();
get_usernumposts(1);
is_main_blog();
is_taxonomy('foo');
is_term('foo');
is_wpmu_sitewide_plugin('foo');
remove_option_update_handler('foo', 'bar');
set_current_user(1);
validate_email('foo', false);
wp_shrink_dimensions(32, 32);

$foo = mu_options('bar');

?>
-----
<?php

add_settings_field('foo', 'bar', 'baz', 'general');
add_settings_section('foo', 'bar', 'baz', 'general');
register_setting('general', 'foo');
unregister_setting('general', 'foo');

get_blog_list(1, 2);
get_user_option('foo', 1);
newblog_notify_siteadmin(1);
redirect_this_site();
update_posts_count();
update_user_status(1, 'foo', 2);

get_user_by('login', 'foo');

$foo = __return_false();
register_setting('foo', 'bar');
wp_generate_password();
wp_load_alloptions();
count_user_posts(1);
is_main_site();
taxonomy_exists('foo');
term_exists('foo');
is_network_only_plugin('foo');
unregister_setting('foo', 'bar');
wp_set_current_user(1);
is_email('foo');
wp_constrain_dimensions(32, 32);

$foo = 'bar';

?>
