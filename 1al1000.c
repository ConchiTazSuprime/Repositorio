#include <stdio.h>

int main(void)
{
    int suma = 0;


    for (int i = 1; i <= 1000; i++)
    {
        suma += i;
    }


    printf("La sumatoria de los números entre 1 y 1000 es: %d\n", suma);

    return 0;
}
