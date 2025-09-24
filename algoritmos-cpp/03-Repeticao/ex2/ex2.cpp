#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade, total = 0, count = 0;
    double media;
    cout << "Digite as idades: " << endl;
    cin >> idade;
    
    if (idade < 0) {
        cout << "IMPOSSIVEL CALCULAR" << endl;
        return 0;
    }

    while (idade >= 0) {
        total += idade;
        count++;
        cin >> idade;
    }

    media = (double)total / count;
    cout << fixed << setprecision(2);
    cout << "MEDIA = " << media << endl;
    return 0;
}
