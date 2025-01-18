///Ejercicio: 11
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

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, maximo, minimo;
    bool banderaMaximoyMinimo = true; ///bM = 1;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if (banderaMaximoyMinimo==true)  /// if (i==0)
        {
            maximo = numero;
            minimo = numero;
            banderaMaximoyMinimo = false; ///Fundamental hacer el cambio de estado de la bandera de true a false

        }
        else
        {
            if (numero>maximo)
            {
                maximo = numero;
            }
            else
            {
                if (numero<minimo)
                {
                    minimo = numero;
                }
            }
        }
    }
///Informo el maximo y minimo de los numeros
    cout<<"----------------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<endl;
    cout<<"EL MINIMO ES: "<<minimo<<endl;

    system ("pause");
    return 0;

}
