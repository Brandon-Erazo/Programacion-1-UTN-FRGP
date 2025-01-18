///Ejercicio: 16
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*16) Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100
pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero
el año 2000 si lo es.
Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.
Ejemplo 1. Si se ingresa el año 2020 se indicará como bisiesto.
Ejemplo 2. Si se ingresa el año 2019 se indicará como no bisiesto.
Ejemplo 3. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto.
Ejemplo 4. Si se ingresa el año 1600 o 2000 se indicará como bisiesto. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int anio;

///Ingreso el año por teclado
    cout<<"INGRESE EL ANIO: ";
    cin>>anio;

///Determinar si el año es o no bisiesto segun la condicion logica
    if ((anio%4==0) && (anio%100!=0)||(anio%400==0))
    {
        cout<<"BISIESTO"<<endl;
    }
    else
    {
        cout<<"NO ES BISIESTO"<<endl;
    }



    system ("pause");
    return 0;

}
