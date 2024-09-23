#include <iostream>
using namespace std;

bool es_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void imprimir_primos(int n) {
    for (int i = 2; i < n; i++) {
        if (es_primo(i)) {
            cout << i << " ";
        }
    }
    cout << std::endl;
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    imprimir_primos(n);
    return 0;
}