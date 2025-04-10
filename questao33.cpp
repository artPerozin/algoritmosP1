#include <bits/stdc++.h>
using namespace std;

int main() {
    float total = 0, n;
    cin >> n;
    
    int i = 1;

    while (i <= n) {
        int fatorial = 1;
        int x = i;
        while (x > 0) {
            fatorial *= x;
            x--;
        }
        total += 1.0 / fatorial;
        i++;
    }

    cout << total + 1;
}
