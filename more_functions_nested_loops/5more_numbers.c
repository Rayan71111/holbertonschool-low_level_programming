#include "main.h"

/**
 * more_numbers - affiche les nombres de 0 à 14 dix fois
 *
 * Return: rien (void)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* répète 10 fois */
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1'); /* chiffre des dizaines */
			_putchar('0' + (j % 10)); /* chiffre des unités */
		}
		_putchar('\n'); /* retour à la ligne après chaque ligne */
	}
}
