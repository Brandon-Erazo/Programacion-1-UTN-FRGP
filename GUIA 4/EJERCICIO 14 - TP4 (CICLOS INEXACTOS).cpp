///Ejercicio: 14
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*14) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es la
posición del primer y segundo número impar ingresado.
Ejemplo 8, 4, 5, 6, -9, 15, 7, 0 se informa 3 y 5 */

int main ()
{
///Declaro la variable con el formato camelCase
    int i = 1, numero, posicionPrimerImpar, posicionSegundoImpar;
    bool primerImpar = true, segundoImpar = true; ///Asignar un valor a las variables booleanas

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)
    {
        if (numero%2!=0)
        {
            if (primerImpar==true)
            {
                primerImpar=numero;
                posicionPrimerImpar= i;
                primerImpar=false;
            }
            else
            {
                if(segundoImpar==true)
                {
                    segundoImpar=numero;
                    posicionSegundoImpar=i;
                    segundoImpar=false;
                }
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        i++;
    }

    cout<<"------------------------------"<<endl;
    cout<<"LA POSICION DEL PRIMER Y SEGUNDO IMPAR INGRESADO RESPECTIVAMENTE SON: "<<posicionPrimerImpar<<" Y "<<posicionSegundoImpar<<endl;

    system ("pause");
    return 0;
}
