<?php

use Rector\Config\RectorConfig;
use Rector\Renaming\Rector\FuncCall\RenameFunctionRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../config.php');

    $rectorConfig->ruleWithConfiguration(RenameFunctionRector::class, [
        'seems_utf8'                          => 'wp_is_valid_utf8',
        'wp_print_auto_sizes_contain_css_fix' => 'wp_enqueue_img_auto_sizes_contain_css_fix',
    ]);

    /*
     * TODO: these are not handled currently
     *
     * ARGUMENTS
     * - _wp_can_use_pcre_u (the $set argument is no longer used; private/internal function)
     */
};
