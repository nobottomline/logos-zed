# Logos for Zed

Syntax highlighting for Theos Logos files in Zed, backed by Tree-sitter
Objective-C and C grammars.

Supported file suffixes:

- `.x`
- `.xm`
- `.xi`
- `.xmi`

Version `0.1.0` recognizes:

- C and Objective-C declarations, expressions, methods, messages, imports,
  preprocessor directives, comments, strings, and literals;
- `%config`, `%group`, `%hook`, `%subclass`, `%property`, `%new`, `%hookf`,
  `%ctor`, `%dtor`, `%init`, `%orig`, `%log`, `%c`, and `%end`;
- grouped hooks, runtime subclasses, protocol lists, function hooks, explicit
  `%orig` arguments, and `&%orig`.

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

## Publishing Notes

Before submitting to `zed-industries/extensions`:

1. Create a public GitHub repository for this project.
2. Update `extension.toml`:
   - confirm `authors` is set to `Great Love (nobottomline)`;
   - set the top-level `repository` to the public extension repository;
   - set `[grammars.logos].repository` to the public grammar repository;
   - set `[grammars.logos].rev` to a real commit SHA.
3. Keep `LICENSE` in the repository root. Zed requires a recognized license for extension submissions.

For a single-repository setup, the grammar repository can be this same repository if `grammar.js` and `src/parser.c` stay at the repository root.
