<?php

block_core_navigation_block_contains_core_navigation(['foo']);

?>
-----
<?php

block_core_navigation_block_tree_has_block_type(['foo'], 'core/navigation');

?>
