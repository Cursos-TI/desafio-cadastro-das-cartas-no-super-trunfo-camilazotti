#include <stdio.h>

int main () {

    //Váriaveis carta 1
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    char estado1 [20], codigo_carta1 [5], cidade1 [20];

    //Váriaveis carta 2
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    char estado2 [20], codigo_carta2 [5], cidade2 [20];

    //Dados Carta 1
    printf("Carta 1:\n");
    printf("Nome do Estado: \n", estado1);
    scanf("%s",estado1);
    printf("Código da carta: \n",codigo_carta1);
    scanf("%s",codigo_carta1);
    printf("Nome da cidade: \n",cidade1);
    scanf("%s", cidade1);
    printf("Número da População: \n",populacao1);
    scanf("%i", &populacao1);
    printf("Área: \n", area1);
    scanf("%f", &area1);
    printf("PIB: \n",pib1);
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos: \n", pontos_turisticos1);
    scanf("%i", &pontos_turisticos1);

    //Dados Carta 2
    printf("Carta 2:\n");
    printf("Nome do Estado: \n", estado2);
    scanf("%s",estado2);
    printf("Código da carta: \n",codigo_carta1);
    scanf("%s",codigo_carta2);
    printf("Nome da cidade: \n",cidade2);
    scanf("%s", cidade2);
    printf("Número da População: \n",populacao2);
    scanf("%i", &populacao2);
    printf("Área: \n", area2);
    scanf("%f", &area2);
    printf("PIB: \n",pib2);
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos: \n", pontos_turisticos2);
    scanf("%i", &pontos_turisticos2);

    //Imprimindo carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s \nCódigo: %s \nCidade: %s \n", estado1, codigo_carta1,cidade1);
    printf("População: %i \nÁrea: %f km² \nPIB: %f de reais \nNúmero de Pontos Turísticos: %i \n", populacao1, area1,pib1,pontos_turisticos1);

    //Imprimindo carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s \nCódigo: %s \nCidade: %s \n", estado2, codigo_carta2,cidade2);
    printf("População: %i \nÁrea: %f km² \nPIB: %f de reais \nNúmero de Pontos Turísticos: %i \n", populacao2, area2,pib2,pontos_turisticos2);

    return 0;
}
