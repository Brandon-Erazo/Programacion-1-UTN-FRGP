///Ejercicio: 29
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
///Declaro mis variables en el formato camelCase
    int i, y, numero, grupoConMayorPromedio;
    bool banderaMayorPromedio=true;
    float mayorPromedio;

    for (i=0; i<3; i++)
    {
        cout<<"GRUPO: "<<i+1<<endl;

    int acumuladorNumerosPorGrupo=0, posicionMinimoValor, minimoValor;
    bool banderaMinimoValor=true;
    float promedioPorGrupo;

        for(y=0; y<5; y++)
        {
            cout<<"INGRESE UN NUMERO: ";
            cin>>numero;

            ///PUNTO A)
            acumuladorNumerosPorGrupo+=numero;

            ///PUNTO B)
            if(banderaMinimoValor==true){
                banderaMinimoValor=false;
                minimoValor=numero;
                posicionMinimoValor=y+1;
            }
            else {
                if(numero<minimoValor){
                    minimoValor=numero;
                    posicionMinimoValor=y+1;
                }
            }

        }

        cout<<"FIN GRUPO: "<<i+1<<endl;
        ///PUNTO A)
        promedioPorGrupo= (float)acumuladorNumerosPorGrupo/5;
        cout<<"EL PROMEDIO PARA EL GRUPO "<<i+1<<" ES DE: "<<promedioPorGrupo<<endl;

        ///PUNTO B)
        cout<<"PARA EL GRUPO "<<i+1<<" SU VALOR MINIMO ES: "<<minimoValor<<" Y SU POSICION ES: "<<posicionMinimoValor<<endl;

        ///PUNTO C)
        if(banderaMayorPromedio==true){
            banderaMayorPromedio=false;
            mayorPromedio=promedioPorGrupo;
        }
        else{
            if(promedioPorGrupo>mayorPromedio){
                mayorPromedio=promedioPorGrupo;
                grupoConMayorPromedio=i+1;
            }
        }
    }

        ///PUNTO C)
        cout<<"EL GRUPO CON MAYOR PROMEDIO ES: "<<grupoConMayorPromedio<<" Y SU PROMEDIO MAYOR ES: "<<mayorPromedio<<endl;



    system ("pause");
    return 0;

}
