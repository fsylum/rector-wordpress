<?php

namespace Fsylum\RectorWordPress\Rules\FuncCall;

use Fsylum\RectorWordPress\ValueObject\FunctionRenameWithArguments;
use PhpParser\BuilderHelpers;
use PhpParser\Node;
use PhpParser\Node\Arg;
use PhpParser\Node\Expr\FuncCall;
use PhpParser\Node\Name;
use Rector\Contract\Rector\ConfigurableRectorInterface;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\ConfiguredCodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;
use Webmozart\Assert\Assert;

final class RenameFunctionWithArgumentsRector extends AbstractRector implements ConfigurableRectorInterface
{
    /**
     * @var array<FunctionRenameWithArguments>
     */
    private array $configuration = [];

    public function getNodeTypes(): array
    {
        return [FuncCall::class];
    }

    /**
     * @param FuncCall $node
     */
    public function refactor(Node $node): ?Node
    {
        foreach ($this->configuration as $config) {
            if (!$this->isName($node->name, $config->getOldFunction())) {
                continue;
            }

            $node->name = new Name($config->getNewFunction());

            foreach ($config->getArguments() as $value) {
                /** @phpstan-ignore argument.type */
                $node->args[] = new Arg(BuilderHelpers::normalizeValue($value));
            }

            return $node;
        }

        return null;
    }

    /**
     * @param array<mixed> $configuration
     */
    public function configure(array $configuration): void
    {
        // @phpstan-ignore argument.type
        Assert::allIsAOf($configuration, FunctionRenameWithArguments::class);

        // @var array<FunctionRenameWithArguments> $configuration
        $this->configuration = $configuration;
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Rename a function call and append additional arguments to it',
            [
                new ConfiguredCodeSample(
                    'utf8_encode($value);',
                    "mb_convert_encoding(\$value, 'UTF-8', 'ISO-8859-1');",
                    [new FunctionRenameWithArguments('utf8_encode', 'mb_convert_encoding', ['UTF-8', 'ISO-8859-1'])]
                ),
            ]
        );
    }
}
