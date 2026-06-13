# Logos for Zed

Language support for Theos Logos files in Zed, backed by Tree-sitter
Objective-C and C grammars.

Supported file suffixes:

- `.x`
- `.xm`
- `.xi`
- `.xmi`

## Features

- **Syntax highlighting** for C and Objective-C declarations, expressions,
  methods, messages, imports, preprocessor directives, comments, strings, and
  literals.
- **All Logos directives** as documented in the
  [Theos Logos syntax reference](https://theos.dev/docs/logos-syntax):
  - top level: `%config`, `%hookf`, `%ctor`, `%dtor`;
  - block level: `%group`, `%hook`, `%subclass`, `%property`, `%new`, `%end`;
  - function level: `%init`, `%orig` (and `&%orig`), `%c`, `%log`.
- **Structured constructs**: grouped hooks, runtime subclasses, protocol lists,
  function hooks, explicit `%orig` arguments, and `%property` declarations whose
  attributes, type, and name are highlighted like a native `@property`.
- **Outline & symbol navigation** (`outline.scm`): jump between `%group`,
  `%hook`, `%subclass`, `%hookf`, `%ctor`, `%dtor`, `%property`, Objective-C
  methods/interfaces, and C functions via the outline panel and
  `editor: toggle outline` / symbol search.
- **Editing ergonomics**: bracket and quote auto-closing, bracket matching,
  line comments (`//`) and block comments (`/* */`), and indentation rules.

The parser is based on `tree-sitter-objc`, which itself extends
`tree-sitter-c`. See `THIRD_PARTY_NOTICES.md` for license notices.

## File Types

- `.x`: Logos followed by preprocessing, compiled as Objective-C.
- `.xm`: Logos followed by preprocessing, compiled as Objective-C++.
- `.xi`: preprocessing followed by Logos, compiled as Objective-C.
- `.xmi`: preprocessing followed by Logos, compiled as Objective-C++.

The `.xm` and `.xmi` suffixes are detected, but the current grammar uses an
Objective-C/C base. Logos and Objective-C highlighting are covered; complete
C++ syntax highlighting is not yet claimed.

## Local Testing

1. Open Zed.
2. Run `zed: install dev extension`.
3. Select this directory.
4. Open files under `examples/`.
5. Confirm the language selector shows `Logos` for `.x`, `.xm`, `.xi`, and
   `.xmi` files.
6. Check that Objective-C syntax and Logos directives are both highlighted.

If Zed cannot load the grammar, open `zed: open log` and search for `logos`.

For grammar development:

```sh
npm install
npm run generate
npm test
npm run parse
```

## Publishing

This extension lives at
[`nobottomline/logos-zed`](https://github.com/nobottomline/logos-zed) and is a
single-repository setup: the Zed extension and the Tree-sitter grammar share
this repository, with `grammar.js` and `src/parser.c` at the root.

It is submitted to the Zed registry via
[zed-industries/extensions#6428](https://github.com/zed-industries/extensions/pull/6428).
When updating the published version:

1. Bump `version` in `extension.toml`, `tree-sitter.json`, and `package.json`.
2. Set `[grammars.logos].rev` to the commit that contains the matching
   `grammar.js` / `src/parser.c`.
3. Update the submodule pointer and `extensions.toml` entry in the
   `zed-industries/extensions` fork.

`LICENSE` must stay in the repository root; Zed requires a recognized license
for extension submissions.
