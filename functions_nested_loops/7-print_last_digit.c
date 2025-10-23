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

	if (n < 0)
		n = -n;              /* rendre n positif si négatif */

	last_digit = n % 10;     /* extraire le dernier chiffre */

	_putchar(last_digit + '0'); /* afficher le chiffre */
	return (last_digit);        /* retourner le chiffre */
}
