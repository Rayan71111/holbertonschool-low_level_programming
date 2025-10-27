#include "main.h"

/**
 *  _isdigit - vérifie siya la presence d un chiffre de 0 a 9 
 * @c: le caractère à vérifier
 *
 * Return: 1 si c est un chiffre de 0 a 9, 0 sinon
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9') 
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
