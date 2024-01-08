#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL || parent == NULL)
        return (NULL);
    

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right = new_node;
        new_node->right->parent = new_node;
    }

    parent->right = new_node;
    new_node->parent = parent;
    new_node->n = value;

    return (new_node);
}