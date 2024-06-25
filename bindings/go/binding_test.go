package tree_sitter_pdxinfo_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/notpeter/tree-sitter-playdate-pdxinfo"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_playdate_pdxinfo.Language())
	if language == nil {
		t.Errorf("Error loading Pdxinfo grammar")
	}
}
