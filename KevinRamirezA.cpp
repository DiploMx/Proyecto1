/******************************************************************************

Dado el suelo mensual de una persona
indicarle al usuario de que manera debería administrar su sueldo, siendo:

30% para renta o vivienda
30% para alientos y despensa
15% para servicios
15% para salud y cuidados
10% para ahorros

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{

    float sueldoMensual;
    float renta, alimentos, servicios, salud, ahorros;

    cout << "Ingrese su sueldo mensual: ";
    cin >> sueldoMensual;

    renta = 0.30 * sueldoMensual;
    alimentos = 0.30 * sueldoMensual;
    servicios = 0.15 * sueldoMensual;
    salud = 0.15 * sueldoMensual;
    ahorros = 0.10 * sueldoMensual;

    cout << "Recomendación de administración de sueldo mensual:\n";
    cout << "30% para renta o vivienda: $" << renta << endl;
    cout << "30% para alimentos y despensa: $" << alimentos << endl;
    cout << "15% para servicios: $" << servicios << endl;
    cout << "15% para salud y cuidados: $" << salud << endl;
    cout << "10% para ahorros: $" << ahorros << endl;

    return 0;
}
