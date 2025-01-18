///Ejercicio: 11
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

/*11) Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números
son positivos */

int main ()
{
///Declaro mis variables con el formato camelCase
    int numeroUno, numeroDos, numeroTres, numeroCuatro, numeroCinco;
    int contadorPositivos = 0;///Declaro mi contador de positivos y lo inicializo en 0

///Ingreso los datos por teclado
    cout<<"INGRESE EL PRIMER NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL TERCER NUMERO: ";
    cin>>numeroTres;
    cout<<"INGRESE EL CUARTO NUMERO: ";
    cin>>numeroCuatro;
    cout<<"INGRESE EL QUINTO NUMERO: ";
    cin>>numeroCinco;

///Utilizar la estuctura condicional para saber la cantidad de positivos
    if(numeroUno>0)
    {
        contadorPositivos++; ///Es lo mismo que contadorPositivos = contadorPositivos +1;
    }
    if(numeroDos>0)
    {
        contadorPositivos++; ///Es lo mismo que contadorPositivos = contadorPositivos +1;
    }
    if (numeroTres>0)
    {
        contadorPositivos++; ///Es lo mismo que contadorPositivos = contadorPositivos +1;
    }
    if (numeroCuatro>0)
    {
        contadorPositivos++; ///Es lo mismo que contadorPositivos = contadorPositivos +1;
    }
    if (numeroCinco>0)
    {
        contadorPositivos++; ///Es lo mismo que contadorPositivos = contadorPositivos +1;
    }

///Informo cuanto de sos cinco numeros son positivos
    cout<<"DE LOS CINCO NUMEROS, SOLO "<<contadorPositivos<<" SON POSITIVOS."<<endl;

    system ("pause");
    return 0;

}
