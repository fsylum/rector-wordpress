# Rector Rules for WordPress

This package is a [Rector](https://github.com/rectorphp/rector) extension developed to provide upgrade rules for WordPress.

## Requirements

- PHP 8.2 or higher
- Rector 2.0 or higher

## Install

Install the `rector-wordpress` package as dependency:

```bash
composer require fsylum/rector-wordpress --dev
```

## Use Sets

To add a set to your config, use `Fsylum\RectorWordPress\Set\WordPressSetList` class and pick one of the constants. For example, to update the codebase to WordPress 7.0, use `WordPressSetList::WP_7_0`.

```php
use Fsylum\RectorWordPress\Set\WordPressSetList;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->sets([
        WordPressSetList::WP_7_0,
    ]);
};
```

You can also use a level set list to include all the applicable rules from the lowest version, 0.71 up to the one you specified. For example, `WordPressLevelSetList::UP_TO_WP_7_0` will include all the rules from WordPress 0.71 up to 7.0. In most cases, this is the preferable way to transform your code as you only need to specify it once.

```php
use Fsylum\RectorWordPress\Set\WordPressLevelSetList;
use Rector\Config\RectorConfig;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->sets([
        WordPressLevelSetList::UP_TO_WP_7_0,
    ]);
};
```

## Supported WordPress Versions

This package provides upgrade rules for WordPress versions from 0.71 to 7.0, covering:
- WordPress 0.71, 1.0, 1.2, 1.5
- WordPress 2.x (2.0 through 2.9)
- WordPress 3.x (3.0 through 3.9)
- WordPress 4.x (4.0 through 4.9)
- WordPress 5.x (5.0 through 5.9)
- WordPress 6.x (6.0 through 6.9)
- WordPress 7.0
