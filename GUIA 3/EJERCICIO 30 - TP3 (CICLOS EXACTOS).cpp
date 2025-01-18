///Ejercicio: 30
///Autor: Brandon Erazo
///Fecha: 02/08/2024
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
///Declaro mi variables con el formato camelCase
    int numero, i, primerMaximo, segundoMaximo;
    bool banderaMaximo= true;

    for (i=0;i<10;i++){

        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

         if(banderaMaximo==true)
        {
            primerMaximo=numero;
            banderaMaximo=false;
        }
        else
        {
            if (numero>primerMaximo)
            {

                primerMaximo=numero;
            }
            else
            {
                if( numero>segundoMaximo)
                {
                    segundoMaximo = numero;
                }
            }
        }

    }
    cout<<"----------------------"<<endl;
    cout<<"EL PRIMER MAXIMO ES: "<<primerMaximo<<endl;
    cout<<"EL SEGUNDO MAXIMO ES: "<<segundoMaximo<<endl;



    system ("pause");
    return 0;

}
