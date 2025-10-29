#include "main.h"

/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
