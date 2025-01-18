///Ejercicio: 19
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estrutura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*19) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente
escala:
$ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
programa calcule e informe el total a pagar por el mismo.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int kilovatios;
    float totalPagar;

///Ingreso la cantidad de kilovatios por teclado
    cout<<"INGRESE LA CANTIDAD DE KILOVATIOS QUE CONSUME LE CLIENTE: ";
    cin>>kilovatios;

///En base a los kilovatios, determinar el total a pagar
    if (kilovatios<=100)
    {
        totalPagar = (float) kilovatios * 10;
    }
    else
    {
        if (kilovatios<=200)
        {
            totalPagar = (float) (100 * 10 ) + ((kilovatios - 100) * 12);
        }
        else
        {
            totalPagar = (float) (100 * 10) + (100 * 12) + ((kilovatios - 200) * 15);
        }
    }
///Informo el total a pagar por pantalla
    cout<<"EL TOTAL A PAGAR ES DE: $"<<totalPagar<<endl;



    system ("pause");
    return 0;

}
