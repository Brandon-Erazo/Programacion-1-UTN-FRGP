///Ejercicio: 22
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclo Exacto

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*22) Hacer un programa para ingresar un número y luego informar la cantidad de divisores de
 ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, contadorDivisores = 0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    for (i=1; i<=numero; i++)
    {
        if((numero%i)==0)
        {
            contadorDivisores++;
        }
    }

    cout<<"------------------"<<endl;
    cout<<"SU CANTIDAD DE DIVISORES ES DE: "<<contadorDivisores<<endl;

    system ("pause");
    return 0;

}
