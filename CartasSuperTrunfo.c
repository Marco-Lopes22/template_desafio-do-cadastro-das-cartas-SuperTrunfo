#include <stdio.h>

int main(){

//// Descrição das variaveis.
    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1, pontos1;
    float area1, pib1;

    char estado2;
    char codigo2[10];
    char cidade2[20];
    int populacao2, pontos2;
    float area2, pib2;

// Área de "decoração da tela".
    
    printf("Vamos cadastrar a carta N°1. \n");

// Pedir dados da priemira carta para o usuario.
    printf("\nEscolha a inicial de um Estado:  \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta desse estado:    ex: A01\n");
    scanf("%s", &codigo1);

    printf("Escolha uma cidade:  \n");
    scanf("%s", &cidade1);

    printf("Diga a quantidade de habitantes:  \n");
    scanf("%d", &populacao1);

    printf("Diga a área da cidade em quilometros quadrados:  \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade:  \n");
    scanf("%f", &pib1);

    printf("Diga a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos1 );

// Área de "decoração da segunda tela".

    printf("Agora vamos cadastrar a carta N°2. \n");

// Pedir dados da segunda carta para o usuario.

    printf("\nEscolha a inicial de um Estado:  \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta desse estado:    ex: A01\n");
    scanf("%s", &codigo2);

    printf("Escolha uma cidade:  \n");
    scanf("%s", &cidade2);

    printf("Diga a quantidade de habitantes:  \n");
    scanf("%d", &populacao2);

    printf("Diga a área da cidade em quilometros quadrados:  \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:  \n");
    scanf("%f", &pib2);

    printf("Diga a quantidade de pontos turisticos:  \n");
    scanf("%d", &pontos2);

//Visualização das cartas.
//Carta N°1.
    printf("\nSuas cartas\n\n");
    printf("Carta N°1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f Km quadrado\n", area1);
    printf("PIB: %f\n",pib1);
    printf("Pontos turisticos: %d\n\n", pontos1);

//Carta N°2.
    printf("Carta N°2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km quadrado\n", area2);
    printf("PIB: %f\n",pib2);
    printf("Pontos turisticos: %d\n", pontos2);

return 0;
}