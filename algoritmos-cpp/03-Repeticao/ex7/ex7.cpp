#include <iostream>
using namespace std;

int main() {
    int x;
    while (true) {
        cout << "Digite um numero inteiro: ";
        cin >> x;
        if (x == 0) break;

        if (x % 2 != 0) x++;
        int soma = 0;
        for (int i = 0; i < 5; i++) {
            soma += x;
            x += 2;
        }
        cout << "SOMA = " << soma << endl;
    }
    return 0;
}
