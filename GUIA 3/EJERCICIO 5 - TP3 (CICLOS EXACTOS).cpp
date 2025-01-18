///Ejercicio: 5
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
    int numeroUno, numeroDos, i, mayor, menor;

///Ingreso los datos por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;

///Con la estructura IF busco el numero mayor y menor para usarlos dentro del ciclo for
    if(numeroUno>numeroDos)
    {
        mayor = numeroUno;
        menor = numeroDos;
    }
    else
    {
        mayor =numeroDos;
        menor = numeroUno;
    }

    for(i=menor+1; i<mayor; i++)
    {
        cout<<i<<endl;
    }

    system ("pause");
    return 0;

}
