#include <iostream>
#include <fstream>
using namespace std;

double areaQuadrado(double a) { return a * a; }
double areaTriangulo(double b, double h) { return (b * h) / 2.0; }
double areaTrapezio(double B, double b, double h) { return (B + b) * h / 2.0; }

int main() {
    ifstream in("medidas.txt");
    ofstream out("relatorio.txt");

    double A, B, C;

    while (in >> A >> B >> C) {
        double quad = areaQuadrado(A);
        double tri = areaTriangulo(B, C);
        double trap = areaTrapezio(A, B, C);

        out << quad << " " << tri << " " << trap << "\n";
    }

    return 0;
}
