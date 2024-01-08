#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    while (tree != NULL)
    {
        free (tree->left);
        tree = tree->left;
    }
    while (tree != NULL)
    {
        free (tree->right);
        tree = tree->right;
    }
}