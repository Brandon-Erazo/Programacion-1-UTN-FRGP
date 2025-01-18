///Ejercicio: 1
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario:Guia 1 - Estructura Secuencial

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*
1) Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    float sueldo;
    int horasTrabajadas, pagoPorHoraTrabajada;

///Pido al usuario que ingrese los datos por teclado
    cout<<"INGRESE LAS HORAS TRABAJADAS: ";
    cin>>horasTrabajadas;
    cout<<"INGRESE EL VALOR QUE LE PAGA POR HORA TRABAJADA: ";
    cin>>pagoPorHoraTrabajada;

///Realizo el calculo del sueldo
    sueldo = horasTrabajadas * pagoPorHoraTrabajada;

///Informo el resultado
    cout<<"EL SUELDO QUE LE CORRESPONDE ES DE: $"<<sueldo<<endl;

    system ("pause");
    return 0;

}
