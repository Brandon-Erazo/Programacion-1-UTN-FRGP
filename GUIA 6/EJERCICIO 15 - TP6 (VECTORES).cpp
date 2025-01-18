///Ejercicio: 15
///Autor: Brandon Erazo
///Fecha: 18/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*15) Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en dos
vectores. Generar un tercer vector que contenga los elementos de ambos vectores
intercalados.
Ejemplo: Vector 1: 8, 10, -3, 5, 7. Vector 2: 20, -8, 10, 9, 3.
Vector 3: 8, 20, 10, -8, -3, 10, 5, 9, 7, 3.*/

int main (){
int i, j, vecNumerosUno[5], vecNumerosDos[5],vecNumerosTres[10];

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

    j = 0;

    for (int i = 0; i < 10; i += 2)
    {
        vecNumerosTres[i] = vecNumerosUno[j];
        vecNumerosTres[i + 1] = vecNumerosDos[j];
        j++;
    }

    cout << "EL NUEVO VECTOR ES: "<<endl;
    for (i=0; i<10; i++)
    {
        cout<<vecNumerosTres[i]<<"\t";
    }


system ("pause");
return 0;

}
