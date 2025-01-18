///Ejercicio:
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
    int i, numero, contadorNumerosTotales, contadorNumerosImpares,grupoConMayorPorcentaje;
    float mayorPorcentejeImpares, porcentajeNumerosImpares;
    bool banderaMayorPorcentaje=true;
    int ultimoNumeroPrimo, posicionPrimo;
    int contadorOrdenadosPorGrupo=0;

    for (i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>numero;
       int  mayor=numero;
       bool banderaOrdenados=true;
        ///PUNTO A
        contadorNumerosTotales=0;
        contadorNumerosImpares=0;

        int orden=0;
        bool banderaNohayprimos=false;
        while(numero!=0)
        {
            contadorNumerosTotales++;
            if (numero%2!=0)
            {
                contadorNumerosImpares++;
            }


            ///PUNTO B
            orden++;
            int contadorDivisores=0;
            int x;

            for(x=2; x<numero; x++)
            {
                if(numero%2==0)
                {
                    contadorDivisores++;
                }
            }
            if(contadorDivisores==0)
            {
                ultimoNumeroPrimo=numero;
                posicionPrimo=orden;
            }
            else
            {
                banderaNohayprimos=true;
            }

            if(numero>=mayor){
                mayor=numero;
            }
            else{
                banderaOrdenados=false;
            }
            cout<<"INGRESE UN NUMERO: ";
            cin>>numero;
        }
        ///PUNTO A
        porcentajeNumerosImpares=(float)(contadorNumerosImpares*100)/contadorNumerosTotales;
        if(banderaMayorPorcentaje==true)
        {
            mayorPorcentejeImpares=porcentajeNumerosImpares;
            banderaMayorPorcentaje=false;
        }
        else
        {
            if (porcentajeNumerosImpares>mayorPorcentejeImpares)
            {
                mayorPorcentejeImpares=porcentajeNumerosImpares;
                grupoConMayorPorcentaje=i+1;
            }
        }

        ///PUNTO B
        if(banderaNohayprimos==false)
        {
            cout<<"EL ULTIMO PRIMO ES: "<<ultimoNumeroPrimo<<endl;
            cout<<"Y SU POSICION ES: "<<posicionPrimo<<endl;
        }
        if (banderaOrdenados==true){
            contadorOrdenadosPorGrupo++; ///PUNTO C
        }
    }
///PUNTO A
    cout<<"EL GRUPO CON MAYOR % DE NUMEROS IMPARES ES EL: "<<grupoConMayorPorcentaje<<endl;

///PUNTO C
cout<<"LOS CANTIDAD DE GRUPOS QUE ESTAN ORDENADOS DE MAYOR A MENOR ES DE"<<contadorOrdenadosPorGrupo<<endl;


    system ("pause");
    return 0;

}
