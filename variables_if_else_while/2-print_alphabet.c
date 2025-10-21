#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Affiche l'alphabet en minuscules suivi d'un saut de ligne
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);  // Première utilisation de putchar pour afficher les lettres

	putchar('\n');     // Deuxième utilisation pour le saut de ligne

	return (0);
}
