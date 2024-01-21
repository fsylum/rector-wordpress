<?php

iframe_header('foo', 'bar');

$foo = new WP_Customize_Widgets;

$foo->prepreview_added_sidebars_widgets();
$foo->prepreview_added_widget_instance();
$foo->remove_prepreview_filters();
$foo->setup_widget_addition_previews();

echo 'bar';

?>
-----
<?php

iframe_header('foo');

$foo = new WP_Customize_Widgets;

echo 'bar';

?>
