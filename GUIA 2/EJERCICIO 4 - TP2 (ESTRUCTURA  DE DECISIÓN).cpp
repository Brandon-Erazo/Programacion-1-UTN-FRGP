///Ejercicio: 4
///Autor: Brandon Erazo
///Fecha:
///Comentario: Guia 2 - Estructura de decisión

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*4) Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la
diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, resultado;

///Ingreso por teclado los dos numeros
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;

///Utilizo la estructura if para determinar cual de los 2 numeros es el mayor, para luego hacer la diferencia absoluta
    if(numeroUno>numeroDos)
    {
        resultado = numeroUno - numeroDos;
        cout<<"LA DIFERENCIA ABSOLUTA ENTRE AMBOS NUMEROS ES: "<<resultado<<endl;
    }
    else
    {
        resultado = numeroDos - numeroUno;
        cout<<"LA DIFERENCIA ABSOLUTA ENTRE AMBOS NUMEROS ES: "<<resultado<<endl;
    }

    system ("pause");
    return 0;

}
