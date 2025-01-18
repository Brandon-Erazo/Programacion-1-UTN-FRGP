///Ejercicio: 7
///Autor: Brandon Erazo
///Fecha: 02/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*7) Escribir una función que reciba un número y muestre por pantalla los divisores de ese número*/

void mostrarDivisores(int num1);

int main ()
{
    int numero;
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
        mostrarDivisores(numero);



    system ("pause");
    return 0;

}

void mostrarDivisores(int num1)
{
    int i;
    cout<<"SUS DIVISORES SON: "<<endl;
    for(i=1; i<=num1; i++)
    {
        if(num1%i==0)
        {
            cout<<i<<endl;
        }
    }
}
