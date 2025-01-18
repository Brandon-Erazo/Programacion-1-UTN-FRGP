///Ejercicio: 32
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
///Declaro mis variables con el formato camelCase
    int i, numeroArticulo, claseArticulo, articuloMasCaro1, articuloMasCaro2, articuloMasCaro3;
    float precioUnitario, montoMasCaroClaseArticulo1, montoMasCaroClaseArticulo2, montoMasCaroClaseArticulo3;
    bool banderaArticulo1= true, banderaArticulo2=true, banderaArticulo3=true;
    int contadorClase1=0, contadorClase2 =0, contadorClase3=0;
    int acumuladorClase1=0, acumuladorClase2=0, acumuladorClase3=0;
    float promedioClase1, promedioClase2, promedioClase3;

    for(i=0; i<10; i++)
    {
        cout<<"INGRESE NUMERO DE ARTICULO (1 A 10): ";
        cin>>numeroArticulo;
        cout<<"INGRRESE EL PRECIO UNITARIO: ";
        cin>>precioUnitario;
        cout<<"INGRESE LA CLASE DE ARTICULO (1,2,3): ";
        cin>>claseArticulo;

        switch(claseArticulo)
        {
        case 1:
            if(banderaArticulo1==true){
                banderaArticulo1=false;
                articuloMasCaro1=numeroArticulo;
                montoMasCaroClaseArticulo1=precioUnitario;
            }
            else{
                if(precioUnitario>montoMasCaroClaseArticulo1){
                    montoMasCaroClaseArticulo1=precioUnitario;
                    articuloMasCaro1=numeroArticulo;
                }
            }
            ///PUNTO B)
            acumuladorClase1+=precioUnitario;
            contadorClase1++;
            break;
        case 2:
            if(banderaArticulo2==true){
                banderaArticulo2=false;
                articuloMasCaro2=numeroArticulo;
                montoMasCaroClaseArticulo2=precioUnitario;
            }
            else{
                if(precioUnitario>montoMasCaroClaseArticulo2){
                    montoMasCaroClaseArticulo2=precioUnitario;
                    articuloMasCaro2=numeroArticulo;
                }
            }
            ///PUNTO B)
            acumuladorClase2+=precioUnitario;
            contadorClase2++;
            break;
        case 3:
            if(banderaArticulo3==true){
                banderaArticulo3=false;
                articuloMasCaro3=numeroArticulo;
                montoMasCaroClaseArticulo3=precioUnitario;
            }
            else{
                if(precioUnitario>montoMasCaroClaseArticulo3){
                    montoMasCaroClaseArticulo3=precioUnitario;
                    articuloMasCaro3=numeroArticulo;
                }
            }
            ///PUNTO B)
            acumuladorClase3+=precioUnitario;
            contadorClase3++;
            break;
        default:
            break;
        }
    }
        ///PUNTO A)
        cout<<"PARA LA CLASE DE ARTICULO 1 SU NUMERO DE ARTICULO MAS CARO FUE: "<<articuloMasCaro1<<endl;
        cout<<"PARA LA CLASE DE ARTICULO 2 SU NUMERO DE ARTICULO MAS CARO FUE: "<<articuloMasCaro2<<endl;
        cout<<"PARA LA CLASE DE ARTICULO 3 SU NUMERO DE ARTICULO MAS CARO FUE: "<<articuloMasCaro3<<endl;

        ///PUNTO B)
    promedioClase1=(float)acumuladorClase1/contadorClase1;
    promedioClase2=(float)acumuladorClase2/contadorClase2;
    promedioClase3=(float)acumuladorClase3/contadorClase3;

    if((promedioClase1>promedioClase2) && (promedioClase1>promedioClase3)){
        cout<<"LA CLASE DE ARTICULO CON MAYOR PRECIO PROMEDIO ES LA: 1 CON: $"<<promedioClase1<<endl;
    }
    else{
        if( (promedioClase2>promedioClase1) && (promedioClase2>promedioClase3)){
            cout<<"LA CLASE DE ARTICULO CON MAYOR PRECIO PROMEDIO ES LA: 2 CON: $"<<promedioClase2<<endl;
        }
        else{
            cout<<"LA CLASE DE ARTICULO CON MAYOR PRECIO PROMEDIO ES LA: 3 CON: $"<<promedioClase3<<endl;
        }
    }

    system ("pause");
    return 0;

}
