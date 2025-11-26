#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    double n1, n2;
};

int main() {
    int N;
    cout << "Quantidade de alunos: ";
    cin >> N;

    vector<Aluno> v(N);

    for(int i=0;i<N;i++) {
        cin.ignore();
        cout << "Nome: ";
        getline(cin, v[i].nome);
        cout << "N1: ";
        cin >> v[i].n1;
        cout << "N2: ";
        cin >> v[i].n2;
    }

    cout << "\nAlunos aprovados:\n";
    for (auto &a : v) {
        double media = (a.n1 + a.n2) / 2.0;
        if (media >= 6.0) {
            cout << a.nome << " (Media = " << media << ")\n";
        }
    }

    return 0;
}
