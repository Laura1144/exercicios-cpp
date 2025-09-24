#include <iostream>
#include <iomanip>
using namespace std; 

int main () {
    int valor, minuto, excMinuto;
    
    cout << "Digite a quantidade de minutos: ";
    cin >> minuto;

    if (minuto < 100) {
        valor = 50;
    }

    if (minuto > 100) {
        excMinuto = minuto - 100;
        valor = 50 + (excMinuto * 2);
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: " << valor;

}