///Ejercicio: Problema 3
///Autor: Brandon Erazo
///Fecha: 05/08/2024
///Comentario: LAB 1 2019 1C - TEMA 4

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*Problema 3
El laboratorio de análisis clínicos Vastaggios registró la información de los turnos de todos los pacientes del día de ayer. Cada registro contiene:
-	Código de estudio (1 a 10)
-	Código de Paciente (entero)
-	Edad (entero)
-	Género (‘F’ - Femenino, ‘M’ - Masculino)
-	Valor de la consulta (float)

Hubo 5 turnos para cada uno de los 10 estudios distintos que el laboratorio realiza. La información se encuentra agrupada pero no ordenada por código de estudio. Se pide calcular e informar:
A)	El código de paciente con la consulta de menor valor que se haya realizado el estudio con código 2. Indicar también la edad del paciente.
B)	La cantidad de turnos en la que pacientes de más de 60 años hayan abonado menos de $5000 el valor de la consulta.
C)	Por cada código de estudio, el total facturado discriminado por género. Es decir, cuánto pagaron en total las mujeres y cuánto los hombres.
*/

int main (){
int i, x, codigoDeEstudio, codigoDePaciente,edad;
char genero;
float valorConsulta;
///PUNTO A
bool banderaMenorValor=true;
float menorValorConsulta;
int menorCodigoDePacienteConMenorValor, edadConMenorValorConsulta;
///PUNTO B
int cantidadTurnos=0;
///PUNTO C
float totalFacturadoMujeres, totalFacturadoHombres;
int codigoDeEstudioAnterior;

for(i=1;i<=10;i++){
    ///INICIO DE GRUPO

    totalFacturadoHombres=0;
    totalFacturadoMujeres=0;

    for(x=1;x<=5;i++){///REGISTRO
        cout<<"INGRESE EL CODIGO DE ESTUDIO(1 A 10): ";
        cin>>codigoDeEstudio;
        cout<<"INGRESE EL CODIGO DEL PACIENTE: ";
        cin>>codigoDePaciente;
        cout<<"INGRESE LA EDAD DEL PACIENTE: ";
        cin>>edad;
        cout<<"INGRESE EL GENERO (‘F’-Femenino, ‘M’-Masculino): ";
        cin>>genero;
        cout<<"INGRESE EL VALOR DE LA CONSULTA: ";
        cin>>valorConsulta;

        ///PUNTO A
        if(codigoDeEstudio==2){
            if(banderaMenorValor==true){
                menorValorConsulta=valorConsulta;
                menorCodigoDePacienteConMenorValor=codigoDePaciente;
                edadConMenorValorConsulta=edad;
                banderaMenorValor=false;
            }
            else{
                if(valorConsulta<menorValorConsulta){
                menorValorConsulta=valorConsulta;
                menorCodigoDePacienteConMenorValor=codigoDePaciente;
                edadConMenorValorConsulta=edad;
                }
            }
        }
        ///PUNTO B
        if((edad>60)&&(valorConsulta<5000)){
            cantidadTurnos++;
        }
        ///PUNTO C
        if(genero=='F' || genero=='f'){
            totalFacturadoMujeres+=valorConsulta;
        }
        else{
            totalFacturadoHombres+=valorConsulta;
        }
        codigoDeEstudioAnterior=codigoDeEstudio;

    }
    ///PUNTO C
    cout<<"PARA EL ESTUDIO "<<codigoDeEstudioAnterior<<" EL TOTAL FACTURADO POR LAS MUJERES ES DE: $"<<totalFacturadoMujeres<<endl;
    cout<<"PARA EL ESTUDIO "<<codigoDeEstudioAnterior<<" EL TOTAL FACTURADO POR LOS HOMBRES ES DE: $"<<totalFacturadoHombres<<endl;
}
    ///PUNTO A
    cout<<"EL CODIGO DE PACIENTE CON MENOR VALOR DE CONSULTA EN EL ESTUDIO 2 ES: "<<menorCodigoDePacienteConMenorValor<<endl;
    cout<<"Y SU EDAD ES: "<<edadConMenorValorConsulta<<endl;
    ///PUNTO B
    cout<<"LA CANTIDAD DE TURNOS CON PTES CON MAS DE 60 AÑOS Y QUE HAN ABONADO MENOS DE $5000 ES DE: "<<cantidadTurnos;


system ("pause");
return 0;

}
