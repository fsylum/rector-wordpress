<?php

use Rector\Config\RectorConfig;
use Rector\Renaming\Rector\FuncCall\RenameFunctionRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(RenameFunctionRector::class, [
        'permalink_link' => 'the_permalink',
    ]);

    /*
     * TODO: these are not handled currently
     *
     * FUNCTIONS
     * - permalink_link
     */
};
