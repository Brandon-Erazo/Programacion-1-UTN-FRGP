///Ejercicio: 7
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*7) Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se
mostrará el valor índice igual a -1. */

int main ()
{
    int i, numeroBuscado, vecNumeros[10], indice=-1;
/// Cargar los números en el vector
    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }
// Ingresar el número a buscar
    cout << "INGRESE EL NUMERO A BUSCAR: ";
    cin >> numeroBuscado;
 // Buscar el número en el vector
    for (i = 0; i < 10; i++) {
        if (vecNumeros[i] == numeroBuscado) {
            indice = i;

        }
    }

    // Mostrar el resultado
    if (indice != -1) {
        cout<<"EL NUMERO APARECE POR PRIMERA VEZ EN EL INDICE: "<<indice<<endl;
    } else {
        cout<<"INDICE IGUAL A -1"<<endl;
    }



    system ("pause");
    return 0;

}
