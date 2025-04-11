#include "binary_trees.h"
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - Encuentra el tío de un nodo
 * @node: Puntero al nodo para encontrar el tío
 *
 * Return: Puntero al tío, o NULL si no existe
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}

