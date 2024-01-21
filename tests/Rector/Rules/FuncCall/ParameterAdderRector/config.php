<?php

use Fsylum\RectorWordPress\Rules\FuncCall\ParameterAdderRector;
use Fsylum\RectorWordPress\ValueObject\FunctionParameterAdder;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ParameterAdderRector::class, [
        new FunctionParameterAdder('wp_rel_nofollow_callback', 1, 'nofollow'),
        new FunctionParameterAdder('wp_rel_nofollow_callback', 2, false),
    ]);
};
