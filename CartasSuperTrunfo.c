#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigocarta[3];
    char nomedacidade[30];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    // Declara as variaveis para cada atributo da cidade.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado:\n");
    scanf(" %c", &estado);

    printf("Digite o Codigo da Carta:\n");
    scanf(" %3[^\n]", codigocarta);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %30[^\n]", nomedacidade);

    printf("Digite a População:\n");
    scanf(" %d", &populacao);

    printf("Digite a Área em km:\n");
    scanf(" %f", &area);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib);

    printf("Digite o Número de pontos turísticos:\n");
    scanf(" %d", &pontosturisticos);
    // Recebe as informações do usuario via terminal utilizando o scanf
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    puts("-- INFORMAÇOES DA CARTA CADASTRADA --");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área em km: %f km²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturisticos);
    puts("-------------------------------------");

    return 0;
}
