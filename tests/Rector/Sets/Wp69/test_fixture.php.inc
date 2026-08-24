<?php

seems_utf8('foo');
wp_print_auto_sizes_contain_css_fix();

?>
-----
<?php

wp_is_valid_utf8('foo');
wp_enqueue_img_auto_sizes_contain_css_fix();

?>
