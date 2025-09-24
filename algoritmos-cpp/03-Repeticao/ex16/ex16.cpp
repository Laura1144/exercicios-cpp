#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, quantidade, total = 0, coelho = 0, rato = 0, sapo = 0;
    char tipo;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;
        cout << "Tipo de cobaia: ";
        cin >> tipo;

        total += quantidade;
        if (tipo == 'C' || tipo == 'c') coelho += quantidade;
        else if (tipo == 'R' || tipo == 'r') rato += quantidade;
        else if (tipo == 'S' || tipo == 's') sapo += quantidade;
    }

    cout << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (coelho * 100.0 / total) << endl;
    cout << "Percentual de ratos: " << (rato * 100.0 / total) << endl;
    cout << "Percentual de sapos: " << (sapo * 100.0 / total) << endl;

    return 0;
}
