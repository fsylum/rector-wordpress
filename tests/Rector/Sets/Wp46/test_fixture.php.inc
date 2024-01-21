<?php

install_search_form(false);

$foo = wp_embed_handler_googlevideo('foo', 'bar', 'baz', 1);

?>
-----
<?php

install_search_form();

$foo = __return_empty_string();

?>
