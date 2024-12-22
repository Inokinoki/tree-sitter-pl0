package tree_sitter_pl0_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_pl0 "github.com/tree-sitter/tree-sitter-pl0/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pl0.Language())
	if language == nil {
		t.Errorf("Error loading pl0 grammar")
	}
}
