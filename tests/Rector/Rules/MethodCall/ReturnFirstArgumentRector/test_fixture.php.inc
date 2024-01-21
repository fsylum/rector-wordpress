<?php

$class = new WP_Query();
$foo = $class->get('foo');

?>
-----
<?php

$class = new WP_Query();
$foo = 'foo';

?>
