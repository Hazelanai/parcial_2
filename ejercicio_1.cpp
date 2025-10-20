#include <iostream>
using namespace std;

int main() {
    int n;          
    int digito;     
    int pares = 0;  
    int impares = 0;

    cout << "Ingrese un numero entero " << endl;
    cin >> n;

    // Caso especial: si el número es 0
    if (n == 0) {
        cout << "El numero 0 es un dígito par" << endl;
        return 0;
    }

    // Analizar cada dígito del número
    while (n > 0) {
        digito = n % 10;  // 

        if (digito % 2 == 0)
            pares++;
        else
            impares++;

        n = n / 10;  
    }

    cout << "La cantidad de digitos pares es " << pares << endl;
    cout << "La cantidad de digitos impares es " << impares << endl;

    return 0;
}
