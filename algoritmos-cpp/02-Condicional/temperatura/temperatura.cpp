#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << fixed << setprecision(2);

    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        double c = (temp - 32.0) * 5.0 / 9.0;
        cout << "Temperatura equivalente em Celsius: " << c << endl;
    } else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        double f = temp * 9.0 / 5.0 + 32.0;
        cout << "Temperatura equivalente em Fahrenheit: " << f << endl;
    }

    return 0;
}
