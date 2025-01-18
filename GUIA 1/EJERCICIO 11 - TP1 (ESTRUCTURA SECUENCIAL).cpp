///Ejercicio: 11
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

/* 11) Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y
mostrar por pantalla a cuantos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1
día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0
día, 8 horas y 0 minutos.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int minutosIngresados, dias, horas, minutosRestantes, resto;

///Ingreso los datos por teclado
    cout<<"INGRESE LA CANTIDAD DE MINUTOS: ";
    cin>>minutosIngresados;

///Realizo las operaciones aritmeticas necesarias para calcular los dias, horas y minutos restantes
    dias = minutosIngresados / 1440;
    resto = minutosIngresados % 1440;
    horas = resto / 60;
    minutosRestantes = resto % 60;

///Muestro los datos por pantalla
    cout<<"LOS MINUTOS INGRESADOS EQUIVALEN A: "<<dias<<" DIA(S), "<<horas<<" HORA(S) Y "<<minutosRestantes<<" MINUTOS."<<endl;

    system ("pause");
    return 0;

}
