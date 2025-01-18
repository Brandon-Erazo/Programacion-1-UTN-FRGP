///Ejercicio: 16
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

/*16) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que
le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4*/

int main ()
{
///Declaro mis variables en el formato camleCase
    int numero, maximo, maximoAnterior;
    bool banderaMaximo= true;///Asignar un valor a la vraible booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        if (banderaMaximo==true)
        {
            maximo=numero;
            banderaMaximo=false;
        }
        else
        {
            if (numero>=maximo)
            {
                maximoAnterior=maximo;
                maximo=numero;
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"------------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<" Y EL QUE LE SIGUE ES: "<<maximoAnterior<<endl;

    system ("pause");
    return 0;

}
