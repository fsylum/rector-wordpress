<?php

$foo = 'bar';
wp_kses_js_entities($foo);

?>
-----
<?php

$foo = 'bar';
preg_replace('%&\s*\{[^}]*(\}\s*;?|$)%', '', $foo);

?>
