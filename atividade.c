#include <stdio.h>

int main() {
    // Estrutura para representar uma cidade no jogo Super Trunfo
    char estado[48];
    char cidade[48];
    char codigo[48];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    // Cadastro da primeira cidade
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);
    
    // Cálculo da densidade populacional
    densidade_populacional = populacao / area;
    // Cálculo do PIB per capita
    pib_per_capita = pib / populacao;

    printf("\nDados cadastrados!\n");
    printf("O estado da cidade e: %s\n", estado);
    printf("A cidade 1 e: %s\n", cidade);
    printf("O codigo da cidade 1 e: %s\n", codigo);
    printf("A populacao da cidade 1 e: %d\n", populacao);
    printf("A area da cidade 1 e: %.2f\n", area);
    printf("O PIB da cidade 1 e: %.2f\n", pib);
    printf("O numero de pontos turisticos da cidade 1 e: %d\n", pontos_turisticos);
    printf("A densidade populacional da cidade 1 e: %.2f hab/km^2\n", densidade_populacional);
    printf("O PIB per capita da cidade 1 e: %.2f\n", pib_per_capita);
    
    // Estrutura para representar a segunda cidade
    char estadoc2[48];
    char cidadec2[48]; 
    char codigoc2[48];
    int populacaoc2;
    float areac2;
    float pibc2;
    int pontos_turisticosc2;
    float densidade_populacionalc2;
    float pib_per_capitac2;

    // Cadastro da segunda cidade
    printf("\nDigite o estado: \n");
    scanf("%s", estadoc2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidadec2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoc2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacaoc2);
    printf("Digite a area: \n");
    scanf("%f", &areac2);
    printf("Digite o PIB: \n");
    scanf("%f", &pibc2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticosc2);
    
    // Cálculo da densidade populacional
    densidade_populacionalc2 = populacaoc2 / areac2;
    // Cálculo do PIB per capita
    pib_per_capitac2 = pibc2 / populacaoc2;

    printf("\nDados cadastrados!\n");
    printf("O estado da cidade e: %s\n", estadoc2);
    printf("A cidade 2 e: %s\n", cidadec2);
    printf("O codigo da cidade 2 e: %s\n", codigoc2);
    printf("A populacao da cidade 2 e: %d\n", populacaoc2);
    printf("A area da cidade 2 e: %.2f\n", areac2);
    printf("O PIB da cidade 2 e: %.2f\n", pibc2);
    printf("O numero de pontos turisticos da cidade 2 e: %d\n", pontos_turisticosc2);
    printf("A densidade populacional da cidade 2 e: %.2f hab/km^2\n", densidade_populacionalc2);
    printf("O PIB per capita da cidade 2 e: %.2f\n", pib_per_capitac2);

    return 0;
}