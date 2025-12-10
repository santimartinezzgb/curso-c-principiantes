#include <stdio.h>

// Para trabajar con referencias en funciones
void jugar(int n)
{
    n = (n * 2) - 7;
    printf("Resultado de la función: %d", n);
}

int main()
{
    int x = 10;
    jugar(x);

    return 0;
}