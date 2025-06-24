#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Flávio Maia

int main() {

    // Atribuição de Variáveis

    char cartaA1[3];
    char cartaB1[3];
    char cidadeA1[20];
    char cidadeB1[20];
    int populacaoA1, populacaoB1;
    float areaA1, areaB1;
    float pibA1, pibB1;
    int pontosturisticosA1, pontosturisticosB1;
     
    // Cadastro das Cartas

    // CartaA1

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaA1);

    printf("Nome da cidade: \n");
    scanf("%s", cidadeA1);

    printf("População: \n");
    scanf("%d", &populacaoA1);

    printf("Área: \n");
    scanf("%f", &areaA1);

    printf("PIB: \n");
    scanf("%f", &pibA1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosA1);

    // CartaB1

    printf("\n");
    printf("INSIRA DADOS DA SEGUNDA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaB1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidadeB1);
    
    printf("População: \n");
    scanf("%d", &populacaoB1);
    
    printf("Área: \n");
    scanf("%f", &areaB1);
    
    printf("PIB: \n");
    scanf("%f", &pibB1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCARTAS CADASTRADAS\n\n");

        printf("Carta: %s\n", cartaA1);
        printf("Cidade: %s\n", cidadeA1);
        printf("População: %d habitantes\n", populacaoA1);
        printf("Área: %.2f km²\n", areaA1);
        printf("PIB: %.2f R$\n", pibA1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticosA1);
        
        // Cálculo de densidade demográfica cartaA1
        float densidadeA1 = (populacaoA1 / areaA1);
        // Cálculo de PIB per capita cartaA1
        float pibcapitaA1 = (pibA1 / populacaoA1);

        // Exibição dos dados calculados
        printf("Densidade Populacional: %.2f hab/km²\n", densidadeA1);
        printf("PIB per Capita: %.2f R$\n\n", pibcapitaA1);

        printf("Carta: %s\n", cartaB1);
        printf("Cidade: %s\n", cidadeB1);
        printf("População: %d habitantes\n", populacaoB1);
        printf("Área: %.2f km²\n", areaB1);
        printf("PIB: %.2f R$\n", pibB1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticosB1);
        
        // Cálculo de densidade demográfica cartaB1
        float densidadeB1 = (populacaoB1 / areaB1);
        // Cálculo de PIB per capita cartaB1
        float pibcapitaB1 = (pibB1 / populacaoB1);

        // Exibição dos dados calculados
        printf("Densidade Populacional: %.2f hab/km²\n", densidadeB1);
        printf("PIB per Capita: %.2f R$\n\n", pibcapitaB1);

        printf("Fim\n\n\n");
        
    return 0;
}
