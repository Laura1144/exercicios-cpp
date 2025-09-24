#include <iostream>
using namespace std;

int main() {
    int n, fatorial = 1;
    cout << "Digite o valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    cout << "FATORIAL = " << fatorial << endl;
    return 0;
}
