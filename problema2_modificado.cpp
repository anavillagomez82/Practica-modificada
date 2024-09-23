#include <iostream>
using namespace std;

bool es_impar(int n) {
    return (n % 2 != 0);
}

void num_impar(int n) {
    for (int i = 1; i <= n; i++) {
        if (es_impar(i)) {
            cout << i;
            if (i < n && es_impar(i + 1)) {
                cout <<", ";
            }
        }
    }
    cout <<endl;
}

int main() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;
    num_impar(n);
    return 0;
}