///Ejercicio: PUNTO 1 | MODELO PRIMER PARCIAL | TEMA 4
///Autor: Brandon Erazo
///Fecha: 06/08/2024
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
    int codigoProducto, stockDisponible;
    char tipoProducto;
    float precioUnitario;
    ///PUNTO A
    float mayorPrecioTipoB=0;
    int mayorCodigoProductoTipoB, stockDisponibleTipoB;
    ///PUNTO B
    float precioPromedioTipoS, acumuladorPrecioTotalTipoS=0;
    int contadorTotalTipoS=0;
    ///PUNTO C
    int acumuladorTotalDeStocks=0, acumuladorStockTipoB=0, acumuladorStockTipoS=0, acumuladorStockTipoF=0;
    float porcentakeStockTipoB, porcentakeStockTipoS, porcentakeStockTipoF;

    cout<<"INGRESE EL CODIGO DEL PRODUCTO: ";
    cin>>codigoProducto;

    while(codigoProducto!=0)
    {

        cout<<"INGRESE TIPO DE PRODUCTO('B' - Bebida,  'S' - Snack,  'F' - Fiambre): ";
        cin>>tipoProducto;
        cout<<"INGRESE STOCK DISPONIBLE: ";
        cin>>stockDisponible;
        cout<<"INGRESE EL PRECIO UNITARIO: ";
        cin>>precioUnitario;

        acumuladorTotalDeStocks+=stockDisponible;

        switch(tipoProducto)
        {
        case 'B':
        case 'b':   ///PUNTO A
            if(precioUnitario>mayorPrecioTipoB)
            {
                mayorCodigoProductoTipoB=codigoProducto;
                stockDisponibleTipoB=stockDisponible;
            }
            ///PUNTO C
            acumuladorStockTipoB+=stockDisponible;
            break;
        case 'S':
        case 's':  ///PUNTO B
            contadorTotalTipoS++;
            acumuladorPrecioTotalTipoS+=precioUnitario;
            ///PUNTO C
            acumuladorStockTipoS+=stockDisponible;
            break;
        case 'F':
        case 'f':
            ///PUNTO C
            acumuladorStockTipoF+=stockDisponible;
            break;
        default:
            break;
        }


        cout<<"INGRESE EL CODIGO DEL PRODUCTO: ";
        cin>>codigoProducto;
    }

    ///PUNTO A
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"EL CODIGO DE PRODUCTO CON MAYOR PRECIO DE TIPO BEBIDA ES: "<<mayorCodigoProductoTipoB<<" CON UN STOCK DE: "<<stockDisponibleTipoB<<" UNIDADES "<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    ///PUNTO B
    precioPromedioTipoS= (float) acumuladorPrecioTotalTipoS/contadorTotalTipoS;
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"EL PRECIO PROMEDIO DE LOS PRODUCTOS DE TIPO SNACK ES DE: $"<<precioPromedioTipoS<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    ///PUNTO C
    porcentakeStockTipoB= (float) (acumuladorStockTipoB*100)/acumuladorTotalDeStocks;
    porcentakeStockTipoF= (float) (acumuladorStockTipoF*100)/acumuladorTotalDeStocks;
    porcentakeStockTipoS= (float) (acumuladorStockTipoS*100)/acumuladorTotalDeStocks;
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"EL PORCENTAJE DE UNIDADES STOCK DEL PRODUCTO BEBIDA ES: "<<porcentakeStockTipoB<<"%"<<endl;
    cout<<"EL PORCENTAJE DE UNIDADES STOCK DEL PRODUCTO SNACK ES: "<<porcentakeStockTipoS<<"%"<<endl;
    cout<<"EL PORCENTAJE DE UNIDADES STOCK DEL PRODUCTO FIAMBRE ES: "<<porcentakeStockTipoF<<"%"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    system ("pause");
    return 0;

}
