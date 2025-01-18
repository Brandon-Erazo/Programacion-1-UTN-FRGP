///Ejercicio:
///Autor: Brandon Erazo
///Fecha:
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

int main ()
{
    int i, vecNumeros[5], vecNumerosDos[4], vecNumerosNueve[9];
    int suma=0, promedio;

    for(i=0; i<5; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    for(i=0; i<4; i++)
    {
        suma=vecNumeros[i]+vecNumeros[i+1];
        promedio=suma/2;
        vecNumerosDos[i]=promedio;
    }

    int j = 0;
    for (int i = 0; i < 9; i += 2)
    {
        vecNumerosNueve[i] = vecNumeros[j];
        vecNumerosNueve[i + 1] = vecNumerosDos[j];
        j++;
    }

    cout << "EL NUEVO VECTOR ES: "<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<vecNumerosNueve[i]<<"\t";
    }

    cout<<endl;
    system ("pause");
    return 0;

}
