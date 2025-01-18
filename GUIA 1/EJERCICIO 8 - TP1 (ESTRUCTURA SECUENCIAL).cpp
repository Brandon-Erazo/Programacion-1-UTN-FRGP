///Ejercicio: 8
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/* 8) Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el
importe de esa misma venta con el descuento aplicado y luego informar por pantalla el
porcentaje de descuento aplicada a la misma.
Ejemplo 1. Si el importe de la venta sin descuento es $ 1.500 y el importe de la venta con
descuento es $ 1.200 entonces el porcentaje de descuento aplicado fue el 20%.
Importante: Le sugerimos que haga una prueba con este ejemplo, ya que muchos lo resuelven
y concluyen que el descuento es el 80%. Eso NO es el descuento. Si el descuento fuera de
80% entonces una venta de $ 1.500 se cobraría tan solo $ 300.
Ejemplo 2. Si el importe de la venta sin descuento es $ 500 y el importe de la venta con
descuento es $ 500 entonces el porcentaje de descuento aplicado fue el 0%.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    float importeVentaSinDescuento, importeVentaConDescuento, descuentoAplicado;

///Ingreso los datos por teclado
    cout<<"INGRESE EL IMPORTE DE LA VENTA SIN DESCUENTO: ";
    cin>>importeVentaSinDescuento;
    cout<<"INGRESE EL IMPORTE DE LA VENTA CON EL DESCUENTO APLICADO: ";
    cin>>importeVentaConDescuento;

///Realizo las operaciones nmecesarias para llegar al desceunto aplicado
    descuentoAplicado= (100 -(importeVentaConDescuento*100)/importeVentaSinDescuento);

///Informo el descuento aplicado
    cout<<"EL DESCUENTO APLICADO ES DEL: "<<descuentoAplicado<<"%"<<endl;







    system ("pause");
    return 0;

}
