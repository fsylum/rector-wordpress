<?php

use Fsylum\RectorWordPress\Rules\Deprecated\Functions\WpKsesJsEntitiesRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->rule(WpKsesJsEntitiesRector::class);
};
