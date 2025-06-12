#include <stdio.h>
#include <stdlib.h>
int main(){
    float velocidade_inicial;
    float velocidade_final;
    float tempo;
    float aceleracao_media;

    printf ("Digite a velocidade inicial: ");
    scanf ("%f", &velocidade_inicial);

    printf ("Digite a velocidade final: ");
    scanf ("%f", &velocidade_final);

    printf ("Digite o tempo em segundos: ");
    scanf ("%f", &tempo);

    aceleracao_media = (velocidade_final - velocidade_inicial) / tempo;

    printf("A aceleracao media eh: %f", aceleracao_media);


}
