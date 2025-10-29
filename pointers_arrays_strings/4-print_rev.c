#include <unistd.h>
#include "main.h"

/**
 * print_rev - affiche une chaîne de caractères à l'envers
 * @s: chaîne à afficher
 */
void print_rev(char *s)
{
	int i = 0;

	if (!s)
		return;

	while (s[i] != '\0')
		i++;

	i--; /* passer au dernier caractère réel */

	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
