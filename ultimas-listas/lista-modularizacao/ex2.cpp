#include <iostream>
#include <string>
using namespace std;

void ler(string &nome, double &valorHora, double &horas) {
    cin.ignore();
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;
}

double calcular(double valorHora, double horas) {
    return valorHora * horas;
}

void exibir(string nome, double pagamento) {
    cout << "O pagamento de " << nome << " é R$ " << pagamento << endl;
}

int main() {
    string nome;
    double valorHora, horas;

    ler(nome, valorHora, horas);
    double total = calcular(valorHora, horas);
    exibir(nome, total);

    return 0;
}
