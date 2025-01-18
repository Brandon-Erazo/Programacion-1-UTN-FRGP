///Ejercicio: 10
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
/* 10) Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas días y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2
horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y
0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y
20 hora
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int horasIngresadas, dias, horasRestantes;

///Ingrese las horas por pantalla
    cout<<"INGRESE LAS HORAS: ";
    cin>>horasIngresadas,

///Realizo las operaciones aritmeticas necesarias para calcular los dias y las horas restantes
        dias = horasIngresadas / 24;
        horasRestantes = horasIngresadas % 24;

///Informo los dias y horas equivalentes por pantalla
    cout<<"LAS HORAS INGRESADAS EQUIVALEN A : "<<dias<<" DIA(S) Y "<<horasRestantes<< " HORA(S). "<<endl;


    system ("pause");
    return 0;

}
