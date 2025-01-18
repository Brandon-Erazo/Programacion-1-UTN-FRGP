///Ejercicio: 16
///Autor: Brandon Erazo
///Fecha: 18/08/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*16) Una empresa comercializa 20 tipos de artículos y por cada venta realizada genera un
registro con los siguientes datos:
 - Número de Artículo (1 a 20)
 - Cantidad Vendida
Puede haber varios registros para el mismo artículo y el último registro se indica cuando se
ingresa un número de artículo igual a 0.
Se pide determinar e informar:
a) El número de artículo que más se vendió en total.
b) Los números de artículos que no registraron ventas.
c) Cuantas unidades se vendieron del número de artículo 10.*/

int main ()
{
    int i, cantidadVendida, numeroArticulo, vecArticulos[20]= {0};
    ///PUNTO A
    int maximoArticulo=0, numeroArticuloMaximo;

    cout<<"INGRESE EL NUMERO DE ARTICULO: ";
    cin>>numeroArticulo;
    while(numeroArticulo!=0)
    {
        cout<<"INGRESE LA CANTIDAD VENDIDA: ";
        cin>>cantidadVendida;
        ///PUNTO A | PUNTO B
        vecArticulos[numeroArticulo-1]+=cantidadVendida;


        cout<<"INGRESE EL NUMERO DE ARTICULO: ";
        cin>>numeroArticulo;
    }

    maximoArticulo=vecArticulos[0];
    numeroArticuloMaximo=1;

    for(i=1; i<20; i++)
    {
        if(vecArticulos[i]>maximoArticulo)
        {
            maximoArticulo=vecArticulos[i];
            numeroArticuloMaximo=i+1;
        }

    }
    ///PUNTO A
    cout<<"EL NUMERO DE ARTICULO QUE MAS SE VENDIO ES: "<<numeroArticuloMaximo<<endl;

    ///PUNTO B
    cout<<"LOS NUMEROS DE ARTICULOS QUE NO REGISTRARON VENTAS SON: "<<endl;
    for(i=0; i<20; i++)
    {
        if(vecArticulos[i]==0)
        {
            cout<<i+1<<"\t";
        }
    }
    cout<<endl;

    ///PUNTO C
    cout<<"LA CANTIDAD DE UNIDADES QUE SE VENDIERON DEL ARTICULO 10 ES: "<<vecArticulos[9]<<endl;

    system ("pause");
    return 0;

}
