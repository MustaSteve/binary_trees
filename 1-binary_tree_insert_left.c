#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_;

    if (!parent)
        return (NULL);

    new_ = malloc(sizeof(binary_tree_t));
    if (!new_)
        return (NULL);

    new_->n = value;
    new_->parent = parent;
    new_->right = NULL;
    new_->left = parent->left;
    parent->left = new_;
    if (new_->left)
        new_->left->parent = new_;
    return (new_);
}
