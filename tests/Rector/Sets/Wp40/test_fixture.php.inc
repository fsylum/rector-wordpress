<?php

delete_plugins(['foo'], 'bar');

$bar = get_all_category_ids();

define('FORCE_SSL_LOGIN', true);

if (FORCE_SSL_LOGIN) {
    echo 'foo';
}

?>
-----
<?php

delete_plugins(['foo']);

$bar = get_terms(['taxonomy' => 'category', 'fields' => 'ids', 'get' => 'all']);

define('FORCE_SSL_ADMIN', true);

if (FORCE_SSL_ADMIN) {
    echo 'foo';
}

?>
