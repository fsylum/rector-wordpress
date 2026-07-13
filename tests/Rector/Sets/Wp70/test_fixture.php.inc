<?php

addslashes_gpc('foo');
block_core_navigation_submenu_render_submenu_icon();
block_core_navigation_block_contains_core_navigation(['foo']);

?>
-----
<?php

wp_slash('foo');
block_core_shared_navigation_render_submenu_icon();
block_core_navigation_block_tree_has_block_type(['foo'], 'core/navigation');

?>
