///Ejercicio: 8
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

/*8) Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales
- Isósceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre sí*/

int main ()
{
///Declaro las variables con el formato camelCase
    int ladoUno, ladoDos, ladoTres;

///Ingreso la logitus de los tres lados del triangulo por teclado
    cout<<"INGRESE UNO DE LOS LADOS DEL TRIANGULO: ";
    cin>>ladoUno;
    cout<<"INGRESE OTRO DE LOS LADOS DEL TRIANGULO: ";
    cin>>ladoDos;
    cout<<"INGRESE EL ULTIMO LADO DEL TRIANGULO: ";
    cin>>ladoTres;

///Determinar si se trata de un equilatero, isósceles o escaleno
    if((ladoUno!=ladoDos)&&(ladoDos!=ladoTres)&&(ladoUno!=ladoTres))
    {
        cout<<"ESCALENO"<<endl;
    }
    else
    {
        if((ladoUno==ladoDos) && (ladoDos==ladoTres))
        {
            cout<<"EQUILATERO"<<endl;
        }
        else
        {
            cout<<"ISOSCELES"<<endl;
        }
    }


    system ("pause");
    return 0;

}
