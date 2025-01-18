///Ejercicio:PUNTO 1 DEL  1ER PARCIAL | 1 CUATRIMESTRE 2023 |
///Autor: Brandon Erazo
///Fecha:06/08/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*Una empresa de transporte tiene un conjunto de resistros con el
trabajo realizado por sus 6 conductores el día de ayer. Cada registro
tiene los siguientes datos:
- Número de conductor
- Edad
- Cantidad de minutos de adelanto (entero)
- Turno (N: noche; M: mañana; T: tarde) (char)
Los registros no tienen ningún orden establecido.
Se pide desarrollar un programa en CodeBlocks para resolver los siguientes puntos:
1. La cantidad total de minutos de adelanto en cada turno.
2. La cantidad de conductores con más de 30 años.
3. El número de conductor con más cantidad de minutos de adelant
*/
int main ()
{
///Declaro mis variables con el formato camelCase
    int i, numeroConductor, edad, cantidadMinutosAdelantado;
    char turno;
///PUNTO 1
    int acumuladorMinutosAdelantadoTurnoN=0, acumuladorMinutosAdelantadoTurnoM=0, acumuladorMinutosAdelantadoTurnoT=0;
///PUNTO 2
    int contadorConductoresMayoresA30=0;
///PUNTO 3
int mayorConductorConMinutosAdelantado, MayorMinutosAdelantado=0;

    for (i=0; i<6; i++) ///ESTRUCTURA PRINCIPAL
    {
        cout<<"INGRESE EL NUMERO DEL CONDUCTOR: ";
        cin>>numeroConductor;
        cout<<"INGRESE LA EDAD: ";
        cin>>edad;
        cout<<"INGRESE LA EDAD DE MINUTOS ADELANTADO: ";
        cin>>cantidadMinutosAdelantado;
        cout<<"INGRESE EL TURNO: ";
        cin>>turno;

        ///PUNTO 1
        switch(turno)
        {
        case 'm':
        case 'M':
            acumuladorMinutosAdelantadoTurnoM+=cantidadMinutosAdelantado;
            break;
        case 't':
        case 'T':
            acumuladorMinutosAdelantadoTurnoT+=cantidadMinutosAdelantado;
            break;
        case 'n':
        case 'N':
            acumuladorMinutosAdelantadoTurnoN+=cantidadMinutosAdelantado;
            break;
        default:
            break;
        }

        ///PUNTO 2
        if(edad>30){
            contadorConductoresMayoresA30++;
        }

        ///PUNTO 3
        if(cantidadMinutosAdelantado>MayorMinutosAdelantado){
            MayorMinutosAdelantado=cantidadMinutosAdelantado;
            mayorConductorConMinutosAdelantado=numeroConductor;
        }

    }

    ///PUNTO 1
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"LA CANTIDAD DE MINUTOS ADELANTADO PARA EL TURNO MAÑANA ES DE: "<<acumuladorMinutosAdelantadoTurnoM<<endl;
    cout<<"LA CANTIDAD DE MINUTOS ADELANTADO PARA EL TURNO TARDE ES DE: "<<acumuladorMinutosAdelantadoTurnoT<<endl;
    cout<<"LA CANTIDAD DE MINUTOS ADELANTADO PARA EL TURNO NOCHE ES DE: "<<acumuladorMinutosAdelantadoTurnoN<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    ///PUNTO 2
    cout<<"LA CANTIDAD DE CONDUCTORES MAYORES A 30 ES DE: "<<contadorConductoresMayoresA30<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"EL NUMERO DE CONDUCTOR CON MAS CANTIDAD DE MINUTOS ADELANTADO ES: "<<mayorConductorConMinutosAdelantado<<endl;
    cout<<"CON LA CANTIDAD DE: "<<MayorMinutosAdelantado<<" MINUTOS"<<endl;
     cout<<"------------------------------------------------------------------------"<<endl;
    system ("pause");
    return 0;

}
