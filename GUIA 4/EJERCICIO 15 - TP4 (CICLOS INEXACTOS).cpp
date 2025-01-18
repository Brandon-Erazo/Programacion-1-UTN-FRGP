///Ejercicio: 15
///Autor: Brandon Erazo
///Fecha:
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*15) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar si todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes. Por ejemplo, si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
 */

int main ()
{
///Declaro mis variable con el formato camelCase
    int numero, numeroAnterior;
    bool anterior = true, orden = true;///Aignar un valor a la variable booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        if (anterior==true)
        {
            numeroAnterior= numero;
            anterior=false;
        }
        else
        {
            if (numeroAnterior<=numero)
            {
                numeroAnterior=numero;
            }
            else
            {
                orden=false;
            }
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }
    if (orden==true)
    {
        cout<<"--------------------"<<endl;
        cout<<"CONJUNTO ORDENADO"<<endl;
    }
    else
    {
        cout<<"--------------------"<<endl;
        cout<<"CONJUNTO DESORDENADO"<<endl;
    }

    system ("pause");
    return 0;

}
