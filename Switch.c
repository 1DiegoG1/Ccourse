#include <stdio.h>
int opt1 = 0;
int opt2 = 3;

int main()
{
   
    printf("¡Bienvenido! \n");
    printf("Selecciona uno \n");
    printf("0 para elejir una computadora \n");
    printf("1 para elejir un telefono \n");
    printf("2 para elejir un tesla :o \n");
    switch (opt2)
    {
    case 0:
        printf("Has elejido una computadora \n");
        break;
    case 1:
        printf("Has elejido un telefono \n");
    case 3:
        printf("Has elejido un tesla :O");
    default:
        break;
    }



}