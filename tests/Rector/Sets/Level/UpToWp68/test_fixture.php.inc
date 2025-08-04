<?php

// 0.71
convert_chars('foo', 'bar');

// 1.2
permalink_link();

// 1.5
add_action('retreive_password', 'foo');
add_filter('rewrite_rules', 'foo');

// 2.0
create_user('foo', 'bar', 'baz');

// 2.1
get_the_author('foo');
$foo = get_autotoggle(1);
wp_get_post_cats(1, 2);
wp_set_post_cats(1, 2, ['foo', 'bar']);
links_popup_script();
get_link(1);
get_settings('foo');

// 2.3
permalink_single_rss('foo');

// 2.5
trackback_rdf('foo');
wp_login('foo', 'bar', 'baz');
xfn_check('foo', 'bar', 'baz');
documentation_link();
comments_rss_link('foo');
gzip_compression();

// 2.7
discover_pingback_server_uri('foo', 'bar');
wp_get_http_headers('foo', 'bar');
get_commentdata(1, 2, true);

// 2.8
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

// 3.0
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

// 3.1
add_filter('tag_rewrite_rules', 'foobar');
update_blog_option(1, 'foo', 'bar', true);
update_blog_status(1, 'foo', 'bar', true);
$foo = update_category_cache();

// 3.2
foo();
favorite_actions();
$foo = wp_clone(new StdClass);
wp_dashboard_quick_press_output();
wp_timezone_supported();

// 3.3
start_post_rel_link('foo', 'bar', 'baz');
type_url_form_audio();
type_url_form_file();
type_url_form_image();
type_url_form_video();
wp_preload_dialogs();
wp_print_editor_js();
wp_quicktags();
media_upload_audio();
media_upload_file();
media_upload_image();
media_upload_video();
$foo = new WP_Scripts;
$foo->print_scripts_l10n('foo');
$foo = get_user_by_email('bar');
$foo = get_userdatabylogin('bar');
$foo = is_blog_user(1);
$foo = 'foo';
$media = true;
the_editor($foo, 'bar', 'baz', false);
the_editor($foo, 'bar', 'baz', $media);

// 3.4
remove_custom_background();
remove_custom_image_header();
clean_page_cache(1);
$foo = current_theme_info();
$foo = debug_fopen('foo', 'bar');
$pages = [new WP_Post(new StdClass)];
update_page_cache($pages);
debug_fclose('foo');

// 3.5
add_settings_field('foo', 'bar', 'baz', 'privacy');
add_settings_section('foo', 'bar', 'baz', 'privacy');
register_setting('privacy', 'foo');
unregister_setting('privacy', 'foo');
get_default_page_to_edit();
get_post_to_edit(1);
get_udims(32, 32);
$wpdb = new wpdb;
$wpdb->supports_collation();
switch_to_blog(1, 'foo');
wp_create_thumbnail('foo', 1, 'bar');
$post = new WP_Post;
_get_post_ancestors($post);
_insert_into_post_button('foo');
_media_button('foo', 'bar', 'baz', 'qux');
_save_post_hook();
ms_deprecated_blogs_file();
wp_get_single_post(1);
get_page(1);
$foo = new Custom_Background;
$bar = $foo->attachment_fields_to_edit(['bar']);
$baz = $foo->filter_upload_tabs(['baz']);

// 3.6
wp_convert_bytes_to_hr(1);
wp_nav_menu_locations_meta_box();
$wpdb = new wpdb;
$wpdb->_weak_escape('foo');
$wpdb->escape('bar');

// 3.7
foo();
the_attachment_links();

// 3.8
wp_notify_postauthor(1, 'foo');
wp_dashboard_incoming_links();
wp_dashboard_incoming_links_control();
wp_dashboard_incoming_links_output();
wp_dashboard_plugins();
wp_dashboard_primary_control();
wp_dashboard_recent_comments_control();
wp_dashboard_secondary();
wp_dashboard_secondary_control();
wp_dashboard_secondary_output();

// 3.9
foo();
_relocate_children(1, 2);
$foo = default_topic_count_text(1);
$bar = format_to_post('bar');
$baz = get_current_site_name(WP_Network::get_instance(1));

// 4.0
delete_plugins(['foo'], 'bar');
$bar = get_all_category_ids();
define('FORCE_SSL_LOGIN', true);
$foo = FORCE_SSL_LOGIN;

// 4.1
$foo = new WP_Customize_Image_Control;
$foo->add_tab();
$foo->prepare_control();
$foo->print_tab_image();
$foo->remove_tab();
echo 'foo';

// 4.2
iframe_header('foo', 'bar');
$foo = new WP_Customize_Widgets;
$foo->prepreview_added_sidebars_widgets();
$foo->prepreview_added_widget_instance();
$foo->remove_prepreview_filters();
$foo->setup_widget_addition_previews();
echo 'bar';

// 4.3
$foo = _preview_theme_stylesheet_filter();
$bar = _preview_theme_template_filter();
$baz = preview_theme_ob_filter_callback(['foo']);
$foo = wp_htmledit_pre('bar');
add_filter('htmledit_pre', '__return_empty_string');
preview_theme();
$foo = preview_theme_ob_filter('bar');

// 4.4
get_site_option('foo', 'bar', 'baz');
get_wp_title_rss('foo');
wp_title_rss('foo');
force_ssl_login();
$foo = post_permalink();
$bar = new WP_Widget_Recent_Comments;
$bar->flush_widget_cache();
foo();

// 4.5
_wp_post_revision_fields(['foo'], 'bar');
comments_popup_script();
$foo = get_comments_popup_template();
$bar = get_currentuserinfo();
$foo = is_comments_popup();
$query = new WP_Query();
$foo = $query->is_comments_popup();
$foo = $query->lazyload_comment_meta('foo', 1);
$bar = $query->lazyload_term_meta('bar', 1);

// 4.6
install_search_form(false);
$foo = wp_embed_handler_googlevideo('foo', 'bar', 'baz', 1);

// 4.7
unregister_setting('foo', 'bar', 'baz');
get_paged_template();
$foo = 'bar';
$bar = wp_kses_js_entities($foo);
(new WP_Roles)->reinit();
$baz = new WP_Roles;
$baz->reinit();
add_filter('blog_details', '__return_empty_array');
$class = new WP_Customize_Manager;
$class->customize_preview_base();
$class->customize_preview_html5();
$class->customize_preview_override_404_status();
$class->customize_preview_signature();
$foo = $class->remove_preview_signature('bar');

// 4.8
get_category_parents(1, true, '-', 'foo', 'bar');

// 4.9
term_description(1, 'foo');
add_action('refresh_blog_details', '__return_false');
$bar = new WP_User;
$bar->for_blog(1);
(new WP_User)->for_blog(2);

// 5.1
foo();
upgrade_500();

// 5.2
add_filter('login_headertitle', '__return_empty_string');

// 5.3
$foo = _wp_json_prepare_data('bar');
_wp_privacy_requests_screen_options();
wp_rel_nofollow_callback(['foo', 'bar']);

// 5.4
wp_get_user_request_data(1);

// 5.5
$foo = _wp_register_meta_args_whitelist(['foo'], ['bar']);
$foo = add_option_whitelist(['foo'], 'bar');
$foo = remove_option_whitelist(['foo'], 'bar');
$foo = wp_blacklist_check('foo', 'bar', 'baz', 'foo', 'bar', 'baz');
wp_make_content_images_responsive('foo');
$type = 'check';
$action = "wp_blacklist_{$type}";
add_action($action, 'cb');
add_filter('whitelist_options', '__return_empty_array');

// 5.6
addslashes_strings_only('foo');

// 5.8
$foo = ['foo'];
$bar = ['bar'];
_excerpt_render_inner_columns_blocks(['foo'], ['bar']);
_excerpt_render_inner_columns_blocks($foo, $bar);

// 5.9
_load_remote_block_patterns('foo');
readonly( 'foo', true, false );
wp_render_duotone_filter_preset(['foo', 'bar']);
$foo = WP_Theme_JSON_Resolver::get_fields_to_translate();

// 6.0
$test = image_attachment_fields_to_save(['foo'], ['bar']);
wp_add_iframed_editor_assets_html();

// 6.1
$foo = global_terms_enabled();
install_global_terms();
$foo = global_terms('foo');
$foo = _wp_multiple_block_styles(['foo']);
$test = sync_category_tag_slugs(['foo'], 'bar');

// 6.2
WP_Theme_JSON_Resolver::theme_has_support();

// 6.3
$class = new WP_Metadata_Lazyloader;
$class->lazyload_comment_meta('foo');
$class->lazyload_term_meta('foo');
block_core_navigation_submenu_build_css_colors(['foo'], ['bar'], false);
wlwmanifest_link();
wp_img_tag_add_loading_attr('foo', 'bar');

// 6.4
print_embed_styles();
print_emoji_styles();
wp_admin_bar_header();
_admin_bar_bump_cb();
wp_img_tag_add_decoding_attr('foo', 'bar');
$foo = TEMPLATEPATH;
$bar = STYLESHEETPATH;

// 6.5
$class1 = new Custom_Image_Header;
$class2 = new WP_Site_Icon;

$class1->create_attachment_object('foo', 1);
$class2->create_attachment_object('foo', 1);

// 6.6
$foo = wp_interactivity_process_directives_of_interactive_blocks($bar);
$foo = wp_render_elements_support($bar);

// 6.7
wp_get_global_styles_custom_css();
wp_enqueue_global_styles_custom_css();

if (current_user_can_for_blog(1, 'edit_posts')) {
    echo 'foo';
}

wp_init_targeted_link_rel_filters();
wp_remove_targeted_link_rel_filters();

(new WP_Interactivity_API)->print_client_interactivity_data();
(new WP_Interactivity_API)->register_script_modules();

(new WP_Interactivity_API)->print_router_loading_and_screen_reader_markup();

// 6.8
add_action( 'setted_transient', 'foo', 'bar', 10 );
add_action( 'setted_site_transient', 'foo', 'bar', 10 );

?>
-----
<?php

// 0.71
convert_chars('foo');

// 1.2
the_permalink();

// 1.5
add_action('retrieve_password', 'foo');
add_filter('mod_rewrite_rules', 'foo');

// 2.0
wp_create_user('foo', 'bar', 'baz');

// 2.1
get_the_author();
$foo = 0;
wp_get_post_categories(2);
wp_set_post_categories(2, ['foo', 'bar']);
get_bookmark(1);
get_option('foo');

// 2.3
the_permalink_rss();

// 2.5
trackback_rdf();
wp_login('foo', 'bar');
xfn_check('foo', 'bar');
post_comments_feed_link('foo');
__return_false();

// 2.7
discover_pingback_server_uri('foo');
wp_get_http_headers('foo');
get_comment(1, ARRAY_A);

// 2.8
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

// 3.0
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

// 3.1
add_filter('post_tag_rewrite_rules', 'foobar');
update_blog_option(1, 'foo', 'bar');
update_blog_status(1, 'foo', 'bar');
$foo = __return_true();

// 3.2
foo();
$foo = clone(new StdClass);
wp_dashboard_quick_press();
__return_true();

// 3.3
get_boundary_post_rel_link('foo', 'bar', 'baz', true);
wp_media_insert_url_form('audio');
wp_media_insert_url_form('file');
wp_media_insert_url_form('image');
wp_media_insert_url_form('video');
wp_media_upload_handler();
wp_media_upload_handler();
wp_media_upload_handler();
wp_media_upload_handler();
$foo = new WP_Scripts;
$foo->print_extra_script('foo');
$foo = get_user_by('email', 'bar');
$foo = get_user_by('login', 'bar');
$foo = is_user_member_of_blog(get_current_user_id(), 1);
$foo = 'foo';
$media = true;
wp_editor($foo, 'bar', ['media_buttons' => false]);
wp_editor($foo, 'bar', ['media_buttons' => $media]);

// 3.4
remove_theme_support('custom-background');
remove_theme_support('custom-header');
clean_post_cache(1);
$foo = wp_get_theme();
$foo = __return_false();
$pages = [new WP_Post(new StdClass)];
update_post_cache($pages);

// 3.5
add_settings_field('foo', 'bar', 'baz', 'reading');
add_settings_section('foo', 'bar', 'baz', 'reading');
register_setting('reading', 'foo');
unregister_setting('reading', 'foo');
get_default_post_to_edit('page');
get_post(1, OBJECT, 'edit');
wp_constrain_dimensions(32, 32, 128, 96);
$wpdb = new wpdb;
$wpdb->has_cap('collation');
switch_to_blog(1);
wp_create_thumbnail('foo', 1);
$post = new WP_Post;
get_post(1);
get_post(1);
$foo = new Custom_Background;
$bar = ['bar'];
$baz = ['baz'];

// 3.6
size_format(1);
$wpdb = new wpdb;
\esc_sql('foo');
\esc_sql('bar');

// 3.7
foo();

// 3.8
wp_notify_postauthor(1);

// 3.9
foo();
$foo = 1;
$bar = 'bar';
$baz = WP_Network::get_instance(1);

// 4.0
delete_plugins(['foo']);
$bar = get_terms(['taxonomy' => 'category', 'fields' => 'ids', 'get' => 'all']);
define('FORCE_SSL_ADMIN', true);
$foo = FORCE_SSL_ADMIN;

// 4.1
$foo = new WP_Customize_Image_Control;
echo 'foo';

// 4.2
iframe_header('foo');
$foo = new WP_Customize_Widgets;
echo 'bar';

// 4.3
$foo = __return_empty_string();
$bar = __return_empty_string();
$baz = __return_empty_string();
$foo = format_for_editor('bar');
add_filter('format_for_editor', '__return_empty_string');
$foo = 'bar';

// 4.4
get_site_option('foo', 'bar');
get_wp_title_rss();
wp_title_rss();
force_ssl_admin();
$foo = get_permalink();
$bar = new WP_Widget_Recent_Comments;
foo();

// 4.5
_wp_post_revision_fields(['foo']);
$foo = __return_empty_string();
$bar = wp_get_current_user();
$foo = __return_false();
$query = new WP_Query();
$foo = \__return_false();
$foo = 'foo';
$bar = 'bar';

// 4.6
install_search_form();
$foo = __return_empty_string();

// 4.7
unregister_setting('foo', 'bar');
get_query_template('paged');
$foo = 'bar';
$bar = preg_replace('%&\s*\{[^}]*(\}\s*;?|$)%', '', $foo);
(new WP_Roles)->for_site();
$baz = new WP_Roles;
$baz->for_site();
add_filter('site_details', '__return_empty_array');
$class = new WP_Customize_Manager;
$foo = 'bar';

// 4.8
get_category_parents(1, true, '-', 'foo');

// 4.9
term_description(1);
add_action('clean_site_cache', '__return_false');
$bar = new WP_User;
$bar->for_site(1);
(new WP_User)->for_site(2);

// 5.1
foo();

// 5.2
add_filter('login_headertext', '__return_empty_string');

// 5.3
$foo = 'bar';
wp_rel_callback(['foo', 'bar'], 'nofollow');

// 5.4
wp_get_user_request(1);

// 5.5
$foo = _wp_register_meta_args_allowed_list(['foo'], ['bar']);
$foo = add_allowed_options(['foo'], 'bar');
$foo = remove_allowed_options(['foo'], 'bar');
$foo = wp_check_comment_disallowed_list('foo', 'bar', 'baz', 'foo', 'bar', 'baz');
wp_filter_content_tags('foo');
$type = 'check';
$action = "wp_blacklist_{$type}";
add_action('wp_check_comment_disallowed_list', 'cb');
add_filter('allowed_options', '__return_empty_array');

// 5.6
wp_slash('foo');

// 5.8
$foo = ['foo'];
$bar = ['bar'];
_excerpt_render_inner_blocks(['foo'], ['bar']);
_excerpt_render_inner_blocks($foo, $bar);

// 5.9
_load_remote_block_patterns();
wp_readonly( 'foo', true, false );
wp_get_duotone_filter_property(['foo', 'bar']);
$foo = \__return_empty_array();

// 6.0
$test = ['foo'];

// 6.1
$foo = __return_false();
$foo = 'foo';
$foo = ['foo'];
$test = ['foo'];

// 6.2
\wp_theme_has_theme_json();

// 6.3
$class = new WP_Metadata_Lazyloader;
$class->lazyload_meta_callback('foo', 0, '', false, 'comment');
$class->lazyload_meta_callback('foo', 0, '', false, 'term');
block_core_navigation_link_build_css_colors(['foo'], ['bar'], false);
wp_img_tag_add_loading_optimization_attrs('foo', 'bar');

// 6.4
wp_enqueue_embed_styles();
wp_enqueue_emoji_styles();
wp_enqueue_admin_bar_header_styles();
wp_enqueue_admin_bar_bump_styles();
wp_img_tag_add_loading_optimization_attrs('foo', 'bar');
$foo = \get_template_directory();
$bar = \get_stylesheet_directory();

// 6.5
$class1 = new Custom_Image_Header;
$class2 = new WP_Site_Icon;

\wp_copy_parent_attachment_properties('foo', 1, 'custom-header');
\wp_copy_parent_attachment_properties('foo', 1, 'site-icon');

// 6.6
$foo = $bar;
$foo = $bar;

// 6.7
wp_get_global_stylesheet();
wp_enqueue_global_styles();

if (current_user_can_for_site(1, 'edit_posts')) {
    echo 'foo';
}

(new WP_Interactivity_API)->print_router_markup();

// 6.8
add_action( 'set_transient', 'foo', 'bar', 10 );
add_action( 'set_site_transient', 'foo', 'bar', 10 );

?>
