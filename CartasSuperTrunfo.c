#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Flávio Maia

int main() {

    // Atribuição de Variáveis

    char estadoA, estadoB;
    int cartaA01, cartaB01;
    char cidadeA01[20], cidadeB01[20];
    int populacaoA01, populacaoB01;
    float areaA01, areaB01;
    float pibA01, pibB01;
    int pontosturisticosA01, pontosturisticosB01;
     
    // Cadastro das Cartas

    // CartaA01

    printf("INSIRA DADOS DA PRIMEIRA CARTA\n\n");

    printf("Código do Estado: \n");
    scanf("%s", &estadoA);

    printf("Número da Carta: \n");
    scanf("%d", &cartaA01);

    printf("Nome da cidade: \n");
    scanf("%s", &cidadeA01);

    printf("População: \n");
    scanf("%d", &populacaoA01);

    printf("Área: \n");
    scanf("%f", &areaA01);

    printf("PIB: \n");
    scanf("%f", &pibA01);

    printf("Quantidade de pontos turísticos: \n\n\n\n");
    scanf("%d", &pontosturisticosA01);

    // CartaB01

    printf("INSIRA DADOS DA SEGUNDA CARTA\n\n");

    printf("Código do Estado: \n");
    scanf("%s", &estadoB);

    printf("Número da Carta: \n");
    scanf("%d", &cartaB01);

    printf("Nome da cidade: \n");
    scanf("%s", &cidadeB01);

    printf("População: \n");
    scanf("%d", &populacaoB01);

    printf("Área: \n");
    scanf("%f", &areaB01);

    printf("PIB: \n");
    scanf("%f", &pibB01);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticosB01);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCARTAS CADASTRADAS\n\n");

        printf("Carta: %c0%d\n", estadoA, cartaA01);
        printf("Cidade: %s\n", cidadeA01);
        printf("População: %d\n", populacaoA01);
        printf("Área(km²): %.2f\n", areaA01);
        printf("PIB(R$): %.2f\n", pibA01);
        printf("Quantidade de Pontos Turísticos: %d\n\n", pontosturisticosA01);

        printf("Carta: %c0%d\n", estadoB, cartaB01);
        printf("Cidade: %s\n", cidadeB01);
        printf("População: %d\n", populacaoB01);
        printf("Área(km²): %.2f\n", areaB01);
        printf("PIB(R$): %.2f\n", pibB01);
        printf("Quantidade de Pontos Turísticos: %d\n\n\", pontosturisticosB01);
    
        printf("Fim de Trabalho");
        
    return 0;
}
