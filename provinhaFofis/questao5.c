#include <stdio.h>


int main() {

    char nomes[5][14];
    int idades[5];
    int soma_idade = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%14s", nomes[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf ("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &idades[i]);
        soma_idade += idades[i];
    }

    int idade_media = soma_idade/5; 

    for (int i = 0; i < 5; i++) {
        if (idade_media < idades[i]) {
            printf("%s eh mais velho que a idade media", nomes[i]);
        }
    }

    return 0;
}