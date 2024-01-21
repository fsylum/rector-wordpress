<?php

_load_remote_block_patterns('foo');
readonly( 'foo', true, false );
wp_render_duotone_filter_preset(['foo', 'bar']);
$foo = WP_Theme_JSON_Resolver::get_fields_to_translate();

?>
-----
<?php

_load_remote_block_patterns();
wp_readonly( 'foo', true, false );
wp_get_duotone_filter_property(['foo', 'bar']);
$foo = \__return_empty_array();

?>
