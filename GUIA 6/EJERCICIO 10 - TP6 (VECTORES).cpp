///Ejercicio: 10
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*10) Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la cantidad
de números primos que aparecen en el vector.
*/

int main ()
{
    int i, vecNumeros[10], primos=0;
    int j;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    for(i=0; i<10; i++)
    {
        int contadorDivisores=0;
        for(j=2; j<vecNumeros[i]; j++)
        {
            if((vecNumeros[i]%2)==0)
            {
                contadorDivisores++;
            }
        }
        if(contadorDivisores==0)
        {
            primos++;
        }
    }
    cout<<"LA CANTIDAD DE NUMEROS PRIMOS QUE APARECEN EN EL VECTOR ES DE "<<primos<<endl;




    system ("pause");
    return 0;

}
