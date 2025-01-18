///Ejercicio:
///Autor: Brandon Erazo
///Fecha:
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*14) Dadas dos listas de 10 números cada una y sin números repetidos, cargarlas en dos
vectores. Generar un tercer vector que contenga solamente aquellos elementos que están
repetidos en ambos vectores.
Ejemplo: Vector 1: 8, 10, -3, 5, 7. Vector 2: 10, -8, 5, 9, -3.
Vector 3: 10, -3, 5.
*/

int main ()
{
    int i, j, vecNumerosUno[5], vecNumerosDos[5], vecNumerosTres[5];

    for (i=0; i<5; i++)
    {
        cout << "INGRESE UN NUMERO PARA EL PRIMER VECTOR: ";
        cin >> vecNumerosUno[i];
    }

    for (i=0; i<5; i++)
    {
        cout << "INGRESE UN NUMERO PARA EL SEGUNDO VECTOR: ";
        cin >> vecNumerosDos[i];
    }

    int cont = 0;

    for (i=0; i<5; i++)
    {
        for (j =0; j<5; j++)
        {
            if (vecNumerosUno[i] == vecNumerosDos[j])
            {
                vecNumerosTres[cont] = vecNumerosUno[i];
                cont++;
                break; // Para evitar duplicados en VecN3
            }
        }
    }

    cout<<"VECTOR 3: ";
    for(i=0; i<cont; i++)
    {
        cout<<vecNumerosTres[i]<<"\t";
    }
    cout << endl;

    system ("pause");
    return 0;

}
