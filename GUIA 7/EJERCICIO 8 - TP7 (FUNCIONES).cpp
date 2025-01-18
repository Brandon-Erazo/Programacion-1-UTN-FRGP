///Ejercicio: 8
///Autor: Brandon Erazo
///Fecha: 02/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*8) Escribir una función que reciba la fecha de nacimiento de una persona y la fecha de
hoy, y calcule y devuelva la edad en años de esa persona. Suponer que cada fecha está
compuesta por tres valores independientes: día, mes y año. Consulte el ejercicio del TP 2
que referencia el cálculo de la edad. */

int edad(int diaN, int mesN, int anioN, int diaA, int mesA, int anioA);

int main (){
int diaActual, mesActual, anioActual;
int diaNacimiento, mesNacimiento, anioNacimiento;
int edadActual;

cout<<"INGRESE EL DIA EN QUE NACIO: ";
cin>>diaNacimiento;
cout<<"INGRESE EL MES EN QUE NACIO: ";
cin>>mesNacimiento;
cout<<"INGRESE EL AÑO EN QUE NACIO: ";
cin>>anioNacimiento;
cout<<"INGRESE EL DIA ACTUAL: ";
cin>>diaActual;
cout<<"INGRESE EL MES ACTUAL: ";
cin>>mesActual;
cout<<"INGRESE EL AÑO ACTUAL: ";
cin>>anioActual;

edadActual = edad(diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual);

cout<<"SU EDAD ACTUAL ES: "<< edadActual<<endl;
system ("pause");
return 0;

}
int edad(int diaN, int mesN, int anioN, int diaA, int mesA, int anioA){
int resultado;

    if ((diaN == diaA) && (mesN == mesA))
    {
        resultado = anioA- anioN;
    }
    else
    {
        if ((mesA>mesN))
        {
            resultado = anioA- anioN;
        }
        else
        {
            resultado = (anioA - anioN) - 1;
        }
    }
    return resultado;
}
