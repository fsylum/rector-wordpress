<?php

use Fsylum\RectorWordPress\Rules\Deprecated\Functions\TheEditorRector;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->rule(TheEditorRector::class);
};
