#include <stdio.h>

int main(){

    char estado[1], codigoDaCarta[3], nomeDaCidade[50];
    int populacao;
    float areaDaCidade;
    float pib;
    int numerosDePontosTuristicos;

    float densidadePopulacional;
    float pibPerCapta;

    printf("\n--- Iniciando A Criação De Uma Nova Cidade ---\n\n");

    printf("1 - Qual o estado dessa carta? \nEscolha letras entre A - H: ");
    scanf("%s", estado);

    printf("\n");

    printf("2 - Qual o código da carta? \nInsira a Letra do Estádo e um número entre 01 - 04: ");
    scanf("%s", codigoDaCarta);

    printf("\n");

    printf("3 - Qual a população dessa cidade? ");
    scanf("%d", &populacao);

    printf("\n");

    printf("4 - Em quilômetros quadrados, qual a área da cidade? ");
    scanf("%f", &areaDaCidade);

    printf("\n");

    printf("5 - Qual o PIB da cidade? ");
    scanf("%f", &pib);

    printf("\n");

    printf("6 - Qual o número de pontos turísticos? ");
    scanf("%d", &numerosDePontosTuristicos);

    printf("\n");

    densidadePopulacional = populacao / areaDaCidade;
    pibPerCapta = pib / populacao;

    printf("--- Nova Carta Criada ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaDaCidade);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numerosDePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta);
    printf("--- Fim ---"); 

    return 0;
}