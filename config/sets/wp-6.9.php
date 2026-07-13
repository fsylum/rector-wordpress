<?php

use Fsylum\RectorWordPress\Rules\FuncCall\RenameFunctionWithArgumentsRector;
use Fsylum\RectorWordPress\ValueObject\FunctionRenameWithArguments;
use Rector\Config\RectorConfig;
use Rector\Renaming\Rector\FuncCall\RenameFunctionRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../config.php');

    $rectorConfig->ruleWithConfiguration(RenameFunctionRector::class, [
        'seems_utf8'                          => 'wp_is_valid_utf8',
        'wp_print_auto_sizes_contain_css_fix' => 'wp_enqueue_img_auto_sizes_contain_css_fix',
    ]);

    $rectorConfig->ruleWithConfiguration(RenameFunctionWithArgumentsRector::class, [
        new FunctionRenameWithArguments('utf8_encode', 'mb_convert_encoding', ['UTF-8', 'ISO-8859-1']),
        new FunctionRenameWithArguments('utf8_decode', 'mb_convert_encoding', ['ISO-8859-1', 'UTF-8']),
    ]);

    /*
     * TODO: these are not handled currently
     *
     * ARGUMENTS
     * - _wp_can_use_pcre_u (the $set argument is no longer used; private/internal function)
     */
};
