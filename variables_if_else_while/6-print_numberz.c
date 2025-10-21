#include <stdio.h>

/**
 * main - affiche tous les nombres à un chiffre en base 10 à partir de 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
