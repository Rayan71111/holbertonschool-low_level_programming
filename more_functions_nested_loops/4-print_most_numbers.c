#include "main.h"

/**
 * print_most_numbers - affiche les chiffres de 0 à 9
 *                        sauf 2 et 4
 *
 * Return: rien (void)
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
