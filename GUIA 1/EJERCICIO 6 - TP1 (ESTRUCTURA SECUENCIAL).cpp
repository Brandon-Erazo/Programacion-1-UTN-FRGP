///Ejercicio: 6
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
6) Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listará como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    float recaudacionSemana1, recaudacionSemana2, recaudacionSemana3, recaudacionSemana4, recaudacionTotal;
    float recauacionPromedio, porcentajeRecaudacionSemana1, porcentajeRecaudacionSemana2, porcentajeRecaudacionSemana3, porcentajeRecaudacionSemana4;

///Ingrese los datos por teclado
    cout<<"INGRESE LA RECAUDACION DE LA PRIMERA SEMANA DEL MES: ";
    cin>>recaudacionSemana1;
    cout<<"INGRESE LA RECAUDACION DE LA SEGUNDA SEMANA DEL MES: ";
    cin>>recaudacionSemana2;
    cout<<"INGRESE LA RECAUDACION DE LA TERCERA SEMANA DEL MES: ";
    cin>>recaudacionSemana3;
    cout<<"INGRESE LA RECAUDACION DE LA CUARTA SEMANA DEL MES: ";
    cin>>recaudacionSemana4;

///Sumo la recaudacion de cada una de las semanas para calcular la recaudacion total
    recaudacionTotal = (recaudacionSemana1+recaudacionSemana2+recaudacionSemana3+recaudacionSemana4);

///Calculo la recaudacion promedio
    recauacionPromedio = (recaudacionSemana1+recaudacionSemana2+recaudacionSemana3+recaudacionSemana4) / 4;

///Utilizo la regla de 3 simpre para calcular el porcentaje de cada una de las semanas
    porcentajeRecaudacionSemana1 = (recaudacionSemana1 * 100) / recaudacionTotal;
    porcentajeRecaudacionSemana2 = (recaudacionSemana2 * 100) / recaudacionTotal;
    porcentajeRecaudacionSemana3 = (recaudacionSemana3 * 100) / recaudacionTotal;
    porcentajeRecaudacionSemana4 = (recaudacionSemana4 * 100) / recaudacionTotal;

///Informo los porcentajes de recaudacion para cada uno de las semanas
    cout<<"LA RECAUDACION PROMEDIO POR SEMANA ES DE: "<<"$"<<recauacionPromedio<<endl;
    cout<<"EL PORCENTAJE DE LA PRIMERA SEMANA ES DE: "<<porcentajeRecaudacionSemana1<<"%"<<endl;
    cout<<"EL PORCENTAJE DE LA SEGUNDA SEMANA ES DE: "<<porcentajeRecaudacionSemana2<<"%"<<endl;
    cout<<"EL PORCENTAJE DE LA TERCER SEMANA ES DE: "<<porcentajeRecaudacionSemana3<<"%"<<endl;
    cout<<"EL PORCENTAJE DE LA CUARTA SEMANA ES DE: "<<porcentajeRecaudacionSemana4<<"%"<<endl;

    system ("pause");
    return 0;

}
