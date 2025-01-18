///Ejercicio: 7
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

/*7) Hacer un programa para ingresar una lista de 20 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, contadorPositivos  = 0, contadorNegativos = 0, contadorCeros = 0, numero; ///Inicalizo mis contadoras en 0

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

///Informo la cantidad de positivos, negativos, ceros
    cout<<"-------------------------------"<<endl;
    cout<<"POSITIVOS: "<<contadorPositivos<<endl;
    cout<<"NEGATIVOS: "<<contadorNegativos<<endl;
    cout<<"CEROS: "<<contadorCeros<<endl;




    system ("pause");
    return 0;

}
