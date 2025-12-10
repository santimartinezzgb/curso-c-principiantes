#include <stdio.h>

int main()
{
    int numero1, numero2, numero3, suma;

    printf("INGRESA EL PRIMER NÚMERO: ");
    scanf("%d", &numero1);

    printf("INGRESA EL SEGUNDO NÚMERO: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2 + numero3;

    printf("\nResultado: %d + %d = %d\n", numero1, numero2, numero3, suma);
}