#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos valores vai ter cada vetor? ";
    cin >> N;

    int A[10], B[10], C[10];

    cout << "Digite os valores do vetor A:\n";
    for (int i = 0; i < N; i++) cin >> A[i];

    cout << "Digite os valores do vetor B:\n";
    for (int i = 0; i < N; i++) cin >> B[i];

    cout << "\nVETOR RESULTANTE:\n";
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
        cout << C[i] << endl;
    }
}
