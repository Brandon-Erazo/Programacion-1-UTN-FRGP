///Ejercicio: 13
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

/*13) Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a
mayor.
Probar CADA UNA de las siguientes 6 combinaciones:
N1=8, N2=6, N3=10. N1=8, N2=10, N3=6. En ambas se debe mostrar 6, 8, 10.
N1=6, N2=8, N3=10. N1=10, N2=8, N3=6. En ambas se debe mostrar 6, 8, 10.
N1=6, N2=10, N3=8. N1=10, N2=6, N3=8. En ambas se debe mostrar 6, 8, 10. */

int main (){
///Declaro mis variables con el formato camelCase
int numeroUno, numeroDos, numeroTres;

///Ingreso los tre numeros por teclado
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL ULTIMO NUMERO: ";
    cin>>numeroTres;

///Ordenar de menor a mayor
    if ((numeroUno>numeroDos) && (numeroUno<numeroTres))
    {
        cout<<numeroDos<< ", " <<numeroUno<< ", " <<numeroTres<<endl;
    }
    else
    {
        if ((numeroUno<numeroDos) && (numeroUno>numeroTres))
        {
            cout<<numeroTres<<", "<<numeroUno<< ", "<<numeroDos<<endl;
        }
        else
        {
            if ((numeroDos>numeroUno) && (numeroDos<numeroTres))
            {
                cout<<numeroUno<< ", "<<numeroDos<<", "<<numeroTres<<endl;
            }
            else
            {
                if ((numeroDos<numeroUno) && (numeroDos>numeroTres))
                {
                    cout << numeroTres << ", " << numeroDos << ", " << numeroUno<< endl;
                }
                else
                {
                    if ((numeroDos>numeroUno) && (numeroDos>numeroTres))
                    {
                        cout << numeroUno<< ", " << numeroTres << ", " << numeroDos << endl;
                    }
                    else
                    {
                        if ((numeroTres>numeroDos) && (numeroTres<numeroUno))
                        {
                            cout << numeroDos << ", " << numeroTres << ", " << numeroUno << endl;
                        }
                    }
                }
            }
        }
    }

system ("pause");
return 0;

}
