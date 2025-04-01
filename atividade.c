#include <stdio.h>

int main() {
    // Estrutura para representar uma cidade no jogo super trunfo
char estado[48];
char cidade[48];
char codigo[48];
int populacao;
float area;
float pib;
int pontos_turisticos;

  
    // cadastro da primeira cidade
printf("digite o estado: \n");
scanf("%s", estado);
printf("digite o nome da cidade: \n");
scanf("%s", cidade);
printf("digite o codigo da carta: \n");
scanf("%s", codigo);
printf("digite a populaçao: \n");
scanf("%d", &populacao);
printf("digite a area: \n");
scanf("%f", &area);
printf("digite o pib: \n" );
scanf("%f", &pib);
printf("digite o numero de pontos turisticos: \n");
scanf("%d", &pontos_turisticos); 

// dados da carta 1 
printf("Dados cadastrados!\n");
printf("o estado da cidade é: %s\n", estado);
printf("a cidade 1 é: %s \n", cidade);
printf("o codigo da cidade 1 é: %s\n", codigo);
printf("o numero da população da cidade 1 é: %d\n", populacao);
printf("o numero da area da cidade 1 é: %f\n", area);
printf("o numero do pib da cidade 1 é: %f\n", pib);
printf("o numero de pontos turisticos da cidade 1 é: %d\n", pontos_turisticos);
  
// Estrutura para representar uma cidade no jogo super trunfo
char estadoc2[48];
char cidadec2[48]; 
char codigoc2[48];
int populacaoc2;
float areac2;
float pibc2;
int pontos_turisticosc2;


 // cadastro da segunda cidade
printf("digite o estado: \n");
scanf("%s", estadoc2);
printf("digite o nome da cidade: \n");
scanf("%s", cidadec2);
printf("digite o codigo da carta: \n");
scanf("%s", codigoc2);
printf("digite a populaçao: \n");
scanf("%d", &populacaoc2);
printf("digite a area: \n");
scanf("%f", &areac2);
printf("digite o pib: \n" );
scanf("%f", &pibc2);
printf("digite o numero de pontos turisticos: \n");
scanf("%d", &pontos_turisticosc2); 

// dados da carta 2
printf("Dados cadastrados!\n ");
printf("o estado da cidade é: %s\n", estadoc2);
printf("a cidade 2 é: %s \n", cidadec2);
printf("o codigo da cidade 2 é: %s\n", codigoc2);
printf("o numero da população da cidade 2 é: %d\n", populacaoc2);
printf("o numero da area da cidade 2 é: %f\n", areac2);
printf("o numero do pib da cidade 2 é: %f\n", pibc2);
printf("o numero de pontos turisticos da cidade 2 é: %d\n", pontos_turisticosc2);


return 0;
    
}
