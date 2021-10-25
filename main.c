#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dataNotebooks.h"

float aplicarDescuento(float precioSinDescuento);
int contarCaracteres(char string[], char caracter);
int sortNotebooks(eNotebook* list, int tam);


int main()
{
    float precio;
    precio=aplicarDescuento(200);
    printf("\nDescuento aplicado a $200: %.2f",precio);

    int cantidadLetras;
    cantidadLetras=contarCaracteres("alcachofas",'a');
    printf("\nCantidad de 'a' en 'alcachofas': %d",cantidadLetras);

    eNotebook lista[5];
    hardcodearNotebooks(lista,5,5);
    sortNotebooks(lista,5);


    return 0;

}
float aplicarDescuento(float precioSinDescuento)
{
    float descuento;
    float resultado;

    if(precioSinDescuento>0)
    {
        descuento=precioSinDescuento*0.05;
        resultado=precioSinDescuento-descuento;
        return resultado;
    }
    return 0;

}
int contarCaracteres(char string[], char caracter)
{
    int contador=0;
    int largo;
    if(string!=NULL&&caracter!=' ')
    {
        largo=strlen(string);



        for(int i=0; i<largo; i++)
        {
            if(string[i]==caracter)
            {
                contador++;
            }
        }
        return contador;

    }
    return -1;
}
int sortNotebooks(eNotebook* list, int tam)
{
    int ret=0;
    if(list!=NULL&&tam>0)
    {
        eNotebook aux;

        int i, j;
        for(i=0; i<tam-1; i++)
        {
            for(j=i+1; j<tam; j++)
            {
                if((strcmp(list[i].marca,list[j].marca)==1)||(strcmp(list[i].marca,list[j].marca)==0&&
                        list[i].precio>list[j].precio))
                {
                    aux=list[i];
                    list[i]=list[j];
                    list[j]=aux;
                }
            }
        }
        ret=1;
    }
    return ret;
}
