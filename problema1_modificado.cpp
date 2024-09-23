#include <iostream>
using namespace std;


bool es_multiplo(int n) {
    return (n % 3 == 0) || (n % 5 == 0);
}


int suma_multiplos(int limite) {
    int suma = 0;
    for (int i = 1; i < limite; i++) {
        if (es_multiplo(i)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int limite = 1000000;
    int result = suma_multiplos(limite);
    cout << "La suma de los multiplos de 3 o 5c menores a " << limite << " es: " << result <<endl;
    return 0;
}