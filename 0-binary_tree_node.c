#include "binary_trees.h"

/**
* binary_tree_node - Create node
* @parent: Points to the parent node
* @value: The node value
* Return: New node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    
    return (new_node);
}
