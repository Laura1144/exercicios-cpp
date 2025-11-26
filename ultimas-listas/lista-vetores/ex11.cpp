#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double altura[10];
    char genero[10];

    double menor = 999, maior = 0;
    double somaMulheres = 0;
    int qtdMulheres = 0, qtdHomens = 0;

    for (int i = 0; i < N; i++) {
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> altura[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];

        if (altura[i] < menor) menor = altura[i];
        if (altura[i] > maior) maior = altura[i];

        if (genero[i] == 'F' || genero[i] == 'f') {
            somaMulheres += altura[i];
            qtdMulheres++;
        } else {
            qtdHomens++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;

    if (qtdMulheres > 0)
        cout << "Media das alturas das mulheres = " 
             << somaMulheres / qtdMulheres << endl;
    else
        cout << "Media das alturas das mulheres = 0.00\n";

    cout << "Numero de homens = " << qtdHomens << endl;
}
