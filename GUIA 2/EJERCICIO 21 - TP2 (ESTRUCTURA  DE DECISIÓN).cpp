///Ejercicio: 21
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 2 - Estructura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*21) Hacer un programa para ingresar un número de mes y listar por pantalla a que trimestre
corresponde ese mes. Tener en cuenta esta lista.
Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2.
Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4. */

int main ()
{
///Daclaro mis variables con el formato camelCase
    int mes, trimestre;

///Ingreso el mes por teclado
    cout<<"INGRESE UN NUMERO DE MES: ";
    cin>>mes;

///Determinar que a que bimestre pertenece el mes ingresado
    if ((mes%3)!=0)
    {
        trimestre = ((mes - 1) / 3 )+ 1;
    }
    else
    {
        trimestre = mes / 3;
    }
    cout<<"EL MES CORRESPONDE AL TRIMESTRE: "<<trimestre<<endl;

    system ("pause");
    return 0;

}
