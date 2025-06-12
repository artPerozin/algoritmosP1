#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float S;
    int N;

    printf ("Digite um valor inteiro positivo N: ");
    scanf ("%d", &N);

    if (N <= 0) {
        printf ("Digite um valor positivo bocoh");
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        S += 1/pow(i,i);
    }

    printf("O valor de S eh: %f", S);
}
