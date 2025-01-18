///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 01/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*2) Escribir una función que reciba dos números y retorne la suma de ambos.*/

///PROTOTIPO DE LA FUNCION
int sumar(int num1, int num2);

int main ()
{
    int numeroUno, numeroDos, resultado;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE OTRO NUMERO: ";
    cin>>numeroDos;

    resultado = sumar(numeroUno, numeroDos);

    cout<<"EL RESULTADO DE LA SUMA ES: "<<resultado<<endl;

    system ("pause");
    return 0;

}
int sumar(int num1, int num2)
{
    int suma;
    suma = num1 + num2;
    return suma;
}

///DESARROLLO DE LA FUNCION
