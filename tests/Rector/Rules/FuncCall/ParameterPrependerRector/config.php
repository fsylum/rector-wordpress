<?php

use Fsylum\RectorWordPress\Rules\FuncCall\ParameterPrependerRector;
use Fsylum\RectorWordPress\ValueObject\FunctionParameterPrepender;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->ruleWithConfiguration(ParameterPrependerRector::class, [
        new FunctionParameterPrepender('get_user_by_email', 'email'),
    ]);
};
