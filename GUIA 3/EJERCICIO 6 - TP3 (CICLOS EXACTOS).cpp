///Ejercicio: 6
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

/*6) Hacer un programa para ingresar un N valor que indica la cantidad de números que
componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos
son positivos.
Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará
Cantidad de Positivos: 4
Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará
Cantidad de Positivos: 0 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numeroUno, numeroDos, contadorPositivos=0; ///Inicializo mi contador en 0

    cout<<"INGRESE UN VALOR PARA LA CANTIDAD DE NUMEROS QUE COMPONEN LA LISTA: ";
    cin>>numeroUno;

    for (i=0; i<numeroUno; i++)
    {
        cout<<"INGRESE UN NUMERO DE LA LISTA: ";
        cin>>numeroDos;

        if(numeroDos>0)
        {
            contadorPositivos++;
        }
    }

///Informo la cantidad de positivos
    cout<<"-----------"<<endl;
    cout<<"LA CANTIDAD DE POSITIVOS ES: "<<contadorPositivos<<endl;



    system ("pause");
    return 0;

}
