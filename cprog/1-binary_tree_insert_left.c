#include "binary_trees"

/**
*binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: The returning the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *New_node;
  
  if (!parent)
    return (NULL);
  
  New_node = malloc(sizeof(binary_tree_t);
  if (!New_node)
                    return (NULL);
  
  New_node->parent = parent;
  New_node->right = NULL;
  New_node->n = value;
 
 if (parent->left != NULL)
                    {
                      New_node->left =parent->left;
                      parent->left->parent = New_node;
                    }
 else
                    {
                      New_node->left = NULL;
                    }
parent->left = New_node;
return (New_node);
