///Ejercicio: 21
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

/*21) Dada una lista de números que finaliza cuando se ingresa un cero, informar el primer
número par ingresado y su ubicación en la lista y el último de los números primos y su
ubicación en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10, 0 se informa Primer número par: 4 ubicación 2. Ultimo primo:
13 ubicación 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6, 0 se informa Primer número par: 6 ubicación 7. Ultimo
primo: 13 ubicación 5. */

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, primerPar, posicionPar, primo, posicionPrimo;
    bool banderaPar=true;
    int i=1;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)
    {
        if(numero%2==0)
        {
            if (banderaPar==true)
            {
                primerPar=numero;
                posicionPar=i;
                banderaPar=false;
            }
        }

        int x=2;
        int contadorDivisores=0;

        while (x<numero)
        {
            if (numero%x==0)
            {
                contadorDivisores++;

            }
            x++;
        }

        if (contadorDivisores==0)
        {
            primo=numero;
            posicionPrimo=i;
        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        i++;
    }

    cout<<"----------------------------------"<<endl;
    cout<<"EL PRIMER NUMERO PAR ES: "<<primerPar<<" Y SU POSICION ES: "<<posicionPar<<endl;
    cout<<"EL ULTIMO NUMERO PRIMO ES: "<<primo<< " Y SU POSICION ES: "<<posicionPrimo<<endl;

    system ("pause");
    return 0;

}
