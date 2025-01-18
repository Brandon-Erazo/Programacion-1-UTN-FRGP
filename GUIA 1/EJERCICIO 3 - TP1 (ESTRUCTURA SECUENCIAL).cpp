///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout
/*
3) Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 150.000 más $
20.000 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado
la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a
pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de
$ 230.000.
*/
int main ()
{
///Declaro mis variables con el formato camelCase, a las variable constantes les asigno su valor
    int cantAutosVendidos;
    float sueldo;
    const float sueldoFijo = 150000, premio = 20000;

///Pido al usuario que ingrese los datos
    cout<<"INGRESE LA CANTIDAD DE AUTOS VENDIDOS POR EL VENDEDOR: ";
    cin>>cantAutosVendidos;

///Realizo la operacion aritmetica para calcular el sueldo
    sueldo= sueldoFijo + (premio * cantAutosVendidos);

///Otra forma de llegar al mismo resultado
/// sueldo = 150000 +(20000* cantAutosVendidos);

///Informo por pantalla el sueldo total a pagar
    cout<<"EL SUELDO TOTAL A PAGAR ES DE: $"<<sueldo<<endl;





    system ("pause");
    return 0;

}
