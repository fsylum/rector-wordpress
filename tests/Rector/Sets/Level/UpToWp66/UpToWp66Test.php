<?php

namespace Fsylum\RectorWordPress\Tests\Rector\Sets\Level\UpToWp66;

use Iterator;
use PHPUnit\Framework\Attributes\DataProvider;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @internal
 */
final class UpToWp66Test extends AbstractRectorTestCase
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
        return __DIR__ . '/../../../../../config/sets/level/up-to-wp-6.6.php';
    }
}
