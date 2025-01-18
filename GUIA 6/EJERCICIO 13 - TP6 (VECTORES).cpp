///Ejercicio: 13
///Autor: Brandon Erazo
///Fecha: 18/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*13) Dada una lista de 10 números cargarlos en un vector. Luego ingresar dos números a y b
menores a 10. Determinar e informar cual es el valor máximo en el vector considerando los
elementos que están entre las posiciones a y b.
*/

int main ()
{
    int i, a, b, vecNumeros[10];
    int maximo, minimo, maximoNumero;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];

    }

    cout << "INGRESE UN NUMERO 'a' MENOR A 10: ";
    cin >> a;
    cout << "INGRESE UN NUMERO 'b' MENOR A 10: ";
    cin >> b;

    if(a>b)
    {
        maximo=a;
        minimo=b;
    }
    else
    {
        maximo=b;
        minimo=a;
    }

    maximoNumero=vecNumeros[a];

    for(i=minimo+1; i<maximo; i++)
    {
        if(vecNumeros[i]>maximoNumero)
        {
            maximoNumero=vecNumeros[i];
        }
    }

    cout<<"EL VALOR MAXIMO EN EL VECTOR ES EL: "<<maximoNumero<<endl;

    system ("pause");
    return 0;

}
