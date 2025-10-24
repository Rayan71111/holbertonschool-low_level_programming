#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d'un nombre
 * @n: l'entier dont on veut le dernier chiffre
 *
 * Return: le dernier chiffre de n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;          /* extraire le dernier chiffre */
	if (last_digit < 0)
		last_digit = -last_digit;  /* rendre positif si négatif */

	_putchar(last_digit + '0');   /* afficher le chiffre */
	return (last_digit);          /* retourner le chiffre */
}
