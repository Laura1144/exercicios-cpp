#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    double vet[10], soma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        soma += vet[i];
    }

    double media = soma / N;

    cout << fixed << setprecision(3);
    cout << "\nMEDIA DO VETOR = " << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA:\n";
    cout << fixed << setprecision(1);
    for (int i = 0; i < N; i++) {
        if (vet[i] < media)
            cout << vet[i] << endl;
    }
}
