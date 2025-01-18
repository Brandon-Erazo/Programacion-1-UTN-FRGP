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

/*25) Hacer un programa para ingresar por teclado los saldos de los clientes de un banco.
Cada registro contiene los siguientes datos:
- Número del cliente
- Número de sucursal (1, 2, 3 o 4)
- Saldo del cliente
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.
Se pide determinar e informar.
a) El número de sucursal con mayor porcentaje de clientes con saldo superior a $ 20.000.
b) El número de cliente con mayor saldo, indicando también de que número de sucursal ese
ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes. Se listan 4
resultados*/

int main ()
{
///Declaro mis variable con el formato camelCase
    int numeroCliente, numeroSucursal;
    float saldoCliente;
    int contadorTotalDeClientes=0, contadorClientesSucursal1=0, contadorClientesSucursal2=0, contadorClientesSucursal3=0, contadorClientesSucursal4=0;
    float porcentajeClientesSucursal1, porcentajeClientesSucursal2, porcentajeClientesSucursal3, porcentajeClientesSucursal4;

    ///PUNTO B
    int clienteConMayorSaldo, sucursalConMayorSaldo;
    bool banderaMayorSaldo=true;
    float mayorSaldo;

    ///PUNTO C
    float acumuladorSaldosSucursal1=0, acumuladorSaldosSucursal2=0, acumuladorSaldosSucursal3=0, acumuladorSaldosSucursal4=0;

    cout<<"INGRESE EL NUMERO DE CLIENTE: ";
    cin>>numeroCliente;
    cout<<"INGRESE EL NUMERO DE SUCURSAL: ";
    cin>>numeroSucursal;

    while(numeroSucursal!=10)
    {
        ///PUNTO A
        contadorTotalDeClientes++;

        cout<<"INGRESE EL SALDO DEL CLIENTE: ";
        cin>>saldoCliente;

        switch(numeroSucursal)
        {
        case 1:
            if(saldoCliente>20000)
            {
                contadorClientesSucursal1++;
            }
            ///PUNTO C
            acumuladorSaldosSucursal1+=saldoCliente;
            break;
        case 2:
            if (saldoCliente>20000)
            {
                contadorClientesSucursal2++;
            }
            ///PUNTO C
            acumuladorSaldosSucursal2+=saldoCliente;
            break;
        case 3:
            if(saldoCliente>20000)
            {
                contadorClientesSucursal3++;
            }
            ///PUNTO C
            acumuladorSaldosSucursal3+=saldoCliente;
            break;
        case 4:
            if(saldoCliente>20000)
            {
                contadorClientesSucursal4++;
            }
            ///PUNTO C
            acumuladorSaldosSucursal4+=saldoCliente;
            break;
        default:
            break;
        }

        ///PUNTO B
        if(banderaMayorSaldo==true)
        {
            banderaMayorSaldo=false;
            mayorSaldo=saldoCliente;
            clienteConMayorSaldo=numeroCliente;
            sucursalConMayorSaldo=numeroSucursal;
        }
        else
        {
            if(saldoCliente>mayorSaldo)
            {
                mayorSaldo=saldoCliente;
                clienteConMayorSaldo=numeroCliente;
                sucursalConMayorSaldo=numeroSucursal;
            }
        }

        cout<<"INGRESE EL NUMERO DE CLIENTE: ";
        cin>>numeroCliente;
        cout<<"INGRESE EL NUMERO DE SUCURSAL: ";
        cin>>numeroSucursal;
    }

    ///PUNTO A
    porcentajeClientesSucursal1= (float) (contadorClientesSucursal1 * 100) /contadorTotalDeClientes;
    porcentajeClientesSucursal2= (float) (contadorClientesSucursal2 * 100) / contadorTotalDeClientes;
    porcentajeClientesSucursal3= (float) (contadorClientesSucursal3 * 100) / contadorTotalDeClientes;
    porcentajeClientesSucursal4= (float) (contadorClientesSucursal4 * 100) / contadorTotalDeClientes;

    if((porcentajeClientesSucursal1>porcentajeClientesSucursal2)&&(porcentajeClientesSucursal1>porcentajeClientesSucursal3)&&(porcentajeClientesSucursal4))
    {
        cout<<"LA SUCURSAL CON MAYOR PORCENTAJE DE CLIENTES ES EL NUMERO: 1"<<endl;
    }
    else
    {
        if((porcentajeClientesSucursal2>porcentajeClientesSucursal1)&&(porcentajeClientesSucursal2>porcentajeClientesSucursal3)&&(porcentajeClientesSucursal2>porcentajeClientesSucursal4))
        {
            cout<<"LA SUCURSAL CON MAYOR PORCENTAJE DE CLIENTES ES EL NUMERO: 2"<<endl;
        }
        else
        {
            if((porcentajeClientesSucursal3>porcentajeClientesSucursal1)&& (porcentajeClientesSucursal3>porcentajeClientesSucursal2)&&(porcentajeClientesSucursal3>porcentajeClientesSucursal4))
            {
                cout<<"LA SUCURSAL CON MAYOR PORCENTAJE DE CLIENTES ES EL NUMERO: 3"<<endl;
            }
            else
            {
                cout<<"LA SUCURSAL CON MAYOR PORCENTAJE DE CLIENTES ES EL NUMERO: 4"<<endl;
            }
        }
    }
    ///PUNTO B
    cout<<"EL NUMERO DE CLIENTE CON MAYOR SALDO ES: "<<clienteConMayorSaldo<< " Y PERTENECE A LA SUCURSAL: "<<sucursalConMayorSaldo<<endl;

    ///PUNTO C
    cout<<"PARA LA SUCURAL NUMERO 1 SU SALDO TOTAL ES DE: $"<<acumuladorSaldosSucursal1<<endl;
    cout<<"PARA LA SUCURAL NUMERO 2 SU SALDO TOTAL ES DE: $"<<acumuladorSaldosSucursal2<<endl;
    cout<<"PARA LA SUCURAL NUMERO 3 SU SALDO TOTAL ES DE: $"<<acumuladorSaldosSucursal3<<endl;
    cout<<"PARA LA SUCURAL NUMERO 4 SU SALDO TOTAL ES DE: $"<<acumuladorSaldosSucursal4<<endl;

    system ("pause");
    return 0;

}
