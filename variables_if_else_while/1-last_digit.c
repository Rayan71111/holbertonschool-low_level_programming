#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Affiche le dernier chiffre d’un nombre aléatoire
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Dernier chiffre de %d est %d ", n, last_digit);

	if (last_digit > 5)
	{
		printf("et est supérieur à 5\n");
	}
	else if (last_digit == 0)
	{
		printf("et est égal à 0\n");
	}
	else
	{
		printf("et est inférieur à 6 et non égal à 0\n");
	}

	return (0);
}
