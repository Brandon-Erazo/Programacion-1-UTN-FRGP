///Ejercicio: 21
///Autor: Brandon Erazo
///Fecha: 26/07/2023
///Comentario: Guia 3 - Ciclo Exacto

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
    int i, numero;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;
    cout<<"-------------------"<<endl;
    cout<<"SUS DIVISORES PARES SON: "<<endl;

    for(i=1; i<=numero; i++)
    {

        if ((numero%i)==0)
        {
            if ((i%2)==0)
            {
                cout<<i<<endl;
            }
        }
    }

    system ("pause");
    return 0;

}
