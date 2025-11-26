#include <iostream>
#include <vector>
using namespace std;

vector<int> lerVetor(int &N) {
    cout << "Quantidade de elementos: ";
    cin >> N;
    vector<int> v(N);
    cout << "Digite os valores:\n";
    for(int i=0;i<N;i++) cin >> v[i];
    return v;
}

double media(const vector<int>& v) {
    double soma = 0;
    for (int x : v) soma += x;
    return soma / v.size();
}

void maiorMenor(const vector<int>& v) {
    int maior = v[0], menor = v[0];
    for(int x : v) {
        if (x > maior) maior = x;
        if (x < menor) menor = x;
    }
    cout << "Maior: " << maior << ", Menor: " << menor << endl;
}

int contarPares(const vector<int>& v) {
    int cont = 0;
    for(int x : v) if(x % 2 == 0) cont++;
    return cont;
}

int main() {
    vector<int> v;
    int opc, N = 0;

    do {
        cout << "\n1 - Ler vetor\n";
        cout << "2 - Media\n";
        cout << "3 - Maior e menor\n";
        cout << "4 - Contar pares\n";
        cout << "5 - Sair\n";
        cout << "Opcao: ";
        cin >> opc;

        switch(opc) {
            case 1: v = lerVetor(N); break;
            case 2: cout << "Media = " << media(v) << endl; break;
            case 3: maiorMenor(v); break;
            case 4: cout << "Pares = " << contarPares(v) << endl; break;
        }

    } while(opc != 5);

    return 0;
}
