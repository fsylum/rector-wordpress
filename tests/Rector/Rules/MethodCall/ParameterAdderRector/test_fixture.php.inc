<?php

$class = new WP_Query();
$class->get('foo');
$foo = $class->fill_query_vars(['bar']);

$bar = SimplePie::merge_items(['foo', 'bar']);
SimplePie::sort_items(new SimplePie(), new SimplePie());

?>
-----
<?php

$class = new WP_Query();
$class->get('foo', 'bar', 10);
$foo = $class->fill_query_vars(['bar']);

$bar = SimplePie::merge_items(['foo', 'bar'], 5);
SimplePie::sort_items(new SimplePie(), new SimplePie());

?>
