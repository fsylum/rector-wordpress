<?php

trackback_rdf('foo');
wp_login('foo', 'bar', 'baz');
xfn_check('foo', 'bar', 'baz');

documentation_link();

comments_rss_link('foo');
gzip_compression();

?>
-----
<?php

trackback_rdf();
wp_login('foo', 'bar');
xfn_check('foo', 'bar');

post_comments_feed_link('foo');
__return_false();

?>
