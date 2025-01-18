///Ejercicio: 1
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*1) Leer 10 números y guardarlos en un vector. Determinar e informar cual es la suma de
los valores del vector.*/

int main ()
{
    ///Declaro mis variables con el formato camelCase
    int i, vecNumeros[10]= {0}, suma=0;

    ///Cargar dentro del ciclo for el vector de 10 elementos
    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }
    ///Sumar los numeros del vector dentro del ciclo for con un acumulador (suma=0)
    for(i=0; i<10; i++)
    {
        suma+=vecNumeros[i];
    }
    ///Informar la suma de los numeros
    cout<<"LA SUMA DE LOS VALORES DEL VECTOR ES: "<<suma<<endl;



    system ("pause");
    return 0;

}
