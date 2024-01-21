<?php

$foo = new WP_Customize_Image_Control;

$foo->add_tab();
$foo->prepare_control();
$foo->print_tab_image();
$foo->remove_tab();

echo 'foo';

?>
-----
<?php

$foo = new WP_Customize_Image_Control;

echo 'foo';

?>
