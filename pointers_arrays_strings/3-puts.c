#include "main.h"

/**
 * _puts - affiche une chaine de charactere,et revien a la ligne
 * @str: chaines de charactere a afficher 
 *
 * return : rien 
 */
void _puts(char *str);
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
