#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int totSeg;
    int h, m, s;

    cout << "Digite a duracao em segundos: ";
    cin >> totSeg;

    h = totSeg / 3600;
    totSeg %= 3600;

    m = totSeg / 60;
    s = totSeg % 60;

    cout << "Duracao: ";
    cout << setfill('0') << setw(2) << h << ":"
         << setfill('0') << setw(2) << m << ":"
         << setfill('0') << setw(2) << s << endl;

    return 0;
}
