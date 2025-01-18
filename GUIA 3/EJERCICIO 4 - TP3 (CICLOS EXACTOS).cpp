///Ejercicio: 4
///Autor: Brandon Erazo
///Fecha:
///Comentario: Guia 3 - Ciclos Exactos

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*4) Hacer un programa para que el usuario ingrese un número positivo y que luego se
muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15. */

int main ()
{
///Declaro mis variables
    int numero, i;

///Ingreso un numero por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

///Estructura basica del ciclo for (inicializacion, condicion, incremento)
    for (i=2; i<numero; i++)
    {
        cout<<i<<endl;
    }




    system ("pause");
    return 0;

}
