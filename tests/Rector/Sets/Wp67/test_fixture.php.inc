<?php

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

?>
-----
<?php

wp_get_global_stylesheet();
wp_enqueue_global_styles();

if (current_user_can_for_site(1, 'edit_posts')) {
    echo 'foo';
}

(new WP_Interactivity_API)->print_router_markup();

?>
