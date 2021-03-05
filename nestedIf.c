#include <stdio.h>
int opt1 = 1;
int opt2 = 2;



int main(){
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi postres \n");

    // este programa genera menus segun lo que el usuario elija
    if(opt1 == 0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");

        if (opt2 == 0)
            printf("usted eligio una platzi cola cero, mmm rico");
        else if (opt2 == 1)
            printf("usted eligio una platzi cola cpn azucar, mmm rico");
        else if (opt2 == 2)
            printf("usted eligio una platzi pina colada con azucar, mmm rico");
        else 
            printf("opcion invalida");
    }
    else if(opt1 == 1){

        printf("usted eligio la opcion 0, vera nuestro menu de comida elija una:\n");
        printf("opcion 0 para platzi pollo \n");
        printf("opcion 1 para platzi arroz chino \n");
        printf("opcion 2 para platzi caraoatas \n");

        if(opt1 == 0)
            printf("Elejiste un rico pollo");
        else if(opt2 == 1)
            printf("Elejiste un arroz chino");
        else if(opt2 == 2)
            printf("Elejiste unas caraotas");
        else
            printf("Oops ha ocurrido un eror");

        }
    else if(opt1 == 2){
        printf("usted eligio la opcion 0, vera nuestro menu de postres elija una:\n");
        printf("opcion 0 para platzi tequeños \n");
        printf("opcion 1 para platzi helado \n");
        printf("opcion 2 para platzi pastel \n");

        if(opt2 == 0)
            printf("Elejiste unos tequeños");    
        else if(opt2 == 1)
            printf("Elejiste un helado");
            else if(opt2 == 2)
            printf("Elejiste un ");
        else
            printf("Ooops, ha ocurrido un error");    
        
    }
    else {
        printf("Opcion invalida");
    }

    return 0;
}