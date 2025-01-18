///Ejercicio: 20
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

/*20) Hacer un programa para ingresar un número de mes y listar por pantalla a que bimestre
corresponde ese mes. Tener en cuenta esta lista.
Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.
 */

int main ()
{
///Declaro mis variables con el formato camelCase
    int mes, bimestre;

///Ingreso el mes por teclado
    cout<<"INGRESE UN NUMERO DE MES: ";
    cin>>mes;

///Determinar que a que bimestre pertenece el mes ingresado
    if ((mes%2)!=0)
    {
        bimestre = (mes + 1) / 2;
    }
    else
    {
        bimestre = mes / 2;
    }
    cout<<"EL MES CORRESPONDE AL BIMESTRE: "<<bimestre<<endl;


    system ("pause");
    return 0;

}
