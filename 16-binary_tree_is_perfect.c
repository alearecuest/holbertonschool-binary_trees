#include "binary_trees.h"
#include "_binary_tree_height.c"

/**
 * binary_tree_is_perfect - Verifica si un árbol binario es perfecto
 * @tree: Puntero al nodo raíz del árbol a verificar
 *
 * Return: 1 si es perfecto, 0 en otro caso
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h != right_h)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
