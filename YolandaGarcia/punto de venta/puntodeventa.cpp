#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float YDGB_x, YDGB_s = 0, YDGB_vb, YDGB_piva = 12, YDGB_viva, YDGB_pdesc = 10, YDGB_vdesc, YDGB_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int YDGB_i = 0, YDGB_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> YDGB_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> YDGB_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        YDGB_i = YDGB_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        YDGB_s = YDGB_s + YDGB_x;
    } while (YDGB_i < YDGB_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    YDGB_vb = YDGB_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    YDGB_viva = YDGB_vb * YDGB_piva / 100;
    YDGB_vdesc = YDGB_vb * YDGB_pdesc / 100;
    YDGB_vn = YDGB_vb + YDGB_viva - YDGB_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << YDGB_vn << endl;
    return 0;
}