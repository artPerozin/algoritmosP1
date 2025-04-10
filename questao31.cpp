#include <bits/stdc++.h>
using namespace std;

int main () {
    int x;

    cout << "Adicione um numero inteiro positivo: ";
    cin >> x;

    int fatorial = 1;

    do {
        fatorial *= x;
        x--;
    } while (x > 0);

    cout << fatorial;
}