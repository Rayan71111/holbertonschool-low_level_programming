#include "main.h"
#include <stdio.h>

/**
 * puts2 - affiche un caractère sur deux d'une chaîne
 * @str: la chaîne de caractères à afficher
 *
 * Retour: rien
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]); /* remplacer putchar par printf */
		i += 2;
	}
	printf("\n");
}
