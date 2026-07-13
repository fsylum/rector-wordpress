<?php

use Fsylum\RectorWordPress\Rules\FuncCall\RenameFunctionWithArgumentsRector;
use Fsylum\RectorWordPress\ValueObject\FunctionRenameWithArguments;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(RenameFunctionWithArgumentsRector::class, [
        new FunctionRenameWithArguments('utf8_encode', 'mb_convert_encoding', ['UTF-8', 'ISO-8859-1']),
        new FunctionRenameWithArguments('utf8_decode', 'mb_convert_encoding', ['ISO-8859-1', 'UTF-8']),
    ]);
};
