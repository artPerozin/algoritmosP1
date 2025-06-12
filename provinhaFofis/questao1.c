#include <stdio.h>
int main() {
    float a,b,c;

    printf("Digite um numero");
    // o correto seria scanf("%f", &a);
    scanf("%", &a);

    printf("Digite outro numero");
    // o correto seria scanf("%f", &b);
    scanf("%f", b);

    c=a+b;
    // o correto seria printf("A soma desses numeros eh %f", c);
    printf("A soma desses numeros eh %d",&c);
}
