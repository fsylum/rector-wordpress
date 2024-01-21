<?php

$class = new WP_Query();
$class->get('foo');
$foo = $class->fill_query_vars(['bar']);

?>
-----
<?php

$class = new WP_Query();
$foo = $class->fill_query_vars(['bar']);

?>
