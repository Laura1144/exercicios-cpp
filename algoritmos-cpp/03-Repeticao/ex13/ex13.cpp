#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double a, b, c;
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Digite tres numeros:" << endl;
        cin >> a >> b >> c;

        double media = (a * 2 + b * 3 + c * 5) / 10.0;
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
