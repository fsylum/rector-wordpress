<?php

use Fsylum\RectorWordPress\Rules\MethodCall\RemoveMethodCallRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(RemoveMethodCallRector::class, [
        'get' => 'WP_Query',
    ]);
};
