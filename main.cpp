#include <iostream>
#include <stdio.h>
#include "articulo.h"

using namespace std;

int main()
{
    //Ejamplo basico de puntero
    int a=0;
    int *puntero;
    puntero = &a;

    printf("El valor de a es: %d. \n El valor de *puntero es: %d. \n",a,*puntero);
    printf("La direccion de memoria de *puntero es: %p",puntero);

    return 0;
}
