///Ejercicio: 3
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

/* 3) Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int numero;

///Ingreso el numero por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

///Determino si el numero es par o impar con la esturuta de decision if.
    if ((numero%2)==0)
    {
        cout<<"EL NUMERO ES PAR"<<endl;
    }
    else
    {
        cout<<"EL NUMERO ES IMPAR"<<endl;
    }



    system ("pause");
    return 0;

}
