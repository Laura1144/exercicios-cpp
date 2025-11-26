#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    double mat[10][10], vet[10];

    for (int i = 0; i < M; i++) {
        double soma = 0;
        cout << "Digite os elementos da " << i + 1 << "a. linha:\n";
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
            soma += mat[i][j];
        }
        vet[i] = soma;
    }

    cout << "\nVETOR GERADO:\n";
    for (int i = 0; i < M; i++) cout << vet[i] << endl;
}
