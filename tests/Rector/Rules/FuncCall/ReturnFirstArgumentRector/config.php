<?php

use Fsylum\RectorWordPress\Rules\FuncCall\ReturnFirstArgumentRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ReturnFirstArgumentRector::class, [
        '_wp_multiple_block_styles',
    ]);
};
