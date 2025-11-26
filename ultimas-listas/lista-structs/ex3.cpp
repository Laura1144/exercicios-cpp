#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;
};

int main() {
    int N;
    cout << "Quantas pessoas? ";
    cin >> N;

    vector<Pessoa> v(N);
    double soma = 0;
    int menores16 = 0;

    for(int i=0;i<N;i++) {
        cin.ignore();
        cout << "Nome: ";
        getline(cin, v[i].nome);
        cout << "Idade: ";
        cin >> v[i].idade;
        cout << "Altura: ";
        cin >> v[i].altura;

        soma += v[i].altura;
        if (v[i].idade < 16) menores16++;
    }

    double media = soma / N;
    double perc = (double)menores16 * 100 / N;

    cout << "Altura media = " << media << endl;
    cout << "Percentual menores de 16 = " << perc << "%\n";

    cout << "Nomes dos menores de 16:\n";
    for (auto &p : v)
        if (p.idade < 16) cout << p.nome << endl;

    return 0;
}
