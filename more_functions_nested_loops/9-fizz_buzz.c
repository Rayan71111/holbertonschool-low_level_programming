#include <stdio.h>

/**
 * fizz_buzz - affiche les nombres de 1 à 100 en remplaçant :
 * - multiples de 3  -> "Fizz"
 * - multiples de 5  -> "Buzz"
 * - multiples de 3 et 5 -> "FizzBuzz"
 * Chaque élément est séparé par un espace, et on termine par un '\n'.
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

        /* ajouter un espace après chaque élément sauf après le dernier */
        if (i != 100)
            putchar(' ');
    }

    putchar('\n');
    return 0;
}
