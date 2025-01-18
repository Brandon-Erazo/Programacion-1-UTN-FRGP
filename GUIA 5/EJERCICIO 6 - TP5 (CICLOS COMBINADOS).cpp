///Ejercicio: 6
///Autor: Brandon Erazo
///Fecha: 05/08/2023
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*6) Hacer un programa para ingresar por teclado 10 grupos compuestos por números
ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número
menor a su anterior.
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de números primos que lo componen.
b) El mínimo número par de cada uno de los grupos.
c) El anteúltimo y último número positivo de cada uno de los grupos.
Ejemplo de cómo se conforman los grupos:
-20, -5, 8, 2, 20, 35, 42, 12, 22, ........... ....80, 12, 24, 36, -5
Grupo 1 Grupo 2 Grupo 3 …… Grupo 10
 */
int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numero, numeroAnterior;

///PUNTO A)
    int y, contadorNumerosPrimosPorGrupo=0;
    int contadorTotalDeDivisores=0;

///PUNTO B)
    bool banderaMinimoPar=true;
    int minimoPar;
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

///PUNTO C)
    int anteultimoNumeroPositivo, ultimoPositivo;

    for (i=0; i<3; i++)
    {
        cout<<"INICIA EL GRUPO:" <<i+1<<endl;

        numeroAnterior=numero;

        ///PUNOT B)
        banderaMinimoPar=true;///Actualizar la bandera para cada grupo

        contadorNumerosPrimosPorGrupo=0;

        while(numero>=numeroAnterior)
        {
            numeroAnterior=numero;

            ///PUNTO A)

            contadorTotalDeDivisores=0;

            for(y=2; y<numeroAnterior; y++)
            {
                contadorTotalDeDivisores++;
            }
            if (contadorTotalDeDivisores=0)
            {
                contadorNumerosPrimosPorGrupo++;
            }

            ///PUNTO B)

            if ((numeroAnterior%2)==0)
            {
                if(banderaMinimoPar==true)
                {
                    minimoPar=numeroAnterior;
                    banderaMinimoPar=false;
                }
                else
                {
                    if (numeroAnterior<minimoPar)
                    {
                        minimoPar=numeroAnterior;
                    }

                }
            }

            ///PUNTO C

            if(numeroAnterior>0)
            {
                anteultimoNumeroPositivo= ultimoPositivo;
                ultimoPositivo= numeroAnterior;
            }


            cout<<"INGRESE UN NUMERO: ";
            cin>>numero;
        }

        cout<<"FIN DEL GRUPO: "<<i+1;
        ///PUNTO A)
        cout<<"PARA EL GRUPO "<<i+1<<" LA CANTIDAD DE NUMEROs PRIMOS QUE LO COMPONENE ES DE: "<<contadorNumerosPrimosPorGrupo<<endl;
        ///PUNTO B)
        cout<<"EL MINIMO NUMERO PAR PARA ESTE GRUPO ES EL: "<<minimoPar<<endl;
        /// PUNTO C)
        cout<<"EL ANTEULTIMO NUMERO POSITIVO ES: "<<anteultimoNumeroPositivo<< " Y EL ULTIMO NUMERO POSITIVO ES: "<<ultimoPositivo<<endl;
    }




    system ("pause");
    return 0;

}
