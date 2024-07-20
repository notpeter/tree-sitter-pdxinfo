package tree_sitter_pdxinfo_test

import (
	"testing"

	tree_sitter_pdxinfo "github.com/notpeter/tree-sitter-pdxinfo"
	tree_sitter "github.com/smacker/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pdxinfo.Language())
	if language == nil {
		t.Errorf("Error loading Pdxinfo grammar")
	}
}
