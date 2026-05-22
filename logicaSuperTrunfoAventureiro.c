#include <stdio.h>

int main (){

//Carta 1:
//Estado: A
//Código: A01
//Nome da Cidade: São Paulo
//População: 12325000
//Área: 1521.11 km²
//PIB: 699.280.000.000 de reais
//Número de Pontos Turísticos: 50
//Densidade Populacional: 8102.47 hab/km²
//PIB per Capita: 56724.32 reais

//Carta 2:
//Estado: B
//Código: B02
//Nome da Cidade: Rio de Janeiro
//População: 6740080
//Área: 1200.25 km²
//PIB: 300.500.000.000 bilhões de reais
//Número de Pontos Turísticos: 30
//Densidade Populacional: 5622.24 hab/km²
//PIB per Capita: 44532.91 reais


// =====================
// Declaração das cartas
// =====================

unsigned long int populacao1 = 12325000, populacao2 = 6740080;
char estado1[] = "A";
char estado2[] = "B";
char cidade1[] = "SaoPaulo";
char cidade2[] = "RioDeJaneiro";
char codigo1[] = "A01";
char codigo2[] = "B02";
int pontos_turisticos1 = 50, pontos_turisticos2 = 30;
float area1 = 1521.11, area2 = 1200.25; 
double pib1 = 699280000000, pib2 = 300500000000;
float densidade1 = 8102.47, densidade2 = 5622.24, pib_per_capita1 = 56724.32, pib_per_capita2 = 44532.91;
float inversoDensidade1, inversoDensidade2, superPoder1, superPoder2;
int opcao;

// =====================
// Cálculos - Carta 1
// =====================

densidade1 = (float)populacao1 / area1;
inversoDensidade1 = 1.0 / densidade1;
pib_per_capita1 = pib1 / (float)populacao1;
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + inversoDensidade1;

//printf("Densidade populacional é: %.2f \n", densidade1);
//printf("Pib per capita é: %.2lf \n", pib_per_capita1);
//printf("Super Poder é: %.4f \n", superPoder1);

densidade2 = (float)populacao2 / area2;
inversoDensidade2 = 1.0 / densidade2;
pib_per_capita2 = pib2 / (float)populacao2;
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + inversoDensidade2;

//printf("Densidade populacional é: %.2f \n", densidade2);
//printf("Pib per capita é: %.2lf \n", pib_per_capita2);
//printf("Super Poder é: %.4f \n", superPoder2);

// =====================
// Menu de opções
// =====================

printf("*** Bem vindos ao jogo do Super Trunfo - Intermediário *** \n");
printf("Escolha o atributo para comparar:\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade\n");
scanf("%d", &opcao);

// =====================
// Comparação por atributo escolhido
// =====================

switch (opcao)
{

    // Comparação por População — maior valor vence
case 1:
    printf("Atributo: Populacao\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("A Carta 1 (%s) foi a vencedora com a maior população %lu \n", cidade1, populacao1);
    } else if (populacao1 < populacao2) {       
        printf("A Carta 2 (%s) foi a vencedora com a maior população %lu\n", cidade2, populacao2);
    } else {
        printf("Empate!\n");
    }
    break;

    // Comparação por Área — maior valor vence
case 2:
    printf("Atributo: Area\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    if (area1 > area2) {
    printf("A carta vencedora foi Carta 1 (%s) com %.2f km²!\n", cidade1, area1);
} else if (area1 < area2) {
    printf("A carta vencedora foi Carta 2 (%s) com %.2f km²!\n", cidade2, area2);
} else {
    printf("Empate! As duas cidades tem a mesma area.\n");
}
break;

// Comparação do PIB — maior valor vence

case 3:
    printf("Atributo: Pib\n");
    printf("Carta 1 - %s: %2.lf\n", cidade1, pib1);
    printf("Carta 2 - %s: %2.lf\n", cidade2, pib2);
    if (pib1 > pib2) {
        printf("A carta 1 foi a vencedora (%s) com %.2lf \n", cidade1, pib1);
    } else if (pib1 < pib2) {
        printf("A carta 2 foi a vencedora (%s) com %2.lf \n", cidade2, pib2);
    } else {
        printf("Empate!\n");
    }
    break;

    // Comparação dos pontos turisticos — maior valor vence

case 4:
    printf("Atributo: Pontos Turísticos\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
    if (pontos_turisticos1> pontos_turisticos2) {
        printf("A carta 1 foi a vencedora (%s) com %d pontos turísticos. \n", cidade1, pontos_turisticos1);
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("A carta 2 foi a vencedora (%s) com %d pontos turísticos. \n", cidade2, pontos_turisticos2);
    } else {
        printf("Empate!\n");
    }
    break;

    // Comparação por Densidade — menor valor vence

case 5:
    printf("Atributo: densidade\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("A carta 1 (%s) venceu com a menor densidade %.2f \n", cidade1, densidade1);
    } else if (densidade1 > densidade2) {
        printf("A carta 2 (%s) venceu com a menor densidade %.2f \n", cidade2, densidade2);
    } else {
        printf("Empate!\n");
    }
    break;                          

default:
    printf("Opção inválida!\n"); 
    break;
}



return 0;
}