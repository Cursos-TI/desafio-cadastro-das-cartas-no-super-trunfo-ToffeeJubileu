#include <stdio.h>

int main(){

    char nome[20];
    float populaçao, area;
    int pib, pontos;

        printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Goiás: \n");
        scanf("%s", &nome);

        printf("Digite o Número da População: \n");
        scanf("%f", &populaçao);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%d", &pib);

        printf("Digite o Número de Pontos Turísticos \n");
        scanf("%d", &pontos);

    printf("Cidade: %s\n", nome);
    printf("População: %f\n", populaçao);
    printf("Área: %f\n", area);
    printf("US$: %d\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

return 0;
}