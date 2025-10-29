#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d'un retour à la ligne
 */
void print_rev(char *s);
{
	int i = 0;

	/* On trouve d'abord la longueur de la chaîne */
	while (s[i] != '\0')
		i++;

	/* On affiche les caractères en partant de la fin */
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
