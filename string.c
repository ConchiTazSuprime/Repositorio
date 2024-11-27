#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[50], string2[50], message[100];

    printf("Primera cadena: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Segunda cadena: ");
    fgets(string2, sizeof(string2), stdin);

    string1[strcspn(string1, "\n")] = '\0';
    snprintf(message, sizeof(message), "%s %s", string1, string2);

    printf("Mensaje concatenado: %s\n", message);
    return 0;
}
