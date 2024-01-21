<?php

namespace Fsylum\RectorWordPress\Tests\Rector\Rules\ConstFetch\ConstToFuncCallRector;

use Iterator;
use PHPUnit\Framework\Attributes\DataProvider;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @internal
 */
final class ConstToFuncCallRectorTest extends AbstractRectorTestCase
{
    #[DataProvider('provideData')]
    public function test(string $filePath): void
    {
        $this->doTestFile($filePath);
    }

    public static function provideData(): Iterator
    {
        return self::yieldFilesFromDirectory(__DIR__);
    }

    public function provideConfigFilePath(): string
    {
        return __DIR__ . '/config.php';
    }
}
