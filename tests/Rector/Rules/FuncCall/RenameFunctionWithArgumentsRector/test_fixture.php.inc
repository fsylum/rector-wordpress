<?php

utf8_encode('foo');
utf8_decode('foo');

?>
-----
<?php

mb_convert_encoding('foo', 'UTF-8', 'ISO-8859-1');
mb_convert_encoding('foo', 'ISO-8859-1', 'UTF-8');

?>
