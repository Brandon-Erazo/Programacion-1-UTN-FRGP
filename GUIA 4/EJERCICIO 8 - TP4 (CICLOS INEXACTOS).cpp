///Ejercicio: 8
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

/*8) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo de los pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máxim */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, maximoPar;
    bool banderaMaximoPar=true; ///Asignar un valor a la variable booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0) ///Mientras (numero sea distinto a 0)
    {
        if(numero%2==0)
        {
            if (banderaMaximoPar==true)
            {
                maximoPar=numero;
                banderaMaximoPar=false;
            }
            else
            {
                if (numero>maximoPar)
                {
                    maximoPar=numero;
                }
            }
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------"<<endl;
    cout<<"EL NUMERO MAXIMO ES: "<<maximoPar<<endl;

    system ("pause");
    return 0;

}
