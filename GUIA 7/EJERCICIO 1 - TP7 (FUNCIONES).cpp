///Ejercicio: 1
///Autor: Brandon Erazo
///Fecha: 01/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>

using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*1) Escribir una función que reciba un número y lo muestre tres veces por pantalla*/

///PROTOTIPO DE LA FUNCION
void mostrar(int n);

int main ()
{
    int numero;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    mostrar(numero);///LLAMADA A LA FUNCION

    system ("pause");
    return 0;
}

///DESARROLLO DE LA FUNCION
void mostrar(int n)
{
    int i;
    for(i=0; i<3; i++)
    {
        cout<<n<<endl;
    }
}
