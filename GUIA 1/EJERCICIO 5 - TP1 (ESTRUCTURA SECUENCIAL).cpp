///Ejercicio: 5
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
5) Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int cantidadAlfajoresTipoA, cantidadAlfajoresTipoB, cantidadAlfajoresTipoC, cantidadTotalAlfajoresVendidos;
    float porcentajeTipoA, porcentajeTipoB, porcentajeTipoC;

///Ingrese la cantidad vendidas de cada tipo de alfajores
    cout<<"INGRESE LA CANTIDAD DE ALFAJORES VENDIDOS DEL TIPO A: ";
    cin>>cantidadAlfajoresTipoA;
    cout<<"INGRESE LA CANTIDAD DE ALFAJORES VENDIDOS DEL TIPO B: ";
    cin>>cantidadAlfajoresTipoB;
    cout<<"INGRESE LA CANTIDAD DE ALFAJORES VENDIDOS DEL TIPO C: ";
    cin>>cantidadAlfajoresTipoC;

///Sumo la cantidad de todos los tipos de alfajores para calcular la cantidad total de alfajores vendidos
    cantidadTotalAlfajoresVendidos = cantidadAlfajoresTipoA + cantidadAlfajoresTipoB + cantidadAlfajoresTipoC;

///Utilizo la regla de 3 simples para calcular el porcentaje de cada uno de los 3 tipos de alfajores
    porcentajeTipoA = (cantidadAlfajoresTipoA * 100) / (float) cantidadTotalAlfajoresVendidos;
    porcentajeTipoB = (cantidadAlfajoresTipoB * 100) / (float) cantidadTotalAlfajoresVendidos;
    porcentajeTipoC = (cantidadAlfajoresTipoC * 100) / (float) cantidadTotalAlfajoresVendidos;

///Informo el porcentaje de ventas
    cout<<"EL PORCENTAJE DE VENTAS DEL TIPO A ES DE: "<<porcentajeTipoA<<"%"<<endl;
    cout<<"EL PORCENTAJE DE VENTAS DEL TIPO B ES DE: "<<porcentajeTipoB<<"%"<<endl;
    cout<<"EL PORCENTAJE DE VENTAS DEL TIPO C ES DE: "<<porcentajeTipoC<<"%"<<endl;

    system ("pause");
    return 0;

}
