<?php

seems_utf8('foo');
wp_print_auto_sizes_contain_css_fix();
utf8_encode('foo');
utf8_decode('foo');

?>
-----
<?php

wp_is_valid_utf8('foo');
wp_enqueue_img_auto_sizes_contain_css_fix();
mb_convert_encoding('foo', 'UTF-8', 'ISO-8859-1');
mb_convert_encoding('foo', 'ISO-8859-1', 'UTF-8');

?>
