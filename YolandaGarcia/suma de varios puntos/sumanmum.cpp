#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float YDGB_x,YDGB_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int YDGB_i=0, YDGB_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de YDGB_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>YDGB_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de YDGB_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>YDGB_x;
        YDGB_i=YDGB_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        YDGB_s=YDGB_s+YDGB_x;
    }while(YDGB_i<YDGB_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<YDGB_s<<endl;
    return 0;

}