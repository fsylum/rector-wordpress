<?php

wp_convert_bytes_to_hr(1);
wp_nav_menu_locations_meta_box();

$wpdb = new wpdb;

$wpdb->_weak_escape('foo');
$wpdb->escape('bar');

?>
-----
<?php

size_format(1);

$wpdb = new wpdb;

\esc_sql('foo');
\esc_sql('bar');

?>
