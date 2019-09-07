#include <stdio.h>
#include <stdlib.h>
#include "op.h"

int main()
{
    float numero1;
    float numero2;
    char continuar='c';
    float suma;
    float resta;
    float division;
    float multiplicacion;
    double factorialA;
    double factorialB;
    char opcion;

    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||||||||             CALCULADORA               ||||||||\n");
    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");

    fflush(stdin);
    printf("Presione c para continuar:  ");
    scanf("%c", &continuar);

    if(continuar!='c' & continuar!='C')
    {
        printf("\n\n|||||||||    ERROR    ||||||||||\a");
    }

    while(continuar == 'c' || continuar =='C')
    {
        printf("\nIngresar primer numero: ");
        scanf("%f",&numero1);
        printf("\nIngresar segundo numero: ");
        scanf("%f",&numero2);
        printf("\nSi desea hacer una suma presione:(a)\n");
        printf("Si desea hacer una resta presione:(b)\n");
        printf("Si desea hacer una multiplicacion presione:(c)\n");
        printf("Si desea hacer una division presione:(d)\n");
        printf("Si desea hacer un factorial presione:(e)\n");
        printf("Si desea salir presione:(s)\n\n");



        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
        case 'a':
            suma=sumar(numero1,numero2);
            printf("La suma de %.2f + %.2f da un resultado de: %.2f\n", numero1,numero2,suma);
            break;

        case 'b':
            resta=restar(numero1,numero2);
            printf("La resta de %.2f - %.2f da un resultado de: %.2f\n", numero1,numero2,resta);
            break;

        case 'c':
            multiplicacion=multiplicar(numero1,numero2);
            printf("La multiplicacion de %f * %f da un resultado de: %.2f\n", numero1,numero2,multiplicacion);
            break;

        case 'd':
            division=dividir(numero1,numero2);
            printf("La division de %.2f / %.2f da como resultado de: %.2f\n", numero1,numero2,division);
            if(numero2==0)
            {
                printf("ERROR\n");
            }

            break;

        case 'e':
            if (numero1 >=0)
            {
                factorialA = factorial(numero1);
                printf("el factorial de: %f es: %.2f \n",numero1,factorialA);
            }

            else
            {
                printf("no se puede sacar factorial de: %f porque es un numero negativo\n",numero1);
            }

            if (numero2 >=0)
            {
                factorialB = factorial(numero2);
                printf("el factorial de: %f es: %.2f \n",numero2,factorialB);
            }
            else
            {
                printf("no se puede sacar factorial de: %f porque es un numero negativo\n",numero2);
            }
            break;
        case 's':
            printf(" ADIOS!\n\a\a");
            break;
        default:
            printf("Opcion incorrecta!\n");

        }
        return 0;
        system("pause");
        system("cls");

    }while(opcion != 's');

    return 0;
}
