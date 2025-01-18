///Ejercicio: 18
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

/*18) Hacer un programa para ingresar una lista de 8 números y luego informar si todos
están ordenados en forma creciente. En caso de haber dos números “empatados”
considerarlos como crecientes.
 */
int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, numeroAnterior;
    bool banderaAnterior= true, banderaOrden = true; ///Le asigno un valor a las variables booleanas

    for (i=0; i<8; i++)
    {

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if (banderaAnterior==true)
        {
            numeroAnterior =numero;
            banderaAnterior = false;
        }
        else
        {
            if (numeroAnterior<=numero)
            {
                numeroAnterior = numero;
            }
            else
            {
                banderaOrden=false;
            }
        }
    }
    if ((numeroAnterior<=numero)&& (banderaOrden==true))
    {
        cout<<"-----------------------"<<endl;
        cout<<"EL CONJUNTO ES ORDENADO"<<endl;
    }
    else
    {
        cout<<"-----------------------"<<endl;
        cout<<"EL CONJUNTO ES DESORDENADO | NO ORDENADO"<<endl;
    }

    system ("pause");
    return 0;

}
