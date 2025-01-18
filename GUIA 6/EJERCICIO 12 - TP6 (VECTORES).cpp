///Ejercicio: 12
///Autor: Brandon Erazo
///Fecha: 17/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*12) Dada una lista de 10 números cargarlos en un vector. Luego detectar si en el vector hay
algún elemento repetido, en tal caso indicarlo con un cartel “Hay Repetidos”. */

int main ()
{
    int i, j, vecNumeros[10], contarepetidos=0;
    bool banderaReptidos=false;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>vecNumeros[i];
    }

    for(i=0;i<10;i++){
        contarepetidos=0;
        for(j=0;j<10;j++){

            if (vecNumeros[i]==vecNumeros[j]){
                contarepetidos++;
            }
        }
        if(contarepetidos>=2){
            banderaReptidos=true;
        }
    }

    if(banderaReptidos){
        cout<<"HAY REPETIDOS DENTRO DEL VECTOR"<<endl;
    }
    else{
        cout<<" NO HAY REPETIDOS DENTRO DEL VECTOR"<<endl;
    }




    system ("pause");
    return 0;

}
