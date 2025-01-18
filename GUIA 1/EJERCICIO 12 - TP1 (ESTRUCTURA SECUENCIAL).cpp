///Ejercicio: 12
///Autor: Brandon Erazo
///Fecha: 26/07/2024
///Comentario: Guia 1 - Estructura Secuencial

///LIBRERIAS
# include <iostream>
/// iostream es un componente de la biblioteca estándar (STL)
///del lenguaje de programación C++ que es utilizado para operaciones de entrada/salida.
# include <cstdlib>
///Destruye objetos con almacenamiento estático y de subproceso
///y, después, devuelve el control.


using namespace std; ///Permite el uso de cin y cout

/*12) Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por
pantalla el importe total a pagar.
Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como
suelto.
Ejemplo 1. Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja y 3 sueltos, es
decir $ 100 + $ 12 x 3 = $ 136.
Ejemplo 2. Si la cantidad ingresada son 28 huevos el programa calculará 2 cajas y 4 sueltos,
es decir $ 100 x 2 + $12 x 4 = $ 248.
Ejemplo 3. Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas y 8 sueltos,
es decir $ 12 x 8 = $ 96.
*/

int main (){
///Declaro mis variables con el formato camelCase
int cantidadHuevos, caja, huevosSulestos;
float importeTotal;

///Ingreso los datos por teclado
cout<<"INGRESE LA CANTIDAD DE HUEVOS: ";
cin>>cantidadHuevos;

///Realizo las oporeciones aritmeticas necesarias para calcular la caja, huevis sueltos y el importe total
caja = cantidadHuevos / 12;
huevosSulestos = cantidadHuevos % 12;
importeTotal = (float) (caja * 100) + (huevosSulestos * 12);

///Informo el importe total a pagar
cout<<"EL IMPORTE TOTAL A PAGAR ES DE: $"<<importeTotal<<endl;



system ("pause");
return 0;

}
