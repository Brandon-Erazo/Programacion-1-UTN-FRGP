///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*2) Leer 10 números y guardarlos en un vector. Determinar e informar cual es el valor
máximo y su posición dentro del vector.
*/

int main ()
{
    ///Declaro mis variables con el formato camelCase
    int i, vecNumeros[10], maximo=0, posicionMaximo;
    ///Cargar dentro del ciclo for el vector de 10 elementos
    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }
    ///Buscar el maximo y su posicion dentro del vector
    for(i=0; i<10; i++)
    {
        if(vecNumeros[i]>maximo)
        {
            maximo=vecNumeros[i];
            posicionMaximo=i+1;
        }
    }
    ///Informar el maximo dentro del vector y su posicion
    cout<<"EL MAXIMO DENTRO DEL VECTOR ES "<<maximo<<" Y SU POSICION ES "<<posicionMaximo<<endl;


    system ("pause");
    return 0;

}
