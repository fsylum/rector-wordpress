<?php

use Fsylum\RectorWordPress\Rules\ConstFetch\ConstToFuncCallRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ConstToFuncCallRector::class, [
        'PHP_SAPI' => 'php_sapi_name',
    ]);
};
