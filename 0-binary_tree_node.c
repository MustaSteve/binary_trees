#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node_;

    new_node_ = malloc(sizeof(binary_tree_t));
    if (!new_node_)
        return (NULL);
    new_node_->n = value;
    new_node_->parent = parent;
    new_node_->left = NULL;
    new_node_->right = NULL;
    return (new_node_);
}
