<?php

namespace Fsylum\RectorWordPress\Tests\Rector\Sets\Level\UpToWp70;

use PHPUnit\Framework\Attributes\DataProvider;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

/**
 * @internal
 */
final class UpToWp70Test extends AbstractRectorTestCase
{
    #[DataProvider('provideCases')]
    public function test(string $filePath): void
    {
        $this->doTestFile($filePath);
    }

    public static function provideCases(): iterable
    {
        return self::yieldFilesFromDirectory(__DIR__);
    }

    public function provideConfigFilePath(): string
    {
        return __DIR__ . '/../../../../../config/sets/level/up-to-wp-7.0.php';
    }
}
