
#ifndef DATANOTEBOOKS_H_INCLUDED
#define DATANOTEBOOKS_H_INCLUDED

typedef struct
    {
     int id;
     char procesador[51];
     char marca[51];
     float precio;
    }eNotebook;
int hardcodearNotebooks(eNotebook* list, int tam, int cant);

#endif // DATANOTEBOOKS_H_INCLUDED
