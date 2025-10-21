#include <stdio.h>

/**
 * main - affiche l'alphabet en minuscules sauf q et e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
