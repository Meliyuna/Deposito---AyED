#ifndef SOLICITUD_H_INCLUDED
#define SOLICITUD_H_INCLUDED

/*** Definiciones de Tipos de Datos ***/



/**
    PROCEDIMIENTO DE CARGA DE SOLICITUD DE ARTICULOS
    PRE: Archivo de Solicitud tiene que existir
    POST: Carga en una estructura auxiliar los datos necesarios
    para procesar la solicitud de stock
**/

void cargarSolicitud (FILE* solicitud; Lista &solicitud);

/**
    PROCEDMIENTO DE ACCESO AL ARTICULO
    PRE: Lista de solicitud tiene que existir
    POST: Devuelve el nodo donde esta alojado el articulo a retirar, si no se encuentra el articulo
    se guardan los datos en la lista NoEncontrados
**/

PtrNodoLista accederAlArticulo(PtrNodoLista solicitud; Lista articulos; Lista &NoEncontrados);

/**
    PROCEDIMIENTO DE CARGA EN EL CAMION
    PRE: Articulo encontrado y en su ubicacion
    POST: Carga en el camion/es
**/

PtrNodoLista cargaEnCamion (PtrNodoLista articulo);

/**
    PROCEDIMIENTO DE CALCULO DE PESO DE CAMION
    PRE: Camion debe existir
    POST: Devuelve la capacidad disponible del camion
**/

float pesoCamion (PtrNodoLista camion);

#endif // SOLICITUD_H_INCLUDED
