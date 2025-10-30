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
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1); /* afficher le caractère courant */
		i += 2;               /* passer un caractère sur deux */
	}
	write(1, "\n", 1);        /* saut de ligne final */
}
