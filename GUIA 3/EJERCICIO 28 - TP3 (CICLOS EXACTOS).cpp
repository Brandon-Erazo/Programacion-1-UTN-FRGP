///Ejercicio: 28
///Autor: Brandon Erazo
///Fecha: 26/07/2023
///Comentario: Guia 3 -Ciclo Exacto

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*28) Dada una lista de 7 números todos distintos entre sí determinar e informar con un cartel
 aclaratorio si los números positivos primos que aparezcan en la misma están ordenados de menor
 a mayor. Los números positivos primos pueden no ser consecutivos, pero sí estar ordenados.
 Ejemplo 1: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que los números
 primos están ordenados: 5, 7, 13, 19.
 Ejemplo 2: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya que los números
 primos no están ordenados: 3, 5, 11, 7. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int numero, i, x,  numeroAnterior;
    bool numAnterior = true;
    bool ordenados = true;

    for (i=0; i<7; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        int contadorPrimos=0;

        for (x=2; x<numero; x++)
        {
            if ((numero%x)==0)
            {
                contadorPrimos++;
            }

        }
        if (contadorPrimos==0 && numero!=1 && numero!=0)
        {
            if (numAnterior==true)
            {
                numeroAnterior = numero;
                numAnterior = false;
            }
            else
            {
                if(numeroAnterior<numero)
                {
                    numeroAnterior = numero;
                }
                else
                {
                    ordenados = false;
                }
            }
        }
    }
    if (ordenados == true)
    {
        cout<<"ORDENADOS"<<endl;
    }
    else
    {
        cout<<"DESORDENADOS"<<endl;
    }

    system ("pause");
    return 0;

}
