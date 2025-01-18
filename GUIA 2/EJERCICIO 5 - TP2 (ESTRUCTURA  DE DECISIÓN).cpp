///Ejercicio: 5
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decisión

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*5) Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
pantalla el importe con el descuento ya aplicado*/

int main ()
{
///Declaro mis variables con el formato camelCase
    float importeVenta, importeVentaFinal;

///Ingreso el importe sin descuneto por teclado
    cout<<"INGRESE EL IMPORTE DE VENTA: ";
    cin>>importeVenta;

///En base al importe se le aplicara el descuento correspondiento, para ello utilizamo la estructura de decision if
    if (importeVenta>500)
    {
        importeVentaFinal = importeVenta * 0.85;
    }
    else
    {
        if (importeVenta>=100)
        {
            importeVentaFinal = importeVenta *0.90;
        }
        else
        {
            importeVentaFinal = importeVenta * 0.95;
        }
    }
    cout<<"EL IMPORTE CON EL DESCUBETO APLICADO ES DE: $"<<importeVentaFinal<<endl;

    system ("pause");
    return 0;

}
