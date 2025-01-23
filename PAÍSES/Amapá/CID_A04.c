#include <stdio.h>

int main() {
    
    int pontos;
    char nome[20], area[20], pib[20], populacao[20];

        printf("Digite o Nome de Uma Cidade que faz Parte do Estado de Amapá: \n");
        scanf("%s", &nome);

        printf("Digite o Número da População: \n");
        scanf("%s", &populacao);

        printf("Digite o Número da Área: \n");
        scanf("%s", &area);

        printf("Digite o PIB: \n");
        scanf("%s", &pib);

        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontos);

    printf("Cidade: %s\n", nome);
    printf("População (Hab) : %s\n", populacao);
    printf("Área (Km²): %s\n", area);
    printf("US$ (Bi): %s\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);

return 0;

}