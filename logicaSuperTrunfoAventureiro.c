#include <stdio.h>

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


int main (){

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

// =====================
// Cálculos - Carta 1
// =====================

densidade1 = (float)populacao1 / area1;
inversoDensidade1 = 1.0 / densidade1;
pib_per_capita1 = pib1 / (float)populacao1;
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + inversoDensidade1;

printf("Densidade populacional é: %.2f \n", densidade1);

printf("Pib per capita é: %.2lf \n", pib_per_capita1);

printf("Super Poder é: %.4f \n", superPoder1);


densidade2 = (float)populacao2 / area2;
inversoDensidade2 = 1.0 / densidade2;
pib_per_capita2 = pib2 / (float)populacao2;
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + inversoDensidade2;

printf("Densidade populacional é: %.2f \n", densidade2);

printf("Pib per capita é: %.2lf \n", pib_per_capita2);

printf("Super Poder é: %.4f \n", superPoder2);


// =====================
// Comparações
// =====================

printf("População 1 = 12.325.000 \n");
printf("População 2 = 6.740.080 \n");
if (populacao1 > populacao2){
    printf("População 1 é maior que a População 2! \n");
    } else {
        printf("População 2 é maior que a População 1! \n");
    }
printf("Área 1 = 1521.11 km² \n");
printf("Área 2 = 1200.25 km² \n");
    if (area1 > area2) {
    printf("Area 1 é maior que a Area2! \n");
}  else {
    printf("Area 2 é maior que a Area1! \n");
}    
printf("PIB 1 = %.2lf reais \n", pib1);
printf("PIB 2 = %.2lf reais \n", pib2);
if (pib1 > pib2) {
    printf("O Pib 1 é maior que o Pib 2! \n");
}  else {
    printf("O Pib 2 é maior que o Pib 1! \n");
}  
printf("Pontos Turísticos Cidade 1 = 50 \n");
printf("Pontos Turísticos Cidade 1 = 30 \n");
if (pontos_turisticos1 > pontos_turisticos2) {
    printf("Maior número de pontos turisticos na cidade 1. \n");
}  else {
    printf("Maior número de pontos turisticos na cidade 2. \n");
} 

return 0;
}