<?php

$foo = 'foo';
$media = true;

the_editor($foo, 'bar', 'baz', false);
the_editor($foo, 'bar', 'baz', $media);

?>
-----
<?php

$foo = 'foo';
$media = true;

wp_editor($foo, 'bar', ['media_buttons' => false]);
wp_editor($foo, 'bar', ['media_buttons' => $media]);

?>
