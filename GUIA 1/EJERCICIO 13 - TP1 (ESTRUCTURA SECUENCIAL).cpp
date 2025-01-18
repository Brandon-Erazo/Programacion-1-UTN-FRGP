///Ejercicio: 13
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial

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
    int importeRetirar;
    int cantidadMil, restoDeMil, cantidadQuinientos, restoQuinientos, cantidadDosceintos, restoDocientos, cantidadCien;

///Ingreso los datos por teclado
    cout<<"INGRESE EL IMPORTE TOTAL A RETIRAR: ";
    cin>>importeRetirar;

///Realizo las operaciones aritmeticas necesarias calcular la cantidade de cada uno de los billetes
    cantidadMil = (importeRetirar / 1000);
    restoDeMil = (importeRetirar % 1000);
    cantidadQuinientos = (restoDeMil / 500);
    restoQuinientos = (restoDeMil %500);
    cantidadDosceintos = (restoQuinientos / 200);
    restoDocientos = (restoQuinientos % 200);
    cantidadCien = (restoDocientos / 100);

///Informo el resultado por pantalla
    cout<<"SE DEBEREN ENTREGAR: "<<cantidadMil<<" BILLETES DE $1000, "<<cantidadQuinientos<< " BILLETES DE $500, "<<cantidadDosceintos<<" BILLETES DE $200 Y "<<cantidadCien<<" BILLETES DE $100."<<endl;


    system ("pause");
    return 0;

}
