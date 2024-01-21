<?php

$foo = ['foo'];
$bar = ['bar'];

_excerpt_render_inner_columns_blocks(['foo'], ['bar']);
_excerpt_render_inner_columns_blocks($foo, $bar);

?>
-----
<?php

$foo = ['foo'];
$bar = ['bar'];

_excerpt_render_inner_blocks(['foo'], ['bar']);
_excerpt_render_inner_blocks($foo, $bar);

?>
