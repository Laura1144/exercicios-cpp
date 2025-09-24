#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n1, n2, n3, menor;

    cout << "Primeiro valor: "; 
    cin >> n1;

    cout << "Segundo valor: ";
    cin >> n2;

    cout << "Terceiro valor: ";
    cin >> n3;

    menor = n1;

    if (n2 < menor) {
        menor = n2;
    }

    if (n3 < menor) {
        menor = n3;
    }

    cout << "Menor: " << menor << endl;
    
}