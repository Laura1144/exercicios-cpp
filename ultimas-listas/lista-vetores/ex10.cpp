#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nome[10];
    double nota1[10], nota2[10];

    for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:\n";
        cin >> nome[i];
        cin >> nota1[i];
        cin >> nota2[i];
    }

    cout << "\nAlunos aprovados:\n";
    for (int i = 0; i < N; i++) {
        double media = (nota1[i] + nota2[i]) / 2;
        if (media >= 6.0)
            cout << nome[i] << endl;
    }
}
