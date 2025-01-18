///Ejercicio: 10
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

/*10) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y el mínimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listará Máximo 42 Mínimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listará Máximo 42 Mínimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el máximo
“seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda
totalmente descartada*/

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, maximo, minimo;
    bool banderaMaximo=true, banderaMinimo = true; ///Asignar un valor a la variable booleana

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)///Mientras (numero sea distinto a 0)
    {
        if (banderaMaximo==true)
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
            else
            {
                if(banderaMinimo==true)
                {
                    minimo=numero;
                    banderaMinimo=false;
                }
                else
                {
                    if (numero<minimo)
                    {
                        minimo=numero;
                    }
                }
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------"<<endl;
    cout<<"EL MAXIMO Y MINIMO RESPECTIVAMENTE SON: "<< maximo<<" Y "<<minimo<<endl;

    system ("pause");
    return 0;

}
