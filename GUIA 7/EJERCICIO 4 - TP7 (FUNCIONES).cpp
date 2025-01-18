///Ejercicio: 4
///Autor: Brandon Erazo
///Fecha: 01/09/2024
///Comentario:

///LIBRERIAS
# include <iostream> ///Es una libreria de Input|Output|string es para entrada y salida de datos
# include <cstdlib>



using namespace std; ///Permite el uso de cin y cout sin la necesidad de poner std::

/*4) Escribir una función que reciba dos números y retorne el máximo.*/

int buscarMaximo(int num1, int num2);

int main (){
 int numeroUno, numeroDos, maximo;

 cout<<"INGRESE UN NUMERO: ";
 cin>>numeroUno;
 cout<<"INGRESE OTRO NUMERO: ";
 cin>>numeroDos;

 maximo = buscarMaximo(numeroUno, numeroDos);

 cout<<"EL MAXIMO DE LOS NUMEROS INGRESADOS ES: "<<maximo<<endl;





system ("pause");
return 0;

}

int buscarMaximo(int num1, int num2){
   int maximo;
    if(num1>num2){
            maximo = num1;
            return maximo;
    }
    else{
            maximo = num2;
            return maximo;
    }

}
