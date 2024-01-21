<?php

namespace Fsylum\RectorWordPress\Tests\Rector\Sets\Wp40;

use Iterator;
use PHPUnit\Framework\Attributes\DataProvider;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @internal
 */
final class Wp40Test extends AbstractRectorTestCase
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
        return __DIR__ . '/../../../../config/sets/wp-4.0.php';
    }
}
