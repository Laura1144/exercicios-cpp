#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    float raio, area;
    const float pi = 3.14519;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " <<area;

    return 0;
}