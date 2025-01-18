///Ejercicio: 12
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

/*12) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int numero, primerImpar, ultimoImpar;
    bool banderaPrimerImpar = true, banderaUltimoImpar=true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)///Mientras (numero sea distinto a 0)
    {
        if (numero%2!=0)
        {
            if (banderaPrimerImpar==true)
            {
                primerImpar=numero;
                banderaPrimerImpar=false;
            }
            else
            {
                if (banderaUltimoImpar==true)
                {
                    ultimoImpar=numero;
                }
            }
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

    }

    cout<<"-----------------------------"<<endl;
    cout<<"EL PRIMER IMPAR Y ULTIMO IMPAR RESPECTIVAMENTE SON: "<<primerImpar<<" Y "<<ultimoImpar<<endl;

    system ("pause");
    return 0;

}
