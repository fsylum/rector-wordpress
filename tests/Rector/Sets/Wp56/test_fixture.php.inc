<?php

addslashes_strings_only('foo');

?>
-----
<?php

wp_slash('foo');

?>
