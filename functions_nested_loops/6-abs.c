#include <stdio.h>

/**
 * _abs - calcule la valeur absolue d’un entier
 * @n: l’entier dont on veut la valeur absolue
 *
 * Retour: la valeur absolue de n
 */
int _abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}

/* Exemple d’utilisation */
int main(void)
{
    int a = -42;
    int b = 7;

    printf("Valeur absolue de %d = %d\n", a, _abs(a));
    printf("Valeur absolue de %d = %d\n", b, _abs(b));

    return 0;
}
