#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d'un retour à la ligne
 * @str: chaîne de caractères à afficher
 *
 * Return: rien
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
