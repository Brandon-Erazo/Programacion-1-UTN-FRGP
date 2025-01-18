///Ejercicio: 19
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

/*19) Hacer un programa para ingresar 5 números, luego informar los 2 mayores
valores ingresados, aclarando cual es el máximo y cuál es el segundo máximo.
Ejemplo 1: 10, 8,12, 14 ,3 el resultado será 14 y 12.
Ejemplo 2: 14, 8, 12, 14, 3 el resultado será 14 y 14.
Ejemplo 3: -20, - 25, -3, -8, -50, el resultado será -3 y -8.
Ejemplo 4: 100, 20, 5, - 15, 70, el resultado será 100 y 70.
 Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular
 el Ejemplo 4, en el cual el máximo de la lista aparece en el primer lugar y que si no se tiene
 precaución puede llevar a resultados como 100 como máximo y 100 como segundo máximo.
 ¡ESO ES INCORRETO! El resultado debe ser 100 y 70.
 */

int main ()
{
///Declaro mis variables co el formato camelCase
    int i, numero, primerMaximo, segundoMaximo;
    bool bandMaximo=true; ///Le asigno un valor a mi variable booleana

    for(i=0; i <5; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if(bandMaximo==true)
        {
            primerMaximo=numero;
            bandMaximo=false;
        }
        else
        {
            if (numero>primerMaximo)
            {
                segundoMaximo= primerMaximo;
                primerMaximo=numero;
            }
            else
            {
                if( numero>segundoMaximo)
                {
                    segundoMaximo = numero;
                }
            }
        }

    }
    cout<<"----------------------"<<endl;
    cout<<"EL PRIMER MAXIMO ES: "<<primerMaximo<<endl;
    cout<<"EL SEGUNDO MAXIMO ES: "<<segundoMaximo<<endl;



    system ("pause");
    return 0;

}
