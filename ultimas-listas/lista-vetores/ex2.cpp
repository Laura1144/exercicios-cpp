#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[10], soma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        soma += vet[i];
    }

    cout << "\nVALORES = ";
    for (int i = 0; i < N; i++) cout << vet[i] << " ";

    double media = soma / N;

    cout << fixed << setprecision(2);
    cout << "\nSOMA = " << soma;
    cout << "\nMEDIA = " << media << endl;
}
