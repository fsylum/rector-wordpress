<?php

wp_rel_nofollow_callback('foo');

?>
-----
<?php

wp_rel_nofollow_callback('foo', 'nofollow', false);

?>
