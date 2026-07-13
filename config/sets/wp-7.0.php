<?php

use Fsylum\RectorWordPress\Rules\FuncCall\RenameFunctionWithArgumentsRector;
use Fsylum\RectorWordPress\ValueObject\FunctionRenameWithArguments;
use Rector\Config\RectorConfig;
use Rector\Renaming\Rector\FuncCall\RenameFunctionRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../config.php');

    $rectorConfig->ruleWithConfiguration(RenameFunctionRector::class, [
        'addslashes_gpc'                                    => 'wp_slash',
        'block_core_navigation_submenu_render_submenu_icon' => 'block_core_shared_navigation_render_submenu_icon',
    ]);

    $rectorConfig->ruleWithConfiguration(RenameFunctionWithArgumentsRector::class, [
        new FunctionRenameWithArguments(
            'block_core_navigation_block_contains_core_navigation',
            'block_core_navigation_block_tree_has_block_type',
            ['core/navigation']
        ),
    ]);

    /*
     * TODO: these are not handled currently
     *
     * FUNCTIONS
     * - wp_sanitize_script_attributes: no safe automatic replacement. It returns a string of HTML
     *   attributes, whereas its suggested replacements wp_get_script_tag() / wp_get_inline_script_tag()
     *   return a full <script> tag and take different arguments, so a rename would produce broken output.
     */
};
