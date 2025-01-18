///Ejercicio: 9
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*9) Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números pares que aparecen en el vector.*/

int main ()
{
    int i, vecNumeros[10], pares=0;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESAR UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    for(i=0;i<10;i++){

        if((vecNumeros[i]%2)==0){
            pares++;
        }

    }

    cout<<"LA CANTIDAD DE NUMEROS PARES DENTRO DEL VECTOR ES "<<pares<<endl;



    system ("pause");
    return 0;

}
