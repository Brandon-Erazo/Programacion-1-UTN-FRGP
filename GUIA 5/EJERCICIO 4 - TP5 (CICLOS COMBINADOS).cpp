///Ejercicio: 4
///Autor: Brandon Erazo
///Fecha:
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
    int numero, i, numeroAnteriorPrimo, contadorDivisores;
    bool primerPrimo=true;
    bool conjuntoOrdenado=true;

    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    while(numero!=0)
    {
        contadorDivisores=0;
        for(i=2; i<numero; i++)
        {
            if (numero%i==0)
            {
                contadorDivisores++;
            }



        }
        if (contadorDivisores==0)
        {
            if(primerPrimo==true)
            {
                numeroAnteriorPrimo=numero;
                primerPrimo=false;
            }
            else
            {
                if(numeroAnteriorPrimo<numero)
                {
                    numeroAnteriorPrimo=numero;

                }
                else
                {
                    conjuntoOrdenado=false;
                }
            }
        }
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
    }
    if(conjuntoOrdenado==true)
    {
        cout<<"EL CONJUNTO ESTA ORDENADO"<<endl;
    }
    else
    {
        cout<<"EL CONJUNTO ESTA DESORDENADO"<<endl;
    }



    system ("pause");
    return 0;

}
