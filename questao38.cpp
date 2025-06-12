#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, next;

    cout << "Os primeiros 30 numeros de Fibonacci sao:" << endl;
    
    for (int i = 0; i < 30; i++) {
        cout << n1 << " ";
        next = n1 + n2;

        n1 = n2;
        n2 = next;
    }

    cout << endl;
    return 0;
}

