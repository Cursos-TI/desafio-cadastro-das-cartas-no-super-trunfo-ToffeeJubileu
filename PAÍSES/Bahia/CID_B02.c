#include <stdio.h>

int main() {
    
    int pontos;
    float popul, por, area, pib, populacao, sp;
    char nome[20];

        // cadastrado da carta
        printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Bahia: \n");
        scanf("%s", &nome);

        printf("Digite o Número da População: \n");
        scanf("%f", &populacao);

        printf("Digite o Número da Área: \n");
        scanf("%f", &area);

        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos);

        // calculando os ponto da carta
        popul = (populacao / area);
        por = (pib / populacao);
        sp = (populacao + area + pib + pontos);

        //imprimido a informação da carta registrada
    printf("Cidade: %s\n", nome);
    printf("População: %.2f HAB\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("US$: %.2f Bi\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

    printf("Pessoas por Km²: %.2f km²\n", popul);
    printf("Salário por Pessoas: %.2f Min.\n", por);
    printf("Super Poder: %.2f Pontos\n", sp);

    //imprimido e calculando a imformação da carta registrada
    printf("Pessoas por Km² é menor do que PIB?: %d\n", popul < pib);
    printf("Pontos Turísticos é maior do que Super Poder?: %d\n", pontos > sp);

return 0;

}