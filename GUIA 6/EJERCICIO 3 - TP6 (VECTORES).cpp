///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*3) Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por
pantalla los valores que son mayores al promedio.
*/

int main ()
{
    int i, vecNumeros[10], suma=0;
    float promedio;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    for(i=0; i<10; i++)
    {
        suma+=vecNumeros[i];
    }
    promedio=(float)suma/10;

    cout<<"LOS MAYORES AL PROMEDIO SON: ";
    for(i=0; i<10; i++)
    {
        if(vecNumeros[i]>promedio)
        {
            cout<<vecNumeros[i]<<"\t";
        }
    }
    cout<<endl;


    system ("pause");
    return 0;

}
