#include <iostream>
using namespace std;

int main() {
    int n; // el tamaño del arreglo

    cout << "Ingrese la cantidad de elementos del arreglo" << endl;
    cin >> n;

    int numeros[n]; 

    // Llenar el arreglo
    cout << "Ingrese los " << n << " numeros enteros " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int x;
    cout << "Ingrese el numero x" << endl;
    cin >> x;

    int menores = 0;
    int mayores = 0;
    int iguales = 0;

    // Contar los menores, mayores e iguales
    for (int i = 0; i < n; i++) {
        if (numeros[i] < x)
            menores++;
        else if (numeros[i] > x)
            mayores++;
        else
            iguales++;
    }

    cout << "Cantidad de numeros menores que " << x << " " << menores << endl;
    cout << "Cantidad de numeros mayores que " << x << " " << mayores << endl;
    cout << "Cantidad de numeros iguales a " << x << " " << iguales << endl;

    return 0;
}
