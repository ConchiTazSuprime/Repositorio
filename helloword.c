#include <stdio.h>
#include<string.h>

int main(void){

char destino[100] = "Hola, ";
char fuente[] = "mundo!";
strcat(destino, fuente);
printf("%s\n", destino);
return 0;
}
//#include <stdio.h>

//int main(void)
//{
 //   printf("Hello World!");
//}
