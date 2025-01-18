///Ejercicio: 6
///Autor: Brandon Erazo
///Fecha: 02/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*6) Escribir una función que reciba dos números y retorne la suma y el producto de ambos*/
int sumar(int num1, int num2);
int multiplicar(int num1, int num2);

int main ()
{
    int numeroUno, numeroDos;
    int resultadoSuma, resultadoProducto;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroDos;

    resultadoSuma = sumar(numeroUno, numeroDos);
    resultadoProducto = multiplicar(numeroUno, numeroDos);

    cout<<"EL RESULTADO DE LA SUMA ES: "<<resultadoSuma<<endl;
    cout<<"EL PRODUCTO DE AMBOS NUMEROS ES: "<<resultadoProducto<<endl;


    system ("pause");
    return 0;

}
int sumar(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}
int multiplicar(int num1, int num2)
{
    int resultado;
    resultado = num1 * num2;
    return resultado;
}
