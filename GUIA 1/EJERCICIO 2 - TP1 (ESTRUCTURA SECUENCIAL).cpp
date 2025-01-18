///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial


///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout
/*
2) Hacer un programa que solicite por teclado que se ingresen dos números y luego
guardarlos en dos variables distintas. A continuación, se deben intercambiar mutuamente los
valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que las variables usadas son A y
B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
Para resolver este ejercicio se sugiere no utilizar más de tres variables
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroAuxiliar;

///Pido al usuario que ingrese 2 numeros por consola, esos numeros van a  ser asignados a su correspondiente variable
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;

///Realizo el intercambio mutuo entre variables
    numeroAuxiliar=numeroUno;
    numeroUno=numeroDos;
    numeroDos=numeroAuxiliar;

///Muestro por pantalla el intercambio mutuo
    cout<<"LO QUE ALMACENA LA VARIBLE NUMERO UNO ES: "<<numeroUno<<endl;
    cout<<"LO QUE ALMACENA LA VARIBLE NUMERO DOS ES: "<<numeroDos<<endl;






    system ("pause");
    return 0;

}
