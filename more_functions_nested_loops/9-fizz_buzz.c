#include <stdio.h>

/**
 * main - imprime les nombres de 1 à 100
 * Description : remplace les multiples de 3 par Fizz,
 * les multiples de 5 par Buzz,
 * et les multiples de 3 et 5 par FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
