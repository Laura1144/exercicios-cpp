#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
    float a, b, c;
    float aquad, atri, atrap;
    string input;

    cout << "Insira uma medida (cm): ";
    getline(cin, input);
    stringstream(input) >> a;

    cout << "Insira outra medida (cm): ";
    getline(cin, input);
    stringstream(input) >> b;

    cout << "Insira a ultima medida (cm): ";
    getline(cin, input);
    stringstream(input) >> c;

    aquad = a * a;
    atri = (a * b) / 2;
    atrap = (a + b) * c / 2;

    cout << fixed << setprecision(4);
    cout << "A area do Quadrado e " << aquad << "!" << endl;
    cout << "A area do Triangulo e " << atri << "!" << endl;
    cout << "A area do Trapezio e " << atrap << "!" << endl;

    return 0;
}