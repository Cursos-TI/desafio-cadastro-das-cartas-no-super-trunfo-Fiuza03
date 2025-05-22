#include <stdio.h>

int main() {
    // Carta 1
    char estado;
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontos;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    // Entrada Carta 1
    printf("Dados Carta 1!\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o Código: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos);

    // Entrada Carta 2
    printf("\nDados Carta 2!\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a População: ");
    scanf("%f", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Impressão
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %.0f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
