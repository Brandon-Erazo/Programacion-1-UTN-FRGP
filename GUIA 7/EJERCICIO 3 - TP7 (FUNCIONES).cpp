///Ejercicio: 3
///Autor: Brandon Erazo
///Fecha: 01/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*3) Escribir una función que reciba tres números y retorne el promedio.*/

int sumar(int num1, int num2, int num3);
float promedio(int suma);

int main ()
{
    int numeroUno, numeroDos, numeroTres, sumaTotal;
    float promedioFinal;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroUno;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroDos;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numeroTres;

    sumaTotal = sumar(numeroUno, numeroDos, numeroTres);
    promedioFinal= promedio(sumaTotal);

    cout<<"EL PROMEDIO ES IGUAL A: "<<promedioFinal<<endl;
    system ("pause");
    return 0;

}

int sumar(int num1, int num2, int num3)
{
    int suma;
    suma = num1 + num2 + num3;
    return suma;
}

float promedio(int suma)
{
    float promedio;
    promedio = suma / 3;
    return promedio;
}
