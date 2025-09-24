#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, x1, x2, delta;
    double raiz, bdelta;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    bdelta = pow(b,2);

    delta = bdelta - 4 * a * c;
    raiz = sqrt(delta);
    x1 = (-b + raiz)/(2*a);
    x2 = (-b - raiz)/(2*a);
    
    cout << fixed << setprecision(4);

    if (delta < 0 || a == 0){
        cout << "Esta equacao nao possui raizes reais." << endl;
        return 0;
    }

    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
    
}