<?php

$foo = _wp_json_prepare_data('bar');
_wp_privacy_requests_screen_options();

wp_rel_nofollow_callback(['foo', 'bar']);

?>
-----
<?php

$foo = 'bar';

wp_rel_callback(['foo', 'bar'], 'nofollow');

?>
