#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VEC 5

int main() {
    int i; /* Para las iteraciones */
    int c = 0; /* Para manejar el bucle y los menús */
    int opcionelegida; /* Para las opciones de menú */
    int opcionb;  /* Para las opciones de menú secundario */
    float kmparcial; /* Para contar los km y agregar más */
    char tipovehiculo[VEC];
    float recorridovehiculo[VEC] = {0, 0, 0, 0, 0};
    float preciovehiculo[VEC] = {0, 0, 0, 0, 0};

    do {
        printf("\t\tSISTEMA LOGISTICA LEON\n\n");
        printf("\t1 - CARGAR DATOS\n");
        printf("\t2 - MOSTRAR PRECIOS VEHICULO\n");
        printf("\t3 - MOSTRAR KILOMETROS VEHICULO\n");
        printf("\t4 - MOSTAR RECORRIDO\n");
        printf("\t5 - SALIR DEL SISTEMA\n\n");

        printf("\nIngrese la opcion que desea realizar: ");
        scanf("%d", &opcionelegida);

        while (opcionelegida < 1 || opcionelegida > 5) {
            printf("Opcion invalida, elija la opcion que desea realizar: ");
            scanf("%d", &opcionelegida);
        }

        if (opcionelegida == 1) {
            system("cls");
            printf("\t\tSISTEMA LOGISTICA LEON\n\n");
            printf("\t1 - INGRESO VEHICULO (TIPO VEHICULO)\n");
            printf("\t2 - CARGAR PRECIOS VEHICULO \n");
            printf("\t3 - CARGAR KILOMETROS VEHICULO\n");
            printf("\t4 - REGRESAR AL MENU ANTERIOR\n");

            printf("\nIngrese la opcion que desea realizar: ");
            scanf("%d", &opcionb);

            while (opcionb < 1 || opcionb > 4) {
                printf("Opcion invalida, elija la opcion que desea realizar: ");
                scanf("%d", &opcionb);
            }

            if (opcionb == 1) {
                system("cls");
                printf("\t\tSISTEMA LOGISTICA LEON\n\n");
                printf("\t - A - (AUTO DE 4 PASAJEROS)\n");
                printf("\t - C - (CAMIONETA DE 2 PASAJEROS) \n");
                printf("\t - M - (AUTO SEDAN)\n");
                printf("\t - T - (CAMION CON ACOPLADO)\n");
                printf("\t - v - (CAMIONETA KANGOO)\n\n");

                for (i = 0; i < VEC; i++) {
                    printf("Ingrese vehiculo para la posicion %d: ", i);
                    scanf(" %c", &tipovehiculo[i]);

                    while (tipovehiculo[i] != 'A' &&
                            tipovehiculo[i] != 'C' &&
                            tipovehiculo[i] != 'M' &&
                            tipovehiculo[i] != 'T' &&
                            tipovehiculo[i] != 'V') {
                        printf("Opcion invalida, elija el tipo de vehiculo: ");
                        scanf(" %c", &tipovehiculo[i]);
                    }

                    while (tipovehiculo[i] == tipovehiculo[i - 1] ||
                            tipovehiculo[i] == tipovehiculo[i - 2] ||
                            tipovehiculo[i] == tipovehiculo[i - 3] ||
                            tipovehiculo[i] == tipovehiculo[i - 4]) {
                        printf("Opcion ya ingresada, ingrese otro vehiculo para la posicion %d: ", i);
                        scanf(" %c", &tipovehiculo[i]);
                    }
                }
                system("cls");
            }

            if (opcionb == 2) {
                for (i = 0; i < VEC; i++) {
                    printf("El vehiculo %d es %c. Ingrese el valor por kilometro:  ", i, tipovehiculo[i]);
                    scanf("%f", &preciovehiculo[i]);
                }
                system("cls");
            }

            if (opcionb == 3) {
                for (i = 0; i < VEC; i++) {
                    printf("Ingrese la cantidad de km recorridos por el vehiculo %c:  ", tipovehiculo[i]);
                    scanf("%f", &kmparcial);
                    recorridovehiculo[i] = recorridovehiculo[i] + kmparcial;
                }
                system("cls");
            }

            if (opcionb == 4) {
                c = 0;
            }
        }

        if (opcionelegida == 2) {
            system("cls");
            printf("\t\tSISTEMA LOGISTICA LEON");
            for (i = 0; i < VEC; i++) {
                printf("\nEl vehiculo %d es %c", i, tipovehiculo[i]);
            }

            for (i = 0; i < VEC; i++) {
                printf("\n\nElija el vehiculo que desea consultar: ");
                scanf("%d", &opcionb);
                printf("El precio del vehiculo %c por km realizado es %.2f", tipovehiculo[opcionb], preciovehiculo[opcionb]);

                printf("\nDesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
                scanf("%d", &opcionelegida);

                while (opcionelegida != 0 && opcionelegida != 1) {
                    printf("\nOpcion incorrecta, desea continuar? ");
                    scanf("%d", &opcionelegida);
                }

                if (opcionelegida == 1) {
                    system("cls");
                    break;
                }
            }
        }

        if (opcionelegida == 3) {
            system("cls");
            printf("\t\tSISTEMA LOGISTICA LEON");
            for (i = 0; i < VEC; i++) {
                printf("\nEl vehiculo %d es %c", i, tipovehiculo[i]);
            }

            for (i = 0; i < VEC; i++) {
                printf("\n\nElija el vehiculo que desea consultar: ");
                scanf("%d", &opcionb);
                printf("La cantidad de kilometros recorridos por el vehiculo %c es %.2f", tipovehiculo[opcionb], recorridovehiculo[opcionb]);

                printf("\nDesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
                scanf("%d", &opcionelegida);

                while (opcionelegida != 0 && opcionelegida != 1) {
                    printf("\nOpcion incorrecta, desea continuar? ");
                    scanf("%d", &opcionelegida);
                }

                if (opcionelegida == 1) {
                    system("cls");
                    break;
                }
            }
        }

        if (opcionelegida == 4) {
            system("cls");
            printf("\t\tSISTEMA LOGISTICA LEON");
            for (i = 0; i < VEC; i++) {
                printf("\nEl vehiculo %d es %c", i, tipovehiculo[i]);
            }

            for (i = 0; i < VEC; i++) {
                printf("\n\nElija el vehiculo que desea consultar: ");
                scanf("%d", &opcionb);
                printf("\nEl valor del vehiculo %c por el trabajo realizado es %.2f", tipovehiculo[opcionb], preciovehiculo[opcionb] * recorridovehiculo[opcionb]);
                printf("\nDesea consultar otro vehiculo?\nSI=0\tNO=1\t: ");
                scanf("%d", &opcionelegida);

                while (opcionelegida != 0 && opcionelegida != 1) {
                    printf("\nOpcion incorrecta, desea continuar? ");
                    scanf("%d", &opcionelegida);
                }

                if (opcionelegida == 1) {
                    system("cls");
                    break;
                }
            }
        }

        if (opcionelegida == 5) {
            system("cls");
            printf("Gracias por utilizar el SISTEMA LOGISTICA LEON");
            return 0;
        }
    } while (c == 0);

    return 0;
}
