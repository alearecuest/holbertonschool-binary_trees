#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo en el árbol
 * @node: Puntero al nodo objetivo
 *
 * Descripción:
 * El hermano es el otro nodo hijo del mismo padre.
 * Esta función retorna NULL si:
 * - El nodo es NULL
 * - El nodo no tiene padre
 * - No existe un hermano
 *
 * Return:
 * * Puntero al nodo hermano
 * NULL en caso de no existir
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
