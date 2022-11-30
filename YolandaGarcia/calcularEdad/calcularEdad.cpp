#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int YDGB_aa, YDGB_ma, YDGB_da, YDGB_an, YDGB_mn, YDGB_dn, YDGB_a, YDGB_m, YDGB_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> YDGB_aa >> YDGB_ma >> YDGB_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> YDGB_an >> YDGB_mn >> YDGB_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (YDGB_da > YDGB_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        YDGB_d = YDGB_da - YDGB_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        YDGB_da = YDGB_da + 30;
        YDGB_ma = YDGB_ma - 1;
        YDGB_d = YDGB_da - YDGB_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (YDGB_ma > YDGB_mn)
    {

        YDGB_m = YDGB_ma - YDGB_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        YDGB_ma = YDGB_ma + 12;
        YDGB_aa = YDGB_aa - 1;
        YDGB_m = YDGB_ma - YDGB_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    YDGB_a = YDGB_aa - YDGB_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << YDGB_a << " años, " << YDGB_m << " meses," << YDGB_d << " dias" << endl;
    return 0;
}