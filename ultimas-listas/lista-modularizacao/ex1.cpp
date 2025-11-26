#include <iostream>
#include <cmath>
using namespace std;

double area(double b, double h) {
    return b * h;
}

double perimetro(double b, double h) {
    return 2 * (b + h);
}

double diagonal(double b, double h) {
    return sqrt(b * b + h * h);
}

int main() {
    double base, altura;

    cout << "Base: ";
    cin >> base;
    cout << "Altura: ";
    cin >> altura;

    cout << "Area = " << area(base, altura) << endl;
    cout << "Perimetro = " << perimetro(base, altura) << endl;
    cout << "Diagonal = " << diagonal(base, altura) << endl;

    return 0;
}
