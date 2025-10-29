#include <unistd.h>
#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d'un retour à la ligne
 * @str: chaîne à afficher
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
