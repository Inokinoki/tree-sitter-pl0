/**
 * @file PL0 grammar for tree-sitter
 * @author Inoki <veyx.shaw@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "pl0",

  rules: {
    // program = block "." .
    program: $ => seq($.block, "."),

    /*
    block = [ "const" ident "=" number {"," ident "=" number} ";"]
      [ "var" ident {"," ident} ";"]
      { "procedure" ident ";" block ";" } statement .
    */
   block: $ => seq(
     optional(seq("const", $.ident, "=", $.number, repeat(seq(",", $.ident, "=", $.number)), ";")),
     optional(seq("var", $.ident, repeat(seq(",", $.ident)))),
     repeat(seq("procedure", $.ident, ";", $.block, ";")),
     $.statement
   ),

    /*
    statement = [ ident ":=" expression | "call" ident 
      | "?" ident | "!" expression 
      | "begin" statement {";" statement } "end" 
      | "if" condition "then" statement 
      | "while" condition "do" statement ].
    */
    statement: $ => choice(
      seq($.ident, ":=", $.expression),
      seq("call", $.ident),
      seq("?", $.ident),
      seq("!", $.expression),
      seq("begin", repeat(seq($.statement, ";")), "end"),
      seq("if", $.condition, "then", $.statement),
      seq("while", $.condition, "do", $.statement)
    ),

    /*
    condition = "odd" expression |
      expression ("="|"#"|"<"|"<="|">"|">=") expression .
    */
    condition: $ => choice(
      seq("odd", $.expression),
      seq($.expression, choice("=", "#", "<", "<=", ">", ">="), $.expression)
    ),

    // expression = [ "+"|"-"] term { ("+"|"-") term}.
    expression: $ => seq(
      optional(choice("+", "-")),
      $.term,
      repeat(seq(choice("+", "-"), $.term))
    ),

    // term = factor {("*"|"/") factor}.
    term: $ => seq(
      $.factor,
      repeat(seq(choice("*", "/"), $.factor))
    ),

    // factor = ident | number | "(" expression ")".
    factor: $ => choice(
      $.ident,
      $.number,
      seq("(", $.expression, ")")
    ),

    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: $ => /\d+/,
  }
});
