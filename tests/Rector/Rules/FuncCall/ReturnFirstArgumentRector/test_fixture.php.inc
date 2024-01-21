<?php

$foo = ['foo'];
$bar = ['bar'];

_wp_multiple_block_styles($foo);
var_dump('test');
$test = _wp_multiple_block_styles($bar);

foreach (_wp_multiple_block_styles($bar) as $test) {
    echo 'test';
}

?>
-----
<?php

$foo = ['foo'];
$bar = ['bar'];

$foo;
var_dump('test');
$test = $bar;

foreach ($bar as $test) {
    echo 'test';
}

?>
