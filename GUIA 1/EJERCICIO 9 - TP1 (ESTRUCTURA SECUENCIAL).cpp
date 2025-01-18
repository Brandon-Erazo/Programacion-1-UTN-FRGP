///Ejercicio: 9
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

/*9) Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por
pantalla a cuantas horas y minutos equivalen.
Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6
horas y 20 minutos.
Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12
horas y 0 minutos.
Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0
horas y 50 minutos
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int minutosIngresados, horas, minutosRestantes;

///Ingreso los datos por consola
    cout<<"INGRESE LA CANTIDAD DE MINUTOS: ";
    cin>>minutosIngresados;

///Realizo las operaciones aritmeticas necesarias para calcular las horas y minutos restantes
    horas = minutosIngresados / 60;
    minutosRestantes = minutosIngresados % 60;

///Informo la hora y minutos restantes por pantalla
    cout<<"LOS MINUTOS INGRESADOS EQUIVALEN A: "<<horas<<" HORAS Y "<<minutosRestantes<<" MINUTOS"<<endl;




    system ("pause");
    return 0;

}
