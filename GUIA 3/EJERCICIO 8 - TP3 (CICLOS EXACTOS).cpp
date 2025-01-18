///Ejercicio: 8
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 3 - Ciclos Exactos


///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*8) Hacer un programa para ingresar una lista de 20 números, luego informar que
porcentaje son positivos, negativos, y ceros. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, contadorPositivos = 0, contadorNegativos = 0, contadorCeros = 0, numero; ///Inicializo mis contadores en 0
    float porcentajePositivos =0, porcentajeNegativos = 0, porcentajeCeros = 0;

    for (i=0; i<20; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if(numero>0)
        {
            contadorPositivos++;
        }
        else
        {
            if (numero<0)
            {
                contadorNegativos++;
            }
            else
            {
                contadorCeros++;
            }
        }
    }

///Calculo los porcentajes de positvos, negativos y ceros
    porcentajePositivos = (float) (contadorPositivos * 100) / 20;
    porcentajeNegativos = (float) (contadorNegativos * 100) / 20;
    porcentajeCeros = (float) (contadorCeros * 100) / 20;

///Informar los porcentajes por pantalla
    cout<<"-----------------------------------"<<endl;
    cout<<"EL PORCENTAJE DE POSITIVOS ES: "<<porcentajePositivos<<"%"<<endl;
    cout<<"EL PORCENTAJE DE NEGATVIOS ES: "<<porcentajeNegativos<<"%"<<endl;
    cout<<"EL PORCENTAJE DE CEROS ES: "<<porcentajeCeros<<"%"<<endl;




    system ("pause");
    return 0;

}
