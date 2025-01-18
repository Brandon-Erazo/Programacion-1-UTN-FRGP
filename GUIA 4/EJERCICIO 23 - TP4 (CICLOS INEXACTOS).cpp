///Ejercicio: 23
///Autor: Brandon Erazo
///Fecha: 03/08/2024
///Comentario:

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*23) Hacer un programa que consulte una contraseña, el usuario solo tiene derecho a 3
intentos. Cuando el usuario escriba la contraseña correcta, por ejemplo: 1234, se imprimirá
“Bienvenido” y finalizara el programa. En caso de no escribir la correcta se imprimirá:
“Contraseña inválida”. Si se cumplen 3 intentos y el usuario no escribe la contraseña
correcta se imprimirá: “Intentos agotados” y finaliza la ejecución del programa.*/

int main ()
{
///Declaro mis variables con el formato camelCase
    const int contraseniaCorrecta = 1234;
    int contraseniaIngresada, intentos =0;

    while (intentos < 3 && contraseniaIngresada != contraseniaCorrecta)
    {
        cout << "INGRESE SU CONTRASEÑA: ";
        cin >> contraseniaIngresada;

        if (contraseniaIngresada != contraseniaCorrecta)
        {
            cout << "CONTRASEÑA INVALIDA." << endl;
        }

        intentos++;
    }

    if (contraseniaIngresada == contraseniaCorrecta)
    {
        cout << "BIENVENIDO!" << endl;
    }
    else
    {
        cout << "INTENTOS AGOTADOS." << endl;
    }





    system ("pause");
    return 0;

}
