#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    int quantHora;
    double valorHora, pagamento;

    cout << "Digite o nome do funcionario: ";
    cin >> nome;

    cout << "Digite o valor da hora do(a) funcionario(a) " << nome << ": ";
    cin >> valorHora;

    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> quantHora;

    pagamento = quantHora*valorHora;

    cout << fixed << setprecision(2);
    cout << "O pagamento que o funcionario(a) " << nome << " deve receber e igual a R$" << pagamento << endl;

    return 0;
}