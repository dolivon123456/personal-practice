#include "binary_trees.h"

/**
*binary_tree_insert_right - inserts a node as the right child of another node
*@parent: a pointer to the node to insert the right-child in
*@value: the value to store in the new node
*
*Return: The right node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  binary_tree_t *New_node;
  
  if (!parent)
    return (NULL);
  
  New_node = malloc(sizeof(binary_tree_t);
  if (!New_node)
                    return (NULL);
  New_node->parent = parent;
  New_node->left = NULL;
  New_node->n = value;
  
if (parent->right != NULL)
                    {
                      New_node->right = parent->right;
                      parent->right->parent = New_node;
                    }
else
                    {
                      New_node->right = NULL;
                    }

parent->right = New_node;
return (New_node);
                      
