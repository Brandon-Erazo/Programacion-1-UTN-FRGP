///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 4 - Ciclos Inexactos

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*2) Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3
elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ningún ingreso de datos. */

int main ()
{
///Delcaro la variable i (iteración)
    int i = 1;

    while (i<=20)
    {
        cout<<i<<endl;
        cout<<"---------"<<endl;
        i = i + 3;
    }

    system ("pause");
    return 0;

}
