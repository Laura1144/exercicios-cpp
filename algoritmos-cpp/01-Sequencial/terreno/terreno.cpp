#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float largura, comprimento, valor, area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;

    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;

    area = largura + comprimento;
    preco = area * valor;

    cout << fixed << setprecision(2);
    cout << "Area do terreno e " << area << endl;
    cout << "O preco do terreno e " << preco << endl;

    return 0;

}