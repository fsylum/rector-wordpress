<?php

add_action('retreive_password', 'foo');
add_filter('rewrite_rules', 'foo');

?>
-----
<?php

add_action('retrieve_password', 'foo');
add_filter('mod_rewrite_rules', 'foo');

?>
