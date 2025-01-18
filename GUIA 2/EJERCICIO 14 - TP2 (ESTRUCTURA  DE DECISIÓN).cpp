///Ejercicio: 14
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

/*14) Un ciudadano está exento de votar si se cumple alguna de las siguientes situaciones:
• Su edad es mayor a 70 años
• Su edad es entre 18 y 70 años, pero se encuentra a más de 500 km de su ciudad.
Hacer un programa para ingresar la edad y la distancia de su ciudad de un ciudadano e indicar
con un cartel si está o no está exento de votar.  */

int main ()
{
///Declaro mis variables con el formato camelCase
    int edad, distancia;

///Ingresar la edad y distancia por consola
    cout<<"INGRESE SU EDAD: ";
    cin>>edad;
    cout<<"INGRESE LA DISTANCIA DE SU CIUDAD: ";
    cin>>distancia;

///Determinar si el usuario esta o no exento de votar en base a las condiciones logicas
    if (edad>70)
    {
        cout<<"USTED ESTA EXENTO DE VOTAR"<<endl;
    }
    else
    {
        if ((edad>=18)&&(edad<=70)&&(distancia>500))
        {
            cout<<"USTED ESTA EXENTO DE VOTAR"<<endl;
        }
        else
        {
            cout<<"USTED NO ESTA EXENTO DE VOTAR"<<endl;
        }
    }

    system ("pause");
    return 0;

}
