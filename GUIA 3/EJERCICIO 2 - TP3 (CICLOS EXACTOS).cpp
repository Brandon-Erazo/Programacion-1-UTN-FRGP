///Ejercicio: 2
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

int main ()
{
///Declaro la variable i (Iteracion)
    int i;

///Estructura basica del ciclo for (inicializacion, condicion, incremento)
    for (i=1; i<20; i=i+3) /// for (i=0;i<20;i=i+3)
    {
        cout<<i<<endl;    /// cout<<i+1<<endl;
    }




    system ("pause");
    return 0;

}
