<?php

if (global_terms_enabled()) {
	echo 'test';
}

install_global_terms();

if (global_terms('foo')) {
	echo 'test';
}

foreach (_wp_multiple_block_styles(['foo']) as $bar) {
	echo 'test';
}

$test = sync_category_tag_slugs(['foo'], 'bar');

?>
-----
<?php

if (__return_false()) {
	echo 'test';
}

if ('foo') {
	echo 'test';
}

foreach (['foo'] as $bar) {
	echo 'test';
}

$test = ['foo'];

?>
