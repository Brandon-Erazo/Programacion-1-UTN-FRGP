///Ejercicio: 1
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decisión

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/* 1) Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
¡IMPORTANTE: VERIFICAR QUE EL PROGRAMA EMITE UN SOLO CARTEL
*/
int main ()
{
///Declarar mis variables con el formato camelCase
    int numero;

///Ingresar los datos por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

///UtilIzar la estructura de desicion if, e informar si el numero es positvo, negativo o cero
    if(numero>0) ///Estrutura anidada
    {
        ///Informo si el numero es positivo por pantalla
        cout<<"EL NUMERO INGRESADO ES POSITIVO"<<endl;
    }
    else
    {
        if(numero<0)
        {
            ///Informo si el numero es negativo por pantalla
            cout<<"EL NUMERO INGRESADO ES NEGATIVO"<<endl;
        }
        else
        {
            ///Informo si el numero es cero por pantalla
            cout<<"EL NUMERO INGRESADO ES CERO"<<endl;
        }
    }


    system ("pause");
    return 0;

}
