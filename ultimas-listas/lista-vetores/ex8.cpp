#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vet[10];
    int soma = 0, qtd = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        if (vet[i] % 2 == 0) {
            soma += vet[i];
            qtd++;
        }
    }

    if (qtd == 0) {
        cout << "NENHUM NUMERO PAR\n";
    } else {
        double media = (double)soma / qtd;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }
}
