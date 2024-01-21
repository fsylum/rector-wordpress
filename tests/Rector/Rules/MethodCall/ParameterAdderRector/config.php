<?php

use Fsylum\RectorWordPress\Rules\MethodCall\ParameterAdderRector;
use Fsylum\RectorWordPress\ValueObject\MethodParameterAdder;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ParameterAdderRector::class, [
        new MethodParameterAdder('WP_Query', 'get', 1, 'bar'),
        new MethodParameterAdder('WP_Query', 'get', 2, 10),
        new MethodParameterAdder('SimplePie', 'merge_items', 1, 5),
    ]);
};
