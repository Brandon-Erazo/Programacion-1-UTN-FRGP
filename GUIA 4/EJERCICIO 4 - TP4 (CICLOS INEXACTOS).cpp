///Ejercicio: 4
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

/*4) Hacer un programa para que el usuario ingrese un número positivo y que luego se
muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i = 2, numero;

///Ingreso un numero por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(i<numero)
    {
        cout<<i<<endl;
        cout<<"---------"<<endl;
        i++;
    }

    system ("pause");
    return 0;

}
