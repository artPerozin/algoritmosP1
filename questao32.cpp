#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i; //instancia variaveis
    cin >> n; //le numero inteiro positivo

    i = (n-1); //atribui contador que vai ser o divisor

    while(i > 1){ //enquanto o contador for maior que 1, ele vai rodar o loop
        if(n%i == 0){ //se o resto da divisão de N por I for igual a 0, N não é primo
            cout << "nao eh primo" << endl;
            return 0; //ignora
        }
        i--; //subtrai (i - 1) para próxima iteração até chegar ao 1;
    }

    cout << "eh primo"; //se o loop terminar todas as iterações e não tiver retorno, n é primo

}