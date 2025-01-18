///Ejercicio: 5
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

/*5) Hacer un programa para que el usuario ingrese dos números y luego el programa
muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25 */

int main ()
{
///Declaro las variables en el formato camelCase
    int numeroUno, numeroDos, mayor, menor;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;

    if (numeroUno>numeroDos)
    {
        mayor = numeroUno;
        menor = numeroDos;
    }
    else
    {
        mayor = numeroDos;
        menor = numeroUno;
    }
    menor++;
    while (menor<mayor)
    {
        cout<<menor<<endl;
        cout<<"-------------"<<endl;
        menor++;
    }

    system ("pause");
    return 0;

}
