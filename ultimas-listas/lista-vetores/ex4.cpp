#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[10];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "\nNUMEROS PARES:\n";
    int qtd = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            cout << vet[i] << " ";
            qtd++;
        }
    }

    cout << "\n\nQUANTIDADE DE PARES = " << qtd << endl;
}
