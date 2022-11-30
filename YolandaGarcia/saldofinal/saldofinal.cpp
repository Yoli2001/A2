#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float YDGB_x,YDGB_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int YDGB_i=0,YDGB_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>YDGB_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>YDGB_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>YDGB_x; // determinamos al usuario que inicialice la variable 
	YDGB_i=YDGB_i+1; //  Realizamos las respectivas operaciones..
	YDGB_s=YDGB_s-YDGB_x;

	}while(YDGB_i<YDGB_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<YDGB_s<<endl;
	return 0;
}