<?php

add_action( 'setted_transient', 'foo', 'bar', 10 );
add_action( 'setted_site_transient', 'foo', 'bar', 10 );

?>
-----
<?php

add_action( 'set_transient', 'foo', 'bar', 10 );
add_action( 'set_site_transient', 'foo', 'bar', 10 );

?>
