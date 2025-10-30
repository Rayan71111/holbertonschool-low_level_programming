#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	/* Find the length of the string */
	while (s[i] != '\0')
		i++;

	/* Swap characters from both ends */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
