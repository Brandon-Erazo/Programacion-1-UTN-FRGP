///Ejercicio: 5
///Autor: Brandon Erazo
///Fecha: 01/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*5) Escribir una función que reciba tres números y retorne el máximo.*/

void cargarVector(int v[], int tam );
int buscarMaximo(int v[], int tam);
int posicionMaximo(int v[], int tam);

int main ()
{
    int vecNumeros[3];
    int maxNumero;
    int posMaxNumero;

    cargarVector(vecNumeros, 3);
    maxNumero = buscarMaximo(vecNumeros, 3);
    posMaxNumero = posicionMaximo(vecNumeros, 3);

    cout<<"EL NUMERO MAXIMO ES "<<maxNumero<<" Y SU POSICION ES "<<posMaxNumero<<endl;
    system ("pause");
    return 0;

}

void cargarVector(int v[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>v[i];
    }
}

int buscarMaximo(int v[], int tam)
{
    int i;
    int maximoNumero=v[0];

    for(i=0; i<tam; i++)
    {
        if(v[i]>maximoNumero)
        {
            maximoNumero = v[i];
        }
    }
    return maximoNumero;
}

int posicionMaximo(int v[], int tam)
{
    int i;
    int maximoNumero=v[0];
    int posicion= 1;

    for(i=0; i<tam; i++)
    {
        if(v[i]>maximoNumero)
        {
            maximoNumero = v[i];
            posicion = i + 1;
        }
    }
    return posicion;
}
