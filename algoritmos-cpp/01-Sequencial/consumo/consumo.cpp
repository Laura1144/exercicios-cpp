#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int distPerc;
    float combGasto, consumo; 

    cout << "Calculadora de consumo de combutivel." << endl;
    cout << "Distancia percorrida (km): ";
    cin >> distPerc;

    cout << "Combustivel gasto: ";
    cin >> combGasto;

    consumo = distPerc / combGasto;

    cout << fixed << setprecision(3);
    cout << "O consumo medio do Carro e " << consumo << endl;
    
}