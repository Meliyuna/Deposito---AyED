#ifndef INGRESO_H_INCLUDED
#define INGRESO_H_INCLUDED

typedef struct{
    int codArticulo;
    float cantidad;
    std::string hora;
} INGRESO;


void  setIngreso  (&INGRESO);

list <INGRESO>   getIngresos();

void  AgregarIngreso   (INGRESO &ingreso);

void  EliminarIngreso  (INGRESO &ingreso);

INGRESO ModificarIngreso  (INGRESO &ingreso);


#endif // INGRESO_H_INCLUDED
