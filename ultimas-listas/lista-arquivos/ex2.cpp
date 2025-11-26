#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Func {
    string nome;
    double valorHora;
    double horas;
};

int main() {
    int N;
    cout << "Qtd funcionarios: ";
    cin >> N;

    ofstream arq("folha.txt");

    for(int i=0;i<N;i++) {
        Func f;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, f.nome);
        cout << "Valor hora: ";
        cin >> f.valorHora;
        cout << "Horas: ";
        cin >> f.horas;

        arq << f.nome << ";" << f.valorHora << ";" << f.horas << "\n";
    }
    arq.close();

    ifstream ler("folha.txt");
    string nome;
    double vh, h;

    double total = 0;

    while(getline(ler, nome, ';') && ler >> vh && ler.get() && ler >> h) {
        ler.ignore();
        total += vh * h;
    }

    cout << "Total da folha = " << total << endl;

    return 0;
}
