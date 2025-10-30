#include "main.h"
#include <unistd.h>

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: la chaîne de caractères à afficher
 *
 * Retour: rien
 */
void puts2(char *str)
{
	int i;

	if (!str)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
		write(1, &str[i], 1);  /* affiche un caractère sur deux */

	write(1, "\n", 1);          /* saut de ligne final */
}
