#include "main.h"
#include <unistd.h>

/**
 * puts_half - affiche la seconde moitié d'une chaîne
 * @str: la chaîne de caractères à afficher
 *
 * Retour: rien
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	if (!str)
		return;

	/* calcul de la longueur de la chaîne */
	while (str[len] != '\0')
		len++;

	/* calcul du point de départ selon la parité de la longueur */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	/* afficher la deuxième moitié */
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}

	/* saut de ligne final */
	write(1, "\n", 1);
}
