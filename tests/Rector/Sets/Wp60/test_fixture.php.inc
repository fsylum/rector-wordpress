<?php

$test = image_attachment_fields_to_save(['foo'], ['bar']);

wp_add_iframed_editor_assets_html();

?>
-----
<?php

$test = ['foo'];

?>
