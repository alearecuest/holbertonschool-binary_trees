#include "binary_trees.h"

/**
 * binary_tree_size - Calcula el número total de nodos en un árbol
 * @tree: Puntero al nodo raíz del árbol
 *
 * Descripción:
 * Recorre recursivamente el árbol sumando todos los nodos existentes,
 * incluyendo la raíz y todos sus descendientes.
 *
 * Return:
 * Número total de nodos como size_t
 * 0 si el árbol está vacío
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	return (0);
}
