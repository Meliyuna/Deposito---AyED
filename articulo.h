#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

typedef struct{
    int codArticulo;
    float precio;
    std::string descripcion;
} Articulo;

void setCodArticulo(Articulo &articulo, int codArticulo);

void setPrecio(Articulo &articulo, float precio);

void setDescripcion(Articulo &articulo, std::string descripcion);

int getCodArticulo(Articulo &articulo);

float getPrecio(Articulo &articulo);

std::string getDescripcion(Articulo &articulo);

#endif // ARTICULO_H_INCLUDED
