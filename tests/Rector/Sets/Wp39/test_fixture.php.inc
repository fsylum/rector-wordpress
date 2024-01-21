<?php

_relocate_children(1, 2);

$foo = default_topic_count_text(1);
$bar = format_to_post('bar');
$baz = get_current_site_name(WP_Network::get_instance(1));

?>
-----
<?php

$foo = 1;
$bar = 'bar';
$baz = WP_Network::get_instance(1);

?>
