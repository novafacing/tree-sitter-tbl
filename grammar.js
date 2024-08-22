/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'tbl',

  rules: {
    Table: ($) => seq(
      repeat(choice(seq($._Comment, /\r|\r\n|\n/), seq($.Row, /\r|\r\n|\n/))),
      optional($.Row),
    ),
    Row: ($) => choice(
      seq(repeat($._Separator), $.Field, repeat(seq(repeat($._Separator), $.Field)), repeat($._Separator)),
      repeat1($._Separator),
    ),
    Field: ($) => /[^ \t\r\n\f#]\S*/,
    _Separator: ($) => /[ \t\f]/,
    _Comment: ($) => /#.*/,
  },
});

