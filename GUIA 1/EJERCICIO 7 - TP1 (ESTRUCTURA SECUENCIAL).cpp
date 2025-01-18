///Ejercicio: 7
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

/*7) Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de
descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a
pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar
será de $ 800.*/

int main ()
{

///Declaro mis variables con el formato camelCase
    float importeDeVenta, descuentoAplicado, importeTotal;

///Ingreso los datos por teclado
    cout<<"INGRESE EL IMPORTE DE VENTA: ";
    cin>>importeDeVenta;
    cout<<"INGRESE EL PORCENTAJE DE DESCUENTO: ";
    cin>>descuentoAplicado;

///Realizado las operaciones aritmeticas necesarias para llegar al importe total
    importeTotal = ((100 - descuentoAplicado) * importeDeVenta) /100;

///Informo el importe total a pagar por pantalla
    cout<<"EL IMPORTE TOTAL A PAGAR ES DE: "<<"$"<<importeTotal<<endl;






    system ("pause");
    return 0;

}
