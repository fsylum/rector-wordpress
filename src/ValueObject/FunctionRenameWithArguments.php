<?php

namespace Fsylum\RectorWordPress\ValueObject;

final readonly class FunctionRenameWithArguments
{
    /**
     * @param array<mixed> $arguments
     */
    public function __construct(
        private string $oldFunction,
        private string $newFunction,
        private array $arguments
    ) {}

    public function getOldFunction(): string
    {
        return $this->oldFunction;
    }

    public function getNewFunction(): string
    {
        return $this->newFunction;
    }

    /**
     * @return array<mixed>
     */
    public function getArguments(): array
    {
        return $this->arguments;
    }
}
