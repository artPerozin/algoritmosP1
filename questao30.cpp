#include <bits/stdc++.h>
using namespace std;

int main () {
    int x;

    cout << "Adicione um numero inteiro positivo: ";
    cin >> x;

    int i = 0;

    while(i < x){
        i++;
        
        if(i%2 == 0) {
            cout << i << " ";
        }
    }
}