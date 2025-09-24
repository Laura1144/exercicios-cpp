#include <iostream>
using namespace std;

int main() {
    int x, y;
    while (true) {
        cout << "Digite os valores das coordenadas X e Y:\n";
        cin >> x >> y;
        if (x == 0 || y == 0) break;

        if (x > 0 && y > 0) cout << "QUADRANTE Q1" << endl;
        else if (x < 0 && y > 0) cout << "QUADRANTE Q2" << endl;
        else if (x < 0 && y < 0) cout << "QUADRANTE Q3" << endl;
        else if (x > 0 && y < 0) cout << "QUADRANTE Q4" << endl;
    }
    return 0;
}
