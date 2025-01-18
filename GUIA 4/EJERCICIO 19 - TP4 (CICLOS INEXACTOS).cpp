///Ejercicio: 19
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*19) Se define a un número como primo cuando tiene solamente dos divisores: el número 1
y el número en sí mismo. Todo número que tenga otros divisores adicionales al 1 y al
número en sí mismo, son números No Primos.
Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Favor de no confundir número primo con número impar. Son dos conceptos
diferentes. El 9 no es primo. El 13 si es primo. Sin embargo, ambos son impares.
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número primo o es número no primo. */

int main ()
{
///Declarar las variables con el formato camelCase
    int numero, i=2;
    int contadorDivisores=0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(i<numero)
    {
        if (numero%i==0)
        {
            contadorDivisores++;
        }
        i++;
    }
    if(contadorDivisores==0)
    {
        cout<<"-------------------"<<endl;
        cout<<"ES PRIMO"<<endl;
    }
    else
    {
        cout<<"-------------------"<<endl;
        cout<<"NO ES PRIMO"<<endl;
    }

    system ("pause");
    return 0;

}
