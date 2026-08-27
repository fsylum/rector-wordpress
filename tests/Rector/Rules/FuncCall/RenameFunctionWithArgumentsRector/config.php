<?php

use Fsylum\RectorWordPress\Rules\FuncCall\RenameFunctionWithArgumentsRector;
use Fsylum\RectorWordPress\ValueObject\FunctionRenameWithArguments;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(RenameFunctionWithArgumentsRector::class, [
        new FunctionRenameWithArguments(
            'block_core_navigation_block_contains_core_navigation',
            'block_core_navigation_block_tree_has_block_type',
            ['core/navigation']
        ),
    ]);
};
