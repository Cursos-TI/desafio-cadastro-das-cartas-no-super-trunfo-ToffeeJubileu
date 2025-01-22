#include <stdio.h>

int main() {

    int pontos;
    float populacao, pib; 
    char nome[20], area[20];

    printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Goiás: \n");
    scanf("%s", &nome);

    printf("Digite o Número da População: \n");
    scanf("%f", &populacao);

    printf("Digite o Número da Área: \n");
    scanf("%s", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    printf("Cidade: %s\n", nome);
    printf("População: %f\n", populacao);
    printf("Área Km: %s\n", area);
    printf("US$: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

return 0;

}