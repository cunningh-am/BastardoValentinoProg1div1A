#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dataNotebooks.h"



int ids[5]={
     1,
     2,
     3,
     4,
     5
     };
char procesador[5][20]={
     "Doble nucleo",
     "Cuadruple nucleo",
     "Doble nucleo",
     "No tiene",
     "Quintuple nucleo"
      };
char marcas[5][20]={
     "Intel",
     "Intel",
     "AMD",
     "Nvidia",
     "AMD"
      };
float precios[5]={100,200,150,175,65};



int hardcodearNotebooks(eNotebook* list, int tam, int cant)
{
    int contador=-1;
    if(list!=NULL && tam>0 && cant >= 0 && cant <= tam)
    {
        contador=0;
        for(int i=0;i<cant;i++)
        {
            list[i].id=ids[i];
            strcpy(list[i].procesador,procesador[i]);
            strcpy(list[i].marca,marcas[i]);
            list[i].precio=precios[i];
            contador++;
       }
    }
    return contador;
}
