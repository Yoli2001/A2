#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float YDGB_x,YDGB_s=0,YDGB_s1=0,YDGB_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int YDGB_i=0,YDGB_l,YDGB_i1=0,YDGB_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>YDGB_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>YDGB_x; // determinamos al usuario que ingrese la variable de x
	YDGB_i=YDGB_i+1; // hacemos los respectivos cálculos
	YDGB_s=YDGB_s+YDGB_x;
	if(YDGB_x==1){ // Condicional dependiente del cálculo anterior
		YDGB_i1=YDGB_i1+1;
		YDGB_s1=YDGB_s1+YDGB_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		YDGB_i5=YDGB_i5+1;
		YDGB_s5=YDGB_s5+YDGB_x;
	}

	}while(YDGB_i<YDGB_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<YDGB_i<<endl;
	cout<<"El valor es: "<<YDGB_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<YDGB_i1<<endl;
	cout<<"El valor es: "<<YDGB_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<YDGB_i5<<endl;
	cout<<"La cantidad de moneda es: "<<YDGB_s5<<endl;
	return 0;
}