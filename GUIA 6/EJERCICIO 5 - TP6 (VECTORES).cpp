///Ejercicio: 5
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*5) Dada una lista de 20 números enteros cargarlos en un vector. Determinar e informar con
un cartel aclaratorio si el sector está ordenado estrictamente en forma creciente.
Por ejemplo: el vector (1, 3, 5, 7, 9) está ordenado estrictamente, el vector (1, 5, 3, 7) no lo
está. */

int main ()
{
    int i, vecNumeros[10], numeroAnterior;
    bool bandOrdenado=true;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    numeroAnterior=vecNumeros[0];

    for(i=0; i<10; i++)
    {
        if(vecNumeros[i]>=numeroAnterior){
            numeroAnterior=vecNumeros[i];
        }
        else{
            bandOrdenado=false;
        }
    }

    if(bandOrdenado==true){
        cout<<"EL VECTOR ESTA ORDENADO ESTRICTAMENTE"<<endl;
    }
    else{
         cout<<"EL VECTOR NO ESTA ORDENADO ESTRICTAMENTE"<<endl;
    }



    system ("pause");
    return 0;

}
