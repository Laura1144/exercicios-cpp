#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    Pessoa p1, p2;

    cin.ignore();
    cout << "Nome 1: ";
    getline(cin, p1.nome);
    cout << "Idade 1: ";
    cin >> p1.idade;

    cin.ignore();
    cout << "Nome 2: ";
    getline(cin, p2.nome);
    cout << "Idade 2: ";
    cin >> p2.idade;

    double media = (p1.idade + p2.idade) / 2.0;
    cout << "Idade média = " << media << endl;

    return 0;
}
