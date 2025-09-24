#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d1, d2, d3, maior;

    cout << "Digite as tres distancias:\n";
    cin >> d1 >> d2 >> d3;

    maior = d1;
    if (d2 > maior) maior = d2;
    if (d3 > maior) maior = d3;

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;

    return 0;
}
