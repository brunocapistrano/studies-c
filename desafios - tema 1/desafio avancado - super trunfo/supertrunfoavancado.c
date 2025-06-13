#include <stdio.h>

int main(){

    char estado1[1], estado2[1], codigoDaCarta1[3], codigoDaCarta2[3], nomeDaCidade1[50], nomeDaCidade2[50];
    unsigned long int populacao1, populacao2;
    float areaDaCidade1, areaDaCidade2;
    float pib1, pib2;
    int numerosDePontosTuristicos1,numerosDePontosTuristicos2;

    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapta1, pibPerCapta2;

    printf("\n--- Iniciando A Criação Da Primeira Cidade ---\n\n");

    printf("1 - Qual o estado dessa carta? \nEscolha letras entre A - H: ");
    scanf("%s", estado1);

    printf("\n");

    printf("2 - Qual o código da carta? \nInsira a Letra do Estádo e um número entre 01 - 04: ");
    scanf("%s", codigoDaCarta1);

    printf("\n");

    printf("3 - Qual a população dessa cidade? ");
    scanf("%d", &populacao1);

    printf("\n");

    printf("4 - Em quilômetros quadrados, qual a área da cidade? ");
    scanf("%f", &areaDaCidade1);

    printf("\n");

    printf("5 - Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("\n");

    printf("6 - Qual o número de pontos turísticos? ");
    scanf("%d", &numerosDePontosTuristicos1);

    printf("\n");

    printf("\n--- Iniciando A Criação Da Segunda Cidade ---\n\n");

    printf("1 - Qual o estado dessa carta? \nEscolha letras entre A - H: ");
    scanf("%s", estado2);

    printf("\n");

    printf("2 - Qual o código da carta? \nInsira a Letra do Estádo e um número entre 01 - 04: ");
    scanf("%s", codigoDaCarta2);

    printf("\n");

    printf("3 - Qual a população dessa cidade? ");
    scanf("%d", &populacao2);

    printf("\n");

    printf("4 - Em quilômetros quadrados, qual a área da cidade? ");
    scanf("%f", &areaDaCidade2);

    printf("\n");

    printf("5 - Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("\n");

    printf("6 - Qual o número de pontos turísticos? ");
    scanf("%d", &numerosDePontosTuristicos2);

    printf("\n");

    densidadePopulacional1 = populacao1 / areaDaCidade1;
    pibPerCapta1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / areaDaCidade2;
    pibPerCapta2 = pib2 / populacao2;

    float inversoDensidade1 = 1 / densidadePopulacional1;
    float inversoDensidade2 = 1 / densidadePopulacional2;

    float superPoderCarta1 = populacao1 + areaDaCidade1 + pib1 + numerosDePontosTuristicos1 + pibPerCapta1 + inversoDensidade1;
    float superPoderCarta2 = populacao2 + areaDaCidade2 + pib2 + numerosDePontosTuristicos2 + pibPerCapta2 + inversoDensidade2;

    printf("--- Primeira Carta Criada ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaDaCidade1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerosDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta1);
    printf("--- Fim ---\n"); 

    printf("--- Segunda Carta Criada ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaDaCidade2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerosDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta2);
    printf("--- Fim ---\n"); 

    printf("--- Comparação de Cartas ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", areaDaCidade1 > areaDaCidade2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", numerosDePontosTuristicos1 > numerosDePontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capta: %d\n", pibPerCapta1 > pibPerCapta2);
    printf("Super Poder: %d\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}