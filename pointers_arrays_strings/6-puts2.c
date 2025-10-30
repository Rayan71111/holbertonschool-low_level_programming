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
		printf("%c", str[i]); /* afficher le caractère */
		i += 2;               /* passer un caractère sur deux */
	}
	printf("\n");             /* affichage du saut de ligne final */
}
