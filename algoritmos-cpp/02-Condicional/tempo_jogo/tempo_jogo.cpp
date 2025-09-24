#include <iostream>
using namespace std;

int main() {
    int h1, h2, duracao;

    cout << "Hora inicial: ";
    cin >> h1;
    cout << "Hora final: ";
    cin >> h2;

    if (h1 == h2) duracao = 24;
    else if (h1 < h2) duracao = h2 - h1;
    else duracao = 24 - h1 + h2;

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

    return 0;
}
