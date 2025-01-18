///Ejercicio:
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*23) Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
 Favor de no confundir número primo con número impar. Son dos conceptos diferentes.
 El 9 no es primo. El 13 si es primo. Sin embargo ambos son impares.
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número primo o es número no primo */

int main ()
{
///Declaro mis variables con el formato camelCase

    int i, numero, contadorPrimos =0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    for (i=1; i<=numero; i++)
    {

        if((numero%i)==0)
        {
            contadorPrimos++;
        }
    }
    if (contadorPrimos==2)
    {
        cout<<"-------------------"<<endl;
        cout<<"ES UN NUMERO PRIMO"<<endl;
    }
    else
    {
        cout<<"-------------------"<<endl;
        cout<<"NO ES UN NUMERO PRIMO"<<endl;
    }

    system ("pause");
    return 0;

}
