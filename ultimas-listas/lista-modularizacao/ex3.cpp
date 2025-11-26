#include <iostream>
using namespace std;

double areaQuadrado(double a) { return a * a; }
double areaTriangulo(double b, double h) { return (b * h) / 2.0; }
double areaTrapezio(double B, double b, double h) { return (B + b) * h / 2.0; }

int main() {
    double a, b, B, h;
    cout << "Digite A, B, C: ";
    cin >> a >> b >> h;

    cout << "Quadrado = " << areaQuadrado(a) << endl;
    cout << "Triangulo = " << areaTriangulo(b, h) << endl;

    cout << "Para o trapézio, digite base maior (B): ";
    cin >> B;
    cout << "Trapezio = " << areaTrapezio(B, b, h) << endl;

    return 0;
}
