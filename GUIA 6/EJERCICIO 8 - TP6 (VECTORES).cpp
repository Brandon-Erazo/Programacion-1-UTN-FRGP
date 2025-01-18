///Ejercicio: 8
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*8) Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar la cantidad de veces que ese número aparece en el vector. */

int main ()
{
    int i, vecNumeros[10], numeroIngresado, cantVecesRepetido=0;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    cout<<"INGRESE EL NUMERO A BUSCAR: ";
    cin>>numeroIngresado;

    for(i=0; i<10; i++)
    {
        if(numeroIngresado==vecNumeros[i]){
            cantVecesRepetido++;
        }
    }

    cout<<"LA CANTIDAD DE VECES QUE SE REPITE "<<numeroIngresado<<" DENTRO DEL VECTOR ES "<<cantVecesRepetido<<endl;




    system ("pause");
    return 0;

}
