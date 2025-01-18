///Ejercicio: 15
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Estructura de decision

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*15) Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando día, mes y año como 3 datos individuales. Luego ingresar la fecha actual
ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa
persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la
edad de esa persona es 19.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int dia, mes, anio;
    int diaActual, mesActual, anioActual, edad;

///Ingreseo los datos por teclado
    cout<<"INGRESE EL DIA DE SU NACIMIENTO: ";
    cin>>dia;
    cout<<"INGRESE EL MES DE SU NACIMIENTO: ";
    cin>>mes;
    cout<<"INGRESE EL AÑO DE SU NACIMIENTO: ";
    cin>>anio;
    cout<<"INGRESE EL DIA ACTUAL: ";
    cin>>diaActual;
    cout<<"INGRESE EL MES ACTUAL: ";
    cin>>mesActual;
    cout<<"INGRESE EL AÑO ACTUAL: ";
    cin>>anioActual;

///Desarrollo la estrucutra para saber la edad del usuario
    if ((dia == diaActual) && (mes == mesActual))
    {
        edad = anioActual - anio;
    }
    else
    {
        if ((mesActual>mes))
        {
            edad = anioActual - anio;
        }
        else
        {
            edad = (anioActual - anio) - 1;
        }
    }
    cout<<"SU EDAD ACTUAL ES: "<<edad<<endl;

    system ("pause");
    return 0;

}
