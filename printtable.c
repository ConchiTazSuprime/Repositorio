#include <stdio.h>

int main(void)
{
    int num;
    int tabla[10];

    // Pedir al usuario el número
    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        tabla[i] = num * (i + 1);
    }

    printf("La tabla de multiplicar del %d es:\n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, tabla[i]);
    }

    return 0;
}
