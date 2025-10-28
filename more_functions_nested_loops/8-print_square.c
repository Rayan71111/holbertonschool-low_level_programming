#include "main.h"

/**
 * print_square - affiche un carré de taille donnée
 * @size: taille du carré
 *
 * Description : utilise uniquement _putchar pour afficher.
 * Si size <= 0, affiche juste un retour à la ligne.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
