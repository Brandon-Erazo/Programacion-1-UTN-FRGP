///Ejercicio: 13
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

int main ()
{
///Declaro mis variables con el formato camelCase
    int numero, anteultimoImpar, ultimoImpar;
    bool banderaUltimoImpar=true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while (numero!=0)///Mientars (numero sea distinto a 0)
    {
        if (numero%2!=0)
        {
            if (banderaUltimoImpar==true)
            {
                anteultimoImpar=ultimoImpar;
                ultimoImpar=numero;
            }

        }

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }

    cout<<"-----------------------------"<<endl;
    cout<<"EL ANTEULTIMO IMPAR Y ULTIMO IMPAR RESPECTIVAMENTE SON: "<<anteultimoImpar<<" Y "<<ultimoImpar<<endl;

    system ("pause");
    return 0;

}
