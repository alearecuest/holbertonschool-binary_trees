#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifica si un nodo es una hoja
 * @node: Puntero al nodo a verificar
 *
 * Descripción:
 * Un nodo hoja es aquel que no tiene hijos izquierdo ni derecho.
 * Esta función determina si el nodo proporcionado cumple con esa condición.
 *
 * Return:
 * 1 si el nodo es una hoja
 * 0 en cualquier otro caso (incluyendo si node es NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right);
}
