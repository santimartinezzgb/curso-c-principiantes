#include <stdio.h>

int main()
{
    int x = 10;

    int *dirX = &x; // Saca dirección de X, y la guarda en dirX (instancia de int*)

    printf("Valor de x es %d || Su dirección de memoria es %p", x, &x);
    printf("\nDirección guardada: %p", dirX);
}