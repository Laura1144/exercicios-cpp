#include <iostream>
using namespace std;

int main() {
    int x, y, soma = 0;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    if (x > y) swap(x, y);

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) soma += i;
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;
    return 0;
}
