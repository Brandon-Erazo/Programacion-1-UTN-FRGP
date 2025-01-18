///Ejercicio: 12
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

/*12) Hacer un programa para leer tres números diferentes y determinar e informar el número
del medio.
Probar CADA UNA de las siguientes 6 combinaciones:
N1=8, N2=6, N3=10. N1=8, N2=10, N3=6. En ambas el valor medio es 8.
N1=6, N2=8, N3=10. N1=10, N2=8, N3=6. En ambas el valor medio es 8.
N1=6, N2=10, N3=8. N1=10, N2=6, N3=8. En ambas el valor medio es 8. */

int main (){
///Declaro mis variables con el formato camelCase
int numeroUno, numeroDos, numeroTres;

///Ingreso los numeros por teclado
    cout <<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE EL ULTIMO NUMERO: ";
    cin>>numeroTres;

///Utilizo la estrutura if para buscar el numero del medio e informarlo
if ((numeroUno>numeroDos) && (numeroUno<numeroTres))
    {
        cout<<"EL NUMERO DEL MEDIO ES: "<<numeroUno<<endl;
    }
    else
    {
        if ((numeroUno<numeroDos) && (numeroUno>numeroTres))
        {
            cout<<"EL NUMERO DEL MEDIO ES: "<<numeroUno<<endl;
        }
        else
        {
            if ((numeroDos>numeroUno) && (numeroDos<numeroTres))
            {
                cout<<"EL NUMERO DEL MEDIO ES: "<<numeroDos<<endl;
            }
            else
            {
                if ((numeroDos<numeroUno) && (numeroDos>numeroTres))
                {
                    cout<<"EL NUMERO DEL MEDIO ES: "<<numeroDos<<endl;
                }
                else
                {
                    if ((numeroDos>numeroUno) && (numeroDos>numeroTres))
                    {
                        cout<<"EL NUMERO DEL MEDIO ES: "<<numeroTres<<endl;
                    }
                    else
                    {
                        if ((numeroTres>numeroDos) && (numeroTres<numeroUno))
                        {
                            cout <<"EL NUMERO DEL MEDIO ES: "<<numeroTres<<endl;
                        }
                    }
                }
            }
        }
    }


system ("pause");
return 0;

}
