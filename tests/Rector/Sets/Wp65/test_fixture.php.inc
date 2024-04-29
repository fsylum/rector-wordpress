<?php

$class1 = new Custom_Image_Header;
$class2 = new WP_Site_Icon;

$class1->create_attachment_object('foo', 1);
$class2->create_attachment_object('foo', 1);

?>
-----
<?php

$class1 = new Custom_Image_Header;
$class2 = new WP_Site_Icon;

\wp_copy_parent_attachment_properties('foo', 1, 'custom-header');
\wp_copy_parent_attachment_properties('foo', 1, 'site-icon');

?>
