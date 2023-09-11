#include <stdio.h>
#include <stdlib.h>
#include <string.h>/strlen(string)
#define VEC 5

int main()
{
int i; /*para las iteraciones*/
int c=0; /*para manejar el while y poder navegar entre menus*/
int opcionelegida; /*para los menus y submenus*/
int opcionb;  /*para los menus y submenus*/
float kmparcial; /*para contar los km y poder agregarle mas, en un sistema de este tipo se cargarian varias veces*/
char tipovehiculo[VEC];
float recorridovehiculo[VEC]={0,0,0,0,0};
float preciovehiculo [VEC]={0,0,0,0,0};


do{
    printf("\t\tSISTEMA LOGISTICA LEON\n\n");
    printf("\t1 - CARGAR DATOS\n");
    printf("\t2 - MOSTRAR PRECIOS VEHICULO\n");
    printf("\t3 - MOSTRAR KILOMETROS VEHICULO\n");
    printf("\t4 - MOSTAR RECORRIDO\n");
    printf("\t5 - SALIR DEL SISTEMA\n\n");



    printf("\n\ningrese la opcion que desea realizar: ");
    scanf("%d", &opcionelegida);
     while(opcionelegida<1 || opcionelegida>5){
        printf("opcion invalida, elija la opcion que desea realizar: ");
        scanf("%d", &opcionelegida);}

if(opcionelegida==1){
    system ("cls");
    printf("\t\tSISTEMA LOGISTICA LEON\n\n");
    printf("\t1 - INGRESO VEHICULO (TIPO VEHICULO)\n");
    printf("\t2 - CARGAR PRECIOS VEHICULO \n");
    printf("\t3 - CARGAR KILOMETROS VEHICULO\n");
    printf("\t4 - REGRESAR AL MENU ANTERIOR\n");
        printf("\n\ningrese la opcion que desea realizar: ");
    scanf("%d", &opcionb);
     while(opcionb<1 || opcionb>4){
        printf("opcion invalida, elija la opcion que desea realizar: ");
        scanf("%d", &opcionb);}

        if(opcionb==1){
                system ("cls");
                printf("\t\tSISTEMA LOGISTICA LEON\n\n");
                printf("\t - A - (AUTO DE 4 PASAJEROS)\n");
                printf("\t - C - (CAMIONETA DE 2 PASAJEROS) \n");
                printf("\t - M - (AUTO SEDAN)\n");
                printf("\t - T - (CAMION CON ACOPLADO)\n");
                printf("\t - v - (CAMIONETA KANGOO)\n\n");

                    for(i=0 ; i<VEC ; i++){
                        printf("Ingrese vehiculo para la posicion %d: ", i);
                         scanf("%s", &tipovehiculo[i]);
                         fflush(stdin);
                         while(tipovehiculo[i] != 'A' &&
                               tipovehiculo[i] != 'C' &&
                               tipovehiculo[i] != 'M' &&
                               tipovehiculo[i] != 'T' &&
                               tipovehiculo[i] != 'V'   ){
                            printf("opcion invalida, elija el tipo de vehiculo: ");
                            scanf("%s", &tipovehiculo[i]);}
                            while(tipovehiculo[i]==tipovehiculo[i-1]||
                                  tipovehiculo[i]==tipovehiculo[i-2]||
                                  tipovehiculo[i]==tipovehiculo[i-3]||
                                  tipovehiculo[i]==tipovehiculo[i-4]
                                  ){
                            printf("opcion ya ingresada ingrese otro vehiculo para la posicion %d: ",i);
                            scanf("%s", &tipovehiculo[i]);}
                             }}
                             system("cls");

        if(opcionb==2){
            for(i=0; i<VEC ; i++){
                printf("el vehiculo %d es %c ingrese el valor por kilometro:  ",i, tipovehiculo[i]);
                scanf("%f", &preciovehiculo[i]);}
                system("cls");
           }
        if(opcionb==3){
            for(i=0; i<VEC ; i++){
                printf("ingrese la cantidad de km recorridos por el vehiculo %c:  ", tipovehiculo[i]);
                scanf("%f", &kmparcial);
                recorridovehiculo[i]=recorridovehiculo[i]+kmparcial;} /*para agregar kms, */
                system("cls");

        }

        if(opcionb==4){
            c==0;
        }

        }


   if(opcionelegida==2){
        system("cls");
    printf("\t\tSISTEMA LOGISTICA LEON");
    for(i=0; i<VEC;i++){
        printf("\nel vehiculo %d es %c", i, tipovehiculo[i]);}

    for(i=0; i<VEC; i++){
        printf("\n\nelija el vehiculo que desea consultar: ");
        scanf("%d", &opcionb);
        printf("el precio del vehiculo %c por km realizado es %.2f", tipovehiculo[opcionb], preciovehiculo[opcionb]);

        printf("\ndesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
        scanf("%d", &opcionelegida);
        while(opcionelegida!=0 && opcionelegida!=1){
            printf("\nopcion incorrecta, desea continuar? ");
            scanf("%d", &opcionelegida);}
       if(opcionelegida==1){
            system("cls");
            break;}
        }}

    if(opcionelegida==3){
        system("cls");
    printf("\t\tSISTEMA LOGISTICA LEON");
    for(i=0; i<VEC;i++){
        printf("\nel vehiculo %d es %c", i, tipovehiculo[i]);}

    for(i=0; i<VEC; i++){
        printf("\n\nelija el vehiculo que desea consultar: ");
        scanf("%d", &opcionb);
        printf("la cantidad de kilometros recorridos por el vehiculo %c es %.2f", tipovehiculo[opcionb], recorridovehiculo[opcionb]);

        printf("\ndesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
        scanf("%d", &opcionelegida);
        while(opcionelegida!=0 && opcionelegida!=1){
            printf("\nopcion incorrecta, desea continuar? ");
            scanf("%d", &opcionelegida);}
       if(opcionelegida==1){
            system("cls");
            break;}
        }}

      if(opcionelegida==4){
        system("cls");
    printf("\t\tSISTEMA LOGISTICA LEON");
    for(i=0; i<VEC;i++){
        printf("\nel vehiculo %d es %c", i, tipovehiculo[i]);}

        for(i=0; i<VEC; i++){
        printf("\n\nelija el vehiculo que desea consultar: ");
        scanf("%d", &opcionb);
        printf("\nel valor del vehiculo %c por el trabajo realizado es %.2f", tipovehiculo[opcionb], preciovehiculo[opcionb]*recorridovehiculo[opcionb]);
        printf("\ndesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
        scanf("%d", &opcionelegida);
        while(opcionelegida!=0 && opcionelegida!=1){
            printf("\nopcion incorrecta, desea continuar? ");
            scanf("%d", &opcionelegida);}
       if(opcionelegida==1){
            system("cls");
            break;}
      }

}

if(opcionelegida==5){
    system("cls");
    printf("gracias por utilizar el SISTEMA LOGISTICA LEON");
    return 0;
}
}
while(c==0);



    return 0;