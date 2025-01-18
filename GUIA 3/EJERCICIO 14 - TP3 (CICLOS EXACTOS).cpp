///Ejercicio: 14
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

/*14) Dada una lista de 7 números informar cual es el primer y segundo número impar
ingresado.
Ejemplo 8, 4, 5, 6, -9, 5,7 se informa 5 y -9. */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, primerImpar, segundoImpar;
    bool banderaPrimerImpar = true, banderaSegundoImpar = true; ///Le asigno un valor a las variables booleanas

    for (i=0; i<7; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        if ((numero%2)!=0)
        {
            if(banderaPrimerImpar==true)
            {
                primerImpar = numero;
                banderaPrimerImpar = false;
            }
            else
            {
                if (banderaSegundoImpar==true)
                {
                    segundoImpar = numero;
                    banderaSegundoImpar=false;
                }
            }
        }
    }
    cout<<"-------------------------"<<endl;
    cout<<"EL PRIMER IMPAR INGRESADO ES: "<<primerImpar<<endl;
    cout<<"EL SEGUNDO IMPAR INGRESADO ES: "<<segundoImpar<<endl;


    system ("pause");
    return 0;

}
