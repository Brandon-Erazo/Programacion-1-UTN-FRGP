///Ejercicio: PUNTO 3 | MODELO PARCIAL 1 2023 | 2 CUATRIMESTRE 2023
///Autor: Brandon Erazo
///Fecha: 15/11/2023
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*La clínica San Simón Protector registró la información de todos los pacientes atendidos en el día de ayer. Por cada paciente se registró:
Número de afiliado (entero)
Edad (entero)
Género ('F' - Femenino, 'M' - Masculino, 'O' - Otros)
Temperatura (float)
La información no se encuentra agrupada ni ordenada. Hubo un total de 5 pacientes. Se pide calcular e informar:
A) El número de afiliado de sexo masculino que haya registrado la mayor temperatura. Listar el número de afiliado y la temperatura máxima.
En caso de no haber un paciente de género masculino, indicarlo con un mensaje.
B) El promedio de edad de las mujeres.
C) Los porcentajes de pacientes que registraron hipotermia, temperatura normal y fiebre.
NOTA: Es considerado hipotermia a la temperatura menor a 35, temperatura normal a temperaturas entre [35-37.5] y fiebre a temperaturas
mayores a 37.5. */
int main ()
{
    int i, numeroAfiliado, edad;
    char genero;
    float temperatura;

///PUNTO A
    int numeroAfiliadoConMayorTemperatura;
    float mayorTemperaturaMasculina=0;
    bool banderaTemperatura=true;

///PUNTO B
float promedioEdadMujeres;
int totalMujeres=0, acumuladorEdadMujeres=0;

///PUNTO C
float porcentajeTemporaturaConHipotermia, porcentajeTemporaturaNormal, porcentajeTemporaturaConFiebre;
int contadorPacientesConHipotermia=0, contadorPaceintesConTemperaturaNormal=0, contadorPacientesConfiebre=0;
int totalPacientes=0;

    for(i=0; i<5; i++)
    {
        cout<<"INGRESE SU NUMERO DE AFILIADO: ";
        cin>>numeroAfiliado;
        cout<<"INGRESE SU EDAD: ";
        cin>>edad;
        cout<<"INGRESE SU GENERO ('F'-FEMENINO,'M'-MASCULINO,'O'-OTROS): ";
        cin>>genero;
        cout<<"INGRESE SU TEMPERATURA: ";
        cin>>temperatura;

        ///PUNTO A
        if(genero=='M' || genero=='m')
        {
            if(banderaTemperatura==true)
            {
                mayorTemperaturaMasculina=temperatura;
                numeroAfiliadoConMayorTemperatura=numeroAfiliado;
                banderaTemperatura=false;
            }
            else
            {
                if(temperatura>mayorTemperaturaMasculina)
                {
                    mayorTemperaturaMasculina=temperatura;
                    numeroAfiliadoConMayorTemperatura=numeroAfiliado;
                }
            }

        }
        ///PUNTO B
        if(genero=='F' || genero=='f'){
            acumuladorEdadMujeres+=edad;
            totalMujeres++;
        }
        ///PUNTO C
        totalPacientes++;

        if(temperatura<35){
            contadorPacientesConHipotermia++;
        }
        else{
            if(temperatura<=37.5){
            contadorPaceintesConTemperaturaNormal++;
        }
        else{
            contadorPacientesConfiebre++;
        }
        }




    }
    ///PUNTO A
    if(mayorTemperaturaMasculina!=0)
    {
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"EL PACIENTE MASCULINO CON MAYOR TEMPERATURA ES EL NUMERO: "<<numeroAfiliadoConMayorTemperatura<<endl;
        cout<<"Y SU TEMPERATURA ES: "<<mayorTemperaturaMasculina<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
    }
    else
    {
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"NO HAY PACIENTES MASCULINOS"<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
    }

    ///PUNTO B
    promedioEdadMujeres= (float)acumuladorEdadMujeres/totalMujeres;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"EL PROMEDIO DE EDAD DE MUJERES ES DE: "<<promedioEdadMujeres<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    ///PUNTO C
    porcentajeTemporaturaConHipotermia= (float) (contadorPacientesConHipotermia*100)/totalPacientes;
    porcentajeTemporaturaNormal= (float)(contadorPaceintesConTemperaturaNormal*100)/totalPacientes;
    porcentajeTemporaturaConFiebre=(float)(contadorPacientesConfiebre*100)/totalPacientes;

    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"EL PORCENTAJE DE PACIENTES QUE REGISTRARON HIPOTERMIA ES DE: "<<porcentajeTemporaturaConHipotermia<<"%"<<endl;
    cout<<"EL PORCENTAJE DE PACIENTES QUE REGISTRARON TEMPERATURA NORMAL ES DE: "<<porcentajeTemporaturaNormal<<"%"<<endl;
    cout<<"EL PORCENTAJE DE PACIENTES QUE REGISTRARON FIEBRE ES DE: "<<porcentajeTemporaturaConFiebre<<"%"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;


    system ("pause");
    return 0;

}
