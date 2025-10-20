#include <iostream>
using namespace std;

int main() {
    int n;           
    int num_invertido = 0; 
    int digito;

    cout << "Ingrese un numero entero" << endl;
    cin >> n;

    // Guardamos el número original para mostrarlo después
    int original = n;

    
    while (n > 0) {
        digito = n % 10;            
        num_invertido = num_invertido * 10 + digito; 
        n = n / 10;                   
    }

    cout << "El numero original es " << original << endl;
    cout << "El numero invertido es " << num_invertido << endl;

    return 0;
}
