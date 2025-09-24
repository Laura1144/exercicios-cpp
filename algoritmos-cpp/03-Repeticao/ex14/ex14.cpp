#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double x, y;
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Entre com o numerador: ";
        cin >> x;
        cout << "Entre com o denominador: ";
        cin >> y;

        if (y == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            double resultado = x / y;
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << resultado << endl;
        }
    }

    return 0;
}
