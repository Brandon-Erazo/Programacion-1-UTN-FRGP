///Ejercicio: 2
///Autor: Brandon Erazo
///Fecha: 29/07/2024
///Comentario: Guia 5 - Ciclos Combinados

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*2) Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
a) Para cada uno de los grupos el máximo de los números pares y el máximo de los
números impares.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
c) Cuantos números positivos había en total entre los 10 grupos.
*/

int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, maximoPar, maximoImpar;
    bool banderaMaximoPar = true, banderaMaximoImpar= true;
    int numerospositivostotales =0;

    for(i=0; i<10; i++)
    {
        cout<<"INICIO GRUPO "<<i+1<<endl;
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        ///PUNTO B
        int contadorPositivos=0, contadorNegativos=0, ContadorNumerosTotales=0;
        float porcentajePositivos=0, PorcentajeNegativos=0;

        while(numero!=0)
        {
            ///PUNTO B
            ContadorNumerosTotales++;
            ///PUNTO A
            if(numero%2==0)
            {
                if(banderaMaximoImpar==true)
                {
                    maximoPar=numero;
                    banderaMaximoPar=false;
                }
                else
                {
                    if (numero>maximoPar)
                    {
                        maximoPar=numero;
                    }
                }
            }
            else
            {
                if(banderaMaximoImpar==true)
                {
                    maximoImpar=numero;
                    banderaMaximoImpar=false;
                }
                else
                {
                    if (numero>maximoImpar)
                    {
                        maximoImpar=numero;
                    }
                }
            }

            ///PUNTO B
            if (numero>0)
            {
                contadorPositivos++;
                numerospositivostotales++; ///PUNTO C
            }
            else
            {
                if(numero<0)
                {
                    contadorNegativos++;
                }
            }

            cout<<"INGRESE UN NUMERO: ";
            cin>>numero;

        }

        ///PUNTO A
        cout<<"EL MAXIMO DE LOS PARES ES: "<<maximoPar<<" Y EL MAXIMO DE LOS IMPARES ES: "<<maximoImpar<<endl;

        ///PUNTO B
        porcentajePositivos= (float)(contadorPositivos * 100) / ContadorNumerosTotales;
        PorcentajeNegativos= (float)(contadorNegativos * 100) / ContadorNumerosTotales;
        cout<<"EL PORCENTAJE DE NUMEROS POSITIVOS ES DE: "<<porcentajePositivos<<"%"<<endl;
        cout<<"EL PORCENTAJE DE NUMEROS NEGATIVOS ES DE: "<<PorcentajeNegativos<<"%"<<endl;

        cout<<"FIN GRUPO "<<i+1<<endl;
    }
///PUNTO C
    cout<<"LA POSITIVOS TOTALES ENTRE LOS 10 GRUPOS ES DE: "<<numerospositivostotales<<endl;

    system ("pause");
    return 0;

}
