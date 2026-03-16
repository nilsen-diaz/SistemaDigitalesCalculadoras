#include <iostream>

using namespace std;

int main() {
    int opcion;

    do {
        // Mostrar el menú
        cout << "\n--- MENU DE 2 EJERCICIOS PROPUESTOS ---" << endl;
        cout << "1. Determinar par o impar" << endl;
        cout << "2. Hallar el mayor de tres numeros" << endl;
        cout << "3. Clasificar numero (Positivo/Negativo/Cero)" << endl;
        cout << "4. Calcular promedio y aprobacion" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion (1-5): ";
        cin >> opcion;

        cout << "\n--------------------------\n";

        switch (opcion) {
            case 1: {
                int n;
                cout << "Ejercicio: Par o Impar" << endl;
                cout << "Ingrese un numero: ";
                cin >> n;
                if (n % 2 == 0) cout << "Es PAR." << endl;
                else cout << "Es IMPAR." << endl;
                break;
            }
            case 2: {
                int a, b, c;
                cout << "Ejercicio: mayor de tres numeros" << endl;
                cout << "Ingrese tres numeros: ";
                cin >> a >> b >> c;
                if (a >= b && a >= c) cout << "El mayor es: " << a << endl;
                else if (b >= a && b >= c) cout << "El mayor es: " << b << endl;
                else cout << "El mayor es: " << c << endl;
                break;
            }
            case 3: {
                int n;
                cout << "Ejercicio: Clasificacion de numero" << endl;
                cout << "Ingrese un numero: ";
                cin >> n;
                if (n > 0) cout << "Es POSITIVO." << endl;
                else if (n < 0) cout << "Es NEGATIVO." << endl;
                else cout << "Es CERO." << endl;
                break;
            }
            case 4: {
                float n1, n2, n3, prom;
                cout << "Ejercicio: Promedio Academico" << endl;
                cout << "Ingrese las tres notas: ";
                cin >> n1 >> n2 >> n3;
                prom = (n1 + n2 + n3) / 3.0;
                cout << "Promedio: " << prom << endl;
                if (prom >= 12) cout << "Estado: APROBADO." << endl;
                else cout << "Estado: REPROBADO." << endl;
                break;
            }
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 5);

    return 0;
}