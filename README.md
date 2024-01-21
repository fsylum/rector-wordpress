# Rector Rules for WordPress

This package is a [Rector](https://github.com/rectorphp/rector) extension developed to provide upgrades rules for WordPress.

## Install

Install the `rector-wordpress` package as dependency:

```bash
composer require fsylum/rector-wordpress --dev
```

## Use Sets

To add a set to your config, use `Fsylum\RectorWordPress\Set\WordPressSetList` class and pick one of the constants:

```php
use Fsylum\RectorWordPress\Set\WordPressSetList;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->sets([
        WordPressSetList::WP_6_4
    ]);
};
```
