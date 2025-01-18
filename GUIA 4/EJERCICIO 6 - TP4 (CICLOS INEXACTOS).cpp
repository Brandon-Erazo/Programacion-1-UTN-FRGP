///Ejercicio:
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*6) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.*/

int main ()
{
///Declaro las variables con el formato camelCase
    int numero, contadorPositivos = 0, contadorNegativos = 0;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        if (numero>0)
        {
            contadorPositivos++;
        }
        else
        {
            contadorNegativos++;
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"----------------------------------------------------------"<<endl;
    cout<<"LA CANTIDAD DE POSITIVOS ES DE: "<<contadorPositivos<<endl;
    cout<<"LA CANTIDA DE GEATIVOS ES DE: "<<contadorNegativos<<endl;

    system ("pause");
    return 0;

}
