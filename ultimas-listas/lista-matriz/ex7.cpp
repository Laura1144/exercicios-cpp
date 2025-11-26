#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    double mat[10][10];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }

    double somaPos = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] > 0)
                somaPos += mat[i][j];

    cout << "\nSOMA DOS POSITIVOS: " << somaPos << endl;

    int linha;
    cout << "\nEscolha uma linha: ";
    cin >> linha;

    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < N; j++)
        cout << mat[linha][j] << " ";
    cout << endl;

    int coluna;
    cout << "\nEscolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; i++)
        cout << mat[i][coluna] << " ";
    cout << endl;

    cout << "\nDIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; i++)
        cout << mat[i][i] << " ";
    cout << endl;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] < 0)
                mat[i][j] = mat[i][j] * mat[i][j];

    cout << "\nMATRIZ ALTERADA:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}
