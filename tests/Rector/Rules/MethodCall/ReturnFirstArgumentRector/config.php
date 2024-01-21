<?php

use Fsylum\RectorWordPress\Rules\MethodCall\ReturnFirstArgumentRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ReturnFirstArgumentRector::class, [
        'get' => 'WP_Query',
    ]);
};
