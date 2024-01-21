<?php

create_user('foo', 'bar', 'baz');

?>
-----
<?php

wp_create_user('foo', 'bar', 'baz');

?>
