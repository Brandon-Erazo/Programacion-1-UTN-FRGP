///Ejercicio: 9
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

/*9) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo 1: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo 2: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
Ejemplo 3: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, maximo;
    bool banderaMaximo = true; ///bM = 1;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        if (banderaMaximo==true)  /// if (i==0)
        {
            maximo = numero;
            banderaMaximo = false; ///Fundamental hacer el cambio de estado de la bandera de true a false
        }
        else
        {
            if (numero>maximo)
            {
                maximo = numero;
            }
        }
    }

///Informo el maximo de los numeros por pantalla
    cout<<"----------------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<endl;



    system ("pause");
    return 0;

}
