#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int idade1, idade2;
    string nome1, nome2;
    double media_idades;

    cout << "Dados da primeira pessoa" << endl;

    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;
    cin.ignore();

    cout << "Agora, os dados da segunda pessoa" << endl;

    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;
    cin.ignore();


    media_idades = (idade1 + idade2) / 2.0;
    cout << nome1;
    cout << fixed << setprecision(1);
    cout << "A media da idade de " << nome1 << " e " << nome2 << " e de " << media_idades << " anos!" << endl;

}