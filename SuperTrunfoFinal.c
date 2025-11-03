#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha1, escolha2;
    float valor1A, valor1B, valor2A, valor2B;
    float soma1 = 0, soma2 = 0;

    char estado[20], codigo[5], cidade[20];
    int populacao, pontost;
    float area, pib, densidade;

    char estado2[20], codigo2[5], cidade2[20];
    int populacao2, pontost2;
    float area2, pib2, densidade2;

    
    printf("Primeira carta\n");
    printf("Estado: ");
    scanf("%s", estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos turísticos: ");
    scanf("%d", &pontost);
    densidade = populacao / area;

    
    printf("\nSegunda carta\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontost2);
    densidade2 = populacao2 / area2;

    
    printf("\nEscolha do primeiro atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    
    printf("\nEscolha do segundo atributo\n");
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos turísticos\n");
    if (escolha1 != 5) printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha2);

    
    switch (escolha1) {
        case 1:
            valor1A = populacao;
            valor1B = populacao2;
            printf("\nPopulação:\n%s: %d\n%s: %d\n", cidade, populacao, cidade2, populacao2);
            break;
        case 2:
            valor1A = area;
            valor1B = area2;
            printf("\nÁrea:\n%s: %.2f\n%s: %.2f\n", cidade, area, cidade2, area2);
            break;
        case 3:
            valor1A = pib;
            valor1B = pib2;
            printf("\nPIB:\n%s: %.2f\n%s: %.2f\n", cidade, pib, cidade2, pib2);
            break;
        case 4:
            valor1A = pontost;
            valor1B = pontost2;
            printf("\nPontos turísticos:\n%s: %d\n%s: %d\n", cidade, pontost, cidade2, pontost2);
            break;
        case 5:
            valor1A = -densidade;
            valor1B = -densidade2;
            printf("\nDensidade demográfica:\n%s: %.2f\n%s: %.2f\n", cidade, densidade, cidade2, densidade2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    soma1 += valor1A;
    soma2 += valor1B;

    
    switch (escolha2) {
        case 1:
            valor2A = populacao;
            valor2B = populacao2;
            printf("\nPopulação:\n%s: %d\n%s: %d\n", cidade, populacao, cidade2, populacao2);
            break;
        case 2:
            valor2A = area;
            valor2B = area2;
            printf("\nÁrea:\n%s: %.2f\n%s: %.2f\n", cidade, area, cidade2, area2);
            break;
        case 3:
            valor2A = pib;
            valor2B = pib2;
            printf("\nPIB:\n%s: %.2f\n%s: %.2f\n", cidade, pib, cidade2, pib2);
            break;
        case 4:
            valor2A = pontost;
            valor2B = pontost2;
            printf("\nPontos turísticos:\n%s: %d\n%s: %d\n", cidade, pontost, cidade2, pontost2);
            break;
        case 5:
            valor2A = -densidade;
            valor2B = -densidade2;
            printf("\nDensidade demográfica:\n%s: %.2f\n%s: %.2f\n", cidade, densidade, cidade2, densidade2);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }
    soma1 += valor2A;
    soma2 += valor2B;

   
    printf("\nResultado final\n");
    printf("%s: %.2f\n", cidade, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    (soma1 > soma2) 
        ? printf("Vencedor: %s\n", cidade) 
        : (soma1 < soma2) 
            ? printf("Vencedor: %s\n", cidade2) 
            : printf("Empate!\n");

    return 0;
}
