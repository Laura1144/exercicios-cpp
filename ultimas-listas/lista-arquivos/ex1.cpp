#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    int N;
    cout << "Quantidade de pessoas: ";
    cin >> N;

    ofstream arq("pessoas.txt");

    for(int i=0;i<N;i++) {
        Pessoa p;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, p.nome);
        cout << "Idade: ";
        cin >> p.idade;

        arq << p.nome << ";" << p.idade << "\n";
    }
    arq.close();

    cout << "\nLendo arquivo...\n";
    ifstream ler("pessoas.txt");
    string nome;
    int idade;

    while (getline(ler, nome, ';') && ler >> idade) {
        ler.ignore();
        cout << nome << " - " << idade << endl;
    }

    return 0;
}
