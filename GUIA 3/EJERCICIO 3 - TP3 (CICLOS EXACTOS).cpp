///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclos Exactos


///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*3) Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ningún ingreso de datos */

int main ()
{
///Declaro la variable i (Iteracion)
    int i;

///Estructura basica del ciclo for (inicializacion, condicion, decremento)
    for (i=20; i>0; i--)
    {
        cout<<i<<endl;
    }

    system ("pause");
    return 0;

}
