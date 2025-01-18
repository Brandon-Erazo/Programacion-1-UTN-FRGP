///Ejercicio: 5
///Autor: Brandon Erazo
///Fecha:
///Comentario: Guia 5 - Ciclos Combinados

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

int main (){
int i, numero;
int numerosTotales, acumluadorNumeros;
float promedio;
int valorMinimo, grupoMinimo, posicion, x;
bool minimoValor=true;
float mayorPromedio=0;
int mayorGrupoConPromedio;

for(i=0;i<2;i++){
    cout<<"INGRESE UN NUMERO: ";
    cin>>numero;

    numerosTotales=0;
    acumluadorNumeros=0;
    x=0;
    while(numero!=0)
        {
            ///Punto A
        numerosTotales++;
        acumluadorNumeros+=numero;

            ///PUNTO B
            x++;
            if (minimoValor==true){
                valorMinimo=numero;
                posicion=x;
                grupoMinimo=i+1;
                minimoValor=false;
            }
            else{
                if(numero<valorMinimo){
                    valorMinimo=numero;
                    posicion=x;
                    grupoMinimo=i+1;
                }
            }



        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;

        }
        ///PUNTO A
        promedio= (float) acumluadorNumeros/numerosTotales;
        cout<<"EL PROMEDIO DE VALORES DE ESTE GRUPO ES DE: "<<promedio<<endl;

        ///PUNTO C
        if(promedio>mayorPromedio){
            mayorPromedio=promedio;
            mayorGrupoConPromedio=i+1;
        }
}
        ///PUNTO B
        cout<<"EL VALOR MINIMO ES: "<<valorMinimo<<endl;
        cout<<"PERTENECE AL GRUPO: "<<grupoMinimo<<" Y SU POSICION ES: "<<posicion<<endl;
        ///PUNTO C
        cout<<"EL MAYOR DE LOS PROMEDIOS ES: "<<mayorPromedio<<" Y PERTENECE AL GRUPO: "<<mayorGrupoConPromedio<<endl;


system ("pause");
return 0;

}
