#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to node to insert the right child in
 * @value: value to store in the new node
 * 
 * Return: Pointer to the created node, NULL on failure or parent is NULL
 * If parent already has a right-child, the new node must take its place,
 * the old right-child must be set as the right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new;

        if (parent == NULL)
                return (NULL);
        
        new = binary_tree_node(parent, value);
        if (new == NULL)
                return (NULL);
        
        if (parent->right != NULL)
        {
                parent->right->parent = new;
                new->right = parent->right;
        }
        parent->right = new;

        return (new);
}
