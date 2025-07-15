#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[50];
    char estado2[50];
    char carta = 'A01, A02';
    char cidade1[50];
    char cidade2[50];
    int populacao1, populacao2;
    float area1,area2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // DADOS DA CIDADE 1
    printf("Estado: \n");
    scanf("%s", &estado1);

    printf("Nome da Cidade 1: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%i", &populacao1);

    printf("Area em Km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Numero de pontos Turisticos: \n");
    scanf("%d", &turisticos1);
    
    // DADOS CA CARTA 1
    printf("Carta 1: A01\n");
    printf("Estado: %s\n", estado1);

    printf("Cidade: %s\n", cidade1);
    printf("População: %i Habitantes\n", populacao1);
    printf("Area em Km²: %.3f\n", area1);
    printf("PIB: R$ %.0f bilhões\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);



    // DADOS DA CIDADE 2
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Nome da Cidade 2: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%i", &populacao2);

    printf("Area em Km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos Turisticos: \n");
    scanf("%d", &turisticos2);

    //DADOS DA CARTA 2

    printf("Carta 2: A02 \n");
    printf("Estado: \n");

    printf("Cidade: %s\n", cidade2);
    printf("População: %i Habitantes\n", populacao2);
    printf("Area em Km²: %.3f\n", area2);
    printf("PIB: R$ %.0f bilhões\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);



    return 0;
}
