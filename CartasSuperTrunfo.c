#include <stdio.h>

#include <stdio.h>

int main(){

// Descrição das variaveis.
    char estado1, estado2;
    char codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    int pontos1, pontos2, resultadoPopulacao, resultadoPibpc, resultadoDensidade, resultadoPontos, resultadoPib, resultadoArea, resultadoSuperPoder;
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2, superpoder1, superpoder2;

    

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
    scanf("%lu", &populacao1);

    printf("Diga a área da cidade em quilometros quadrados:  \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade:  \n");
    scanf("%f", &pib1);

    printf("Diga a quantidade de pontos turisticos:  \n");
    scanf("%d", &pontos1);

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
    scanf("%lu", &populacao2);

    printf("Diga a área da cidade em quilometros quadrados:  \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:  \n");
    scanf("%f", &pib2);

    printf("Diga a quantidade de pontos turisticos:  \n");
    scanf("%d", &pontos2);
//Calculos de Densidade e PIB per Capita.

        densidade1 = populacao1 / area1;
        densidade2 = populacao2 / area2;
        pibpc1 = pib1 / populacao1;
        pibpc2 = pib2 / populacao2;
    
// Calcular Super Poderes.

        superpoder1 = (float) ( populacao1 + 
                                area1 + 
                                pib1 + 
                                pontos1 + 
                                pibpc1) +
                                (1.0 / densidade1);

        superpoder2 = (float) ( populacao2 + 
                                area2 +
                                pib2 + 
                                pontos2 + 
                                pibpc2) + 
                                (1.0 / densidade2);

// Comparação das 2 Cartas

        resultadoPopulacao = (populacao1 > populacao2) * 1
                           + (populacao2 > populacao1) * 2;

        resultadoArea = (area1 > area2) * 1 
                      + (area2 > area1) *2;

        resultadoPib = (pib1 > pib2) * 1
                     + (pib2 > pib1) * 2;

        resultadoPontos = (pontos1 > pontos2) * 1
                        + (pontos2 > pontos1) *2;

        resultadoDensidade = (densidade1 < densidade2) * 1
                           + (densidade2 < densidade1) * 2;

        resultadoPibpc = (pibpc1 > pibpc2) * 1
                       + (pibpc2 > pibpc1) *2; 

        resultadoSuperPoder = (superpoder1 > superpoder2) * 1
                            + (superpoder2 > superpoder1) * 2;


//Visualização das cartas.
//Carta N°1.
    printf("\nSuas cartas\n\n");
    printf("Carta N°1\n\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km quadrado\n", area1);
    printf("PIB: %.2f\n",pib1);
    printf("Pontos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder : %2.f\n\n", superpoder1);

//Carta N°2.
    printf("Carta N°2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km quadrado\n", area2);
    printf("PIB: %.2f\n",pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Super Poder : %2.f\n\n", superpoder2);

// Comparar Cartas.

    printf("---Duelo entre cartas---\n\n");
    printf("População: Carta %d venceu\n", resultadoPopulacao);
    printf("Área: Carta %d venceu\n", resultadoArea);
    printf("PIB: Carta %d venceu\n", resultadoPib);
    printf("Pontos Turísticos: Carta %d venceu\n", resultadoPontos);
    printf("Densidade Populacional: Carta %d venceu\n", resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu\n", resultadoPibpc);
    printf("Super Poder: Carta %d venceu\n", resultadoSuperPoder);


return 0;
}