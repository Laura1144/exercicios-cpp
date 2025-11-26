#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    double valorHora;
    double horas;
};

int main() {
    int N;
    cout << "Quantidade de funcionarios: ";
    cin >> N;

    vector<Funcionario> v(N);

    for(int i=0;i<N;i++) {
        cin.ignore();
        cout << "Nome: ";
        getline(cin, v[i].nome);
        cout << "Valor por hora: ";
        cin >> v[i].valorHora;
        cout << "Horas trabalhadas: ";
        cin >> v[i].horas;
    }

    for (auto &f : v) {
        double pagamento = f.valorHora * f.horas;
        cout << f.nome << " - Pagamento: " << pagamento << endl;
    }

    return 0;
}
