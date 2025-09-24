#include <iostream>
using namespace std;

int main() {
    int base, alt, area, perimetro;

    cout << "Digite o valor da altura do seu retangulo: ";
    cin >> alt;

    cout << "Agora digite o valo da base do seu retangulo: ";
    cin >> base;

    area = base * alt;
    perimetro = 2*(base + alt);
    
    cout << "A area do retangulo e igual a " << area << " centrimetros." << endl;
    cout << "O perimetro e igual a " << perimetro << " centrimetros." << endl;

    return 0;
}