<?php

discover_pingback_server_uri('foo', 'bar');
wp_get_http_headers('foo', 'bar');

get_commentdata(1, 2, true);

?>
-----
<?php

discover_pingback_server_uri('foo');
wp_get_http_headers('foo');

get_comment(1, ARRAY_A);

?>
