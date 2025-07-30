#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Nível Mestre
// Teste Flávio Maia

int main() {

    // Atribuição de Variáveis

    char cartaA1[3], cartaB1[3], cidadeA1[30], cidadeB1[30];
    unsigned long int populacaoA1, populacaoB1;
    float areaA1, areaB1, pibA1, pibB1, densidadeA1, densidadeB1, inversodensidadeA1, inversodensidadeB1, pibcapitaA1, pibcapitaB1;
    int pontosturisticosA1, pontosturisticosB1;
     
    // Cadastro das Cartas

    // CartaA1

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código da Carta (letra e número): \n");
    scanf("%s", cartaA1);

    printf("Nome da cidade: \n");
    scanf(" %29[^\n]", cidadeA1);

    printf("População: \n");
    scanf("%lu", &populacaoA1);

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

    printf("Nome da cidade: \n");
    scanf(" %29[^\n]", cidadeB1);
    
    printf("População: \n");
    scanf("%lu", &populacaoB1);
    
    printf("Área: \n");
    scanf("%f", &areaB1);
    
    printf("PIB: \n");
    scanf("%f", &pibB1);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB1);

    // Exibição dos Dados das Cartas:
    printf("\n\nCARTAS CADASTRADAS\n\n");

        printf("Carta: %s\n", cartaA1);
        printf("Cidade: %s\n", cidadeA1);
        printf("População: %lu habitantes\n", populacaoA1);
        printf("Área: %.2f km²\n", areaA1);
        printf("PIB: %.2f R$\n", pibA1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticosA1);

        // Cálculo de densidade demográfica cartaA1
        if (areaA1 != 0) {
          densidadeA1 = (float)populacaoA1 / areaA1;} // Garante que a divisão seja float
        else {
          densidadeA1 = 0.0f;
          printf("Aviso: área da Carta A01 é zero, densidade populacional indefinida!\n\n");
        }

        // Cálculo do inverso da densidade demográfica cartaA1
        if (densidadeA1 != 0.0f) {
          inversodensidadeA1 = 1.0f / densidadeA1;} 
        else {
          densidadeA1 = 0.0f;
          printf("Aviso: área da Carta A01 é zero, densidade populacional indefinida!\n\n");
        }
        
        // Cálculo do PIB per capita da carta A1
        if (populacaoA1 != 0) {
          pibcapitaA1 = pibA1 / (float)populacaoA1;} // Garante que a divisão seja float
        else {
          pibcapitaA1 = 0.0f;
          printf("Aviso: população da Carta A01 é zero, PIB per capita indefinido!\n\n");
        }
        
        // Exibição dos dados calculados
        printf("Densidade Populacional: %.2f hab/km²\n", densidadeA1);
        printf("PIB per Capita: %.2f R$\n", pibcapitaA1);
        
        // Cálculo do Super Poder cartaA1
        float superpoderA1 = populacaoA1 + areaA1 + pibA1 + pontosturisticosA1 + pibcapitaA1 + inversodensidadeA1;
        printf ("Superpoder Carta A01: %.2f\n\n", superpoderA1);
        
        
        printf("Carta: %s\n", cartaB1);
        printf("Cidade: %s\n", cidadeB1);
        printf("População: %lu habitantes\n", populacaoB1);
        printf("Área: %.2f km²\n", areaB1);
        printf("PIB: %.2f R$\n", pibB1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontosturisticosB1);
 
        // Cálculo da densidade demográfica da carta 2

        if (areaB1 != 0.0f) {
          densidadeB1 = (float)populacaoB1 / areaB1;} // Garante que a divisão seja float
        else {
          densidadeB1 = 0.0f;
          printf("Aviso: área da Carta B01 é zero, densidade populacional indefinida!\n\n");
        }

        // Cálculo do inverso da densidade demográfica cartaA1
        if (densidadeB1 != 0.0f) {
          inversodensidadeB1 = 1.0f / densidadeB1;} 
        else {
          densidadeB1 = 0.0f;
          printf("Aviso: área da Carta B01 é zero, densidade populacional indefinida!\n\n");
        }

        // Cálculo do PIB per capita da carta 2
        if (populacaoB1 != 0) {
          pibcapitaB1 = pibB1 / (float)populacaoB1;} // Garante que a divisão seja float
        else {
          pibcapitaB1 = 0.0f;
          printf("Aviso: população da Carta B01 é zero, PIB per capita indefinido!\n\n");
        }

        // Exibição dos dados calculados
        printf("Densidade Populacional: %.2f hab/km²\n", densidadeB1);
        printf("PIB per Capita: %.2f R$\n", pibcapitaB1);

        // Cálculo do Super Poder cartaB1
        float superpoderB1 = populacaoB1 + areaB1 + pibB1 + pontosturisticosB1 + pibcapitaB1 + inversodensidadeB1;
        printf ("Superpoder Carta B01: %.2f\n\n", superpoderB1);

        // Comparação dados das cartas

        printf("*** Comparação das Cartas ***\n\n");
        printf("População: carta A1 venceu? %d\n", populacaoA1 > populacaoB1);
        printf("Área: carta A1 venceu? %d\n", areaA1 > areaB1);
        printf("PIB: carta A1 venceu? %d\n", pibA1 > pibB1);
        printf("Pontos Turísticos: carta A1 venceu? %d\n", pontosturisticosA1 > pontosturisticosB1);
        printf("Densidade Populacional: carta A1 venceu? %d\n", inversodensidadeA1 > inversodensidadeB1);
        printf("PIB per Capita: carta A1 venceu? %d\n", pibcapitaA1 > pibcapitaB1);
        printf("Super Poder: carta A1 venceu? %d\n\n", superpoderA1 > superpoderB1);

        printf("*** Fim *** \n\n\n");
        
    return 0;
}
