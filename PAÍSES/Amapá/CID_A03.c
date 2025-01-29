#include <stdio.h>

int main() {
    
    int pontos;
    float popul, por, area, pib, populacao;
    char nome[20];

        printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Amapá: \n");
        scanf("%s", &nome);

        printf("Digite o Número da População: \n");
        scanf("%f", &populacao);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos);

        popul = (populacao / area);
        por = (pib / populacao);

    printf("Cidade: %s\n", nome);
    printf("População: %.2f HAB\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("US$: %.2f Bi\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

    printf("Pessoas por Km²: %.2f km²\n", popul);
    printf("Salário por Pessoas: %.2f Min.\n", por);

return 0;

}