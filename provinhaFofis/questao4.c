#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float v[10];
    float soma = 0;
    float mult = 1;

    for (int i = 0; i < 10; i++){
        scanf ("%f", &v[i]);
        soma += v[i];
        mult *= v[i];
    }
    
    printf ("o resultado eh %f", mult/soma);
}