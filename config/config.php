<?php

declare(strict_types=1);

use Fsylum\RectorWordPress\Rules\FuncCall\ParameterAdderRector;
use Fsylum\RectorWordPress\Rules\FuncCall\ParameterPrependerRector;
use Fsylum\RectorWordPress\ValueObject\FunctionParameterAdder;
use Fsylum\RectorWordPress\ValueObject\FunctionParameterPrepender;
use Rector\Config\RectorConfig;
use Rector\Removing\Rector\FuncCall\RemoveFuncCallArgRector;
use Rector\Removing\ValueObject\RemoveFuncCallArg;

return static function (RectorConfig $rectorConfig): void {
    /*
     * A bit hackish solution to make sure these specific Rector rules are inserted into the
     * sets from the get-go.
     *
     * Without this, certain rules cannot be applied correctly since Rector is processing files rule by rule.
     * For example in WordPressSetList::WP_1_2 we use `RenameFunctionRector` and in WordPressSetList::WP_3_4 we use
     * both `ParameterAdderRector` and `RenameFunctionRector` together.
     *
     * Since `RenameFunctionRector` is parsed earlier, it will rename the all the configured functions and
     * `ParameterAdderRector` will receive nodes with functions already renamed, so it can never be run successfully.
     */
    $rectorConfig->ruleWithConfiguration(RemoveFuncCallArgRector::class, [
        new RemoveFuncCallArg('_imaginary_function_that_should_not_exists', 0),
    ]);

    $rectorConfig->ruleWithConfiguration(ParameterAdderRector::class, [
        new FunctionParameterAdder('_imaginary_function_that_should_not_exists', 0, 'foo'),
    ]);

    $rectorConfig->ruleWithConfiguration(ParameterPrependerRector::class, [
        new FunctionParameterPrepender('_imaginary_function_that_should_not_exists', 'foo'),
    ]);
};
