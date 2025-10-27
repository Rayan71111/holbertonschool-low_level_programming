#include "main.h"

/**
 * print_line - dessine une ligne droite
 * @n: nombre de fois que le caractère '_' doit être affiché
 *
 * Return: rien (void)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n'); /* juste un retour à la ligne si n <= 0 */
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n'); /* saut de ligne à la fin */
}
