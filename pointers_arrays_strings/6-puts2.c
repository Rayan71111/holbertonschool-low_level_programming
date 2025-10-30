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
	char *ptr = str;

	if (!str)
		return;

	while (*ptr)
	{
		write(1, ptr, 1);  /* affiche le caractère courant */
		ptr += 2;           /* passer un caractère sur deux */
	}
	write(1, "\n", 1);     /* saut de ligne final */
}
