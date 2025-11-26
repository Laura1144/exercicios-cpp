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

    cout << "NUMEROS NEGATIVOS:\n";
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            cout << vet[i] << endl;
        }
    }
}
