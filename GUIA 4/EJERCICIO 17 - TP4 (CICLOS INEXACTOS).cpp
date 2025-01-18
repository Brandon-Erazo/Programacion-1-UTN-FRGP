///Ejercicio: 17
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

/*17) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan
dos números consecutivos iguales, y luego informar el máximo. Cuando se ingresa el
número repetido el mismo debe ser descartado.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35.
En este caso, el segundo número 22 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55.
En este caso, el segundo número 33 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, -13, -13. Se listará Máximo 55.
En este caso, el segundo número -13 no se analiza, solo sirve para finalizar el ingres*/

int main ()
{
///Declarar las variables en formato camelCase
    int numero, numeroAnterior, maximo;
    bool consecutivo = false, banderaMaximo = true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(consecutivo==false)
    {
        numeroAnterior=numero;
        if (banderaMaximo)
        {
            maximo=numero;
            banderaMaximo=false;
        }
        else
        {
            if (numero>maximo)
            {
                maximo=numero;
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        if (numero==numeroAnterior)
        {
            consecutivo=true;
        }
    }

    cout<<"-----------------------"<<endl;
    cout<<"EL MAXIMO ES: "<<maximo<<endl;

    system ("pause");
    return 0;

}
