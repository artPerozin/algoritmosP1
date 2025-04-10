#include <bits/stdc++.h>
using namespace std;

int main () {
    int x;

    cout << "Adicione um numero inteiro positivo: ";
    cin >> x;

    int i = 1;

    while(i <= x){
        
        if(i%2 == 0) {
            cout << i << " ";
        }

        i = i+1;
    }

}