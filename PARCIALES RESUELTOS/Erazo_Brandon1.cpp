///Ejercicio: PUNTO 1 DEL  1ER PARCIAL | 2 CUATRIMESTRE 2023 |
///Autor: Brandon Erazo
///Fecha: 23/11/2023
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*La Asociación de Papi Fútbol tiene un conjunto de registros con los clubes y jugadores que participaron de los partidos durante el último
mes. Cada registro tiene los siguientes datos:
Número de Club
Número de jugador
Número de la camiseta
Cantidad de faltas que cometió
Los registros se encuentran agrupados por número de club. Por cada club hay 5 jugadores; no se sabe la cantidad de clubes, y para indicar el
fin de los datos se puso un número de club igual a 0.
Se pide desarrollar un programa en CodeBlocks para resolver los siguientes puntos:
1. Por cada club la cantidad de faltas entre todos sus jugadores
2. La cantidad de jugadores (entre todos los clubes) con la camiseta 20.
3. El número de jugador con más cantidad de faltas, indicando a que club pertenece*/

int main ()
{
    int i, numeroDeClub, numeroDeJugador, numeroDeCamiseta, cantidadFaltas;
///PUNTO A
    int numeroDeClubAnterior, acumuladorFaltas;
///PUNTO B
    int contadorJugadores20=0;///Variable global
///PUNTO C
    int mayorCantidadDeFaltas, numeroDeJugadorConMayorFaltas, clubConmayorFaltas;
    bool mayorFaltas=true;

    cout<<"INGRESE EL NUMERO DE CLUB: ";
    cin>>numeroDeClub;

    while(numeroDeClub!=0)
    {

        acumuladorFaltas=0;

        for(i=1; i<=5; i++)
        {
            cout<<"INGRESE EL NUMERO DE JUGADOR: ";
            cin>>numeroDeJugador;
            cout<<"NUMERO DE CAMISETAS: ";
            cin>>numeroDeCamiseta;
            cout<<"INGRESE LA CANTIDAD DE FALTAS: ";
            cin>>cantidadFaltas;

            ///PUNTO A
            acumuladorFaltas+=cantidadFaltas;
            numeroDeClubAnterior=numeroDeClub;///PUNTO A

            ///PUNTO B
            if(numeroDeCamiseta==20)
            {
                contadorJugadores20++;
            }

            ///PUNTO C
            if(mayorFaltas==true)
            {
                numeroDeJugadorConMayorFaltas=numeroDeJugador;
                mayorCantidadDeFaltas=cantidadFaltas;
                clubConmayorFaltas=numeroDeClub;
                mayorFaltas=false;
            }
            else
            {
                if(cantidadFaltas>=mayorCantidadDeFaltas)
                {
                    mayorCantidadDeFaltas=cantidadFaltas;
                    numeroDeJugadorConMayorFaltas=numeroDeJugador;
                    clubConmayorFaltas=numeroDeClub;
                }
            }

            cout<<"INGRESE EL NUMERO DE CLUB: ";
            cin>>numeroDeClub;

        }
        ///PUNTO A
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"PARA EL GRUPO: "<<numeroDeClubAnterior<<" SU CANTIDAD DE FALTAS ES DE: "<<acumuladorFaltas<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
    }

    ///PUNTO B
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"LA CANTIDAD DE JUGADORES CON LA CAMISETA 20 ES DE: "<<contadorJugadores20<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    ///PUNTO C
    cout<<"EL JUGADOR CON MAYOR FALTAS ES EL NUMERO: "<<numeroDeJugadorConMayorFaltas<<" Y PERTENECE AL GRUPO "<<clubConmayorFaltas<<endl;
    cout<<"CON UNA CANTIDA DE FALTAS DE: "<<mayorCantidadDeFaltas<<endl;


    system ("pause");
    return 0;

}
