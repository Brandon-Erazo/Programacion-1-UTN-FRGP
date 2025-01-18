///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*4) Dada una lista de 10 números cargarlos en un vector. Luego intercambiar en el vector el
número en la posición 0 con el número en la posición 9*/

int main ()
{
    int i, vecNumeros[10], auxiliar;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESAR UN NUMERO: ";
        cin>>vecNumeros[i];
    }
    auxiliar=vecNumeros[0];
    vecNumeros[0]=vecNumeros[9];
    vecNumeros[9]=auxiliar;
    cout<<"LOS NUMEROS INGRESADOS SON: "<<endl;
    for(i=0; i<10; i++)
    {
        cout<<vecNumeros[i]<<endl;
    }





    system ("pause");
    return 0;

}
