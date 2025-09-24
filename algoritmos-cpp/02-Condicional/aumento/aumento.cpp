#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario, novo, aumento;
    int porcento;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if (salario <= 1000.00) porcento = 20;
    else if (salario <= 3000.00) porcento = 15;
    else if (salario <= 8000.00) porcento = 10;
    else porcento = 5;

    aumento = salario * porcento / 100.0;
    novo = salario + aumento;

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$ " << novo << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << "Porcentagem = " << porcento << " %" << endl;

    return 0;
}
