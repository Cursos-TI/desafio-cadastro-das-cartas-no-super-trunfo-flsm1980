#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Flávio Maia

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estadoA, estadoB;
    char cidadeA01[20], cidadeB01[20];
    int populacaoA01, populacaoB01;
    float areaA01, areaB01;
    float pibA01, pibB01;
    int pontosturisticosA01, pontosturisticosB01;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("DADOS DA PRIMEIRA CARTA\n\n");
    printf("Informe o Estado: \n");
    scanf("%c", &estadoA);

    printf("Informe a cidade: \n");
    scanf("%s", &cidadeA01);

    printf("Informe a população: \n");
    scanf("%d", &populacaoA01);

    printf("Informe a área: \n");
    scanf("%F", &areaA01);

    printf("Informe o PIB: \n");
    scanf("%f", &pibA01);

    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", pontosturisticosA01);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
