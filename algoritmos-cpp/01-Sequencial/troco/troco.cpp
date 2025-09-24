#include <iostream>
using namespace std;

int main() {
    int quant, preco, valor, troco;

    cout << "Digite o valor unitario do produto: ";
    cin >> preco;

    cout << "Digite a quantidade comprada: ";
    cin >> quant;

    cout << "Digite o valor que o cliete pagou: ";
    cin >> valor;

    troco = valor - (quant*preco);

    cout << "O troco deve ser igual a: " << troco;

    return 0;
}