///Ejercicio: 6
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

int main (){
int i, vecNumeros[10], numeroAnterior, rupturas=0;


    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    numeroAnterior=vecNumeros[0];

    for(i=1; i<10; i++)
    {
        if(vecNumeros[i]>numeroAnterior){
            numeroAnterior=vecNumeros[i];
        }
        else{
            numeroAnterior=vecNumeros[i];
            rupturas++;
        }
    }

    cout<<"LA CANTIDAD DE RUPTURAS ES DE "<<rupturas<<endl;


system ("pause");
return 0;

}
