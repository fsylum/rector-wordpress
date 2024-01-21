<?php

favorite_actions();

$foo = wp_clone(new StdClass);
wp_dashboard_quick_press_output();
wp_timezone_supported();

?>
-----
<?php

$foo = clone(new StdClass);
wp_dashboard_quick_press();
__return_true();

?>
