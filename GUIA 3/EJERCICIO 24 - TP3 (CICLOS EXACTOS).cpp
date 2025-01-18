///Ejercicio: 24
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclo Exacto

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*24) Se define como divisores propios de un número a aquellos que son sus divisores
excluyendo al número en sí mismo.
Ejemplo. Los divisores propios del 4 son: 1 y 2. Ejemplo.
Los divisores propios del 12 son; 1, 2, 3, 4 y 6.
Se define a un número como perfecto cuando la suma de todos sus divisores propios
coincide con el número en sí mismo.
Ejemplo: 6 es número perfecto pues 1+2+3=6
Ejemplo: 28 es número perfecto pues 1+2+4+7+14=28
Ejemplo: 12 no es número perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el
mismo es un número perfecto o es número no perfecto. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, acumulador = 0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    for (i=1; i<numero; i++)
    {
        if ((numero%i)==0)
        {
            acumulador+=i;
        }
    }
    if (acumulador==numero)
    {
        cout<<"---------------"<<endl;
        cout<<"ES UN NUMERO PERFECTO"<<endl;
    }
    else
    {
        cout<<"---------------"<<endl;
        cout<<"NO ES UN NUMERO PERFECTO"<<endl;
    }

    system ("pause");
    return 0;

}
