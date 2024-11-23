package tree_sitter_gpg_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gpg "github.com/tree-sitter/tree-sitter-gpg-config/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gpg.Language())
	if language == nil {
		t.Errorf("Error loading GPG config grammar")
	}
}
