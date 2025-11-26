#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream arq("consumo.txt");

    double dist, comb;
    double soma = 0, somaDist = 0, somaComb = 0;
    int count = 0;

    while (arq >> dist >> comb) {
        double consumo = dist / comb;
        cout << "Linha: " << consumo << " km/l" << endl;

        soma += consumo;
        somaDist += dist;
        somaComb += comb;
        count++;
    }

    cout << "Consumo médio geral = " << somaDist / somaComb << " km/l" << endl;

    return 0;
}
