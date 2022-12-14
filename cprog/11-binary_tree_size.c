#include "binary_treesh"

/**
*binary_tree_size - function that measures the size of a binary tree
*@tree: pointer to the root node of the tree to measure the size
*
*Return: size of the node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
  size_t size;
  
  if (tree == NULL)
    return (0);
  
  size += binary_tree_size(tree->left);
  size +=binary_tree_size(tree->right);
  
  return (size);
