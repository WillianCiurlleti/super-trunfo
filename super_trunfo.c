// super_trunfo.c
#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada dos dados Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (ex.: A-J): ");
    scanf(" %2s", estado1);

    printf("Informe o codigo da carta (Ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao1);

    printf("Informe a area (em km quadrado): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada dos dados Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (ex.: A-J): ");
    scanf(" %2s", estado2);

    printf("Informe o codigo da carta (Ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a area (em km quadrado): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

   

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    // Exibição dos dados e resultados
    printf("\n---------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km quadrado\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km quadrado\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n---------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km quadrado\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km quadrado\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;


    printf("\n---------------------------\n");
    printf("Comparacao de Cartas:\n");

    // População
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (populacao2 > populacao1) {
        printf("Populacao: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Populacao: Empate\n");
    }

    // Área
    if (area1 > area2) {
        printf("Area: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (area2 > area1) {
        printf("Area: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Area: Empate\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("PIB: Empate\n");
    }

    // Pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Pontos Turisticos: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Pontos TurIsticos: Empate\n");
    }

    // Densidade (MENOR VENCE)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional (menor vence): Carta 1 venceu\n");
        pontosCarta1++;
    } else if (densidade2 < densidade1) {
        printf("Densidade Populacional (menor vence): Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    // PIB per capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("PIB per Capita: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("PIB per Capita: Empate\n");
    }

    // Super Poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (superPoder2 > superPoder1) {
        printf("Super Poder: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Super Poder: Empate\n");
    }

    // Resultado final
    printf("\n---------------------------\n");
    printf("Resultado Final:\n");
    printf("Pontos Carta 1: %d\n", pontosCarta1);
    printf("Pontos Carta 2: %d\n", pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("Vencedor: Carta 1\n");
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Vencedor: Carta 2\n");
    } else {
        printf("Resultado: Empate\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar(); // Consome \n do último scanf
    getchar(); // Espera o ENTER

    return 0;
}