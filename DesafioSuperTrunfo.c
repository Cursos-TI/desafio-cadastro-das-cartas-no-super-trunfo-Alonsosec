#include <stdio.h>

 int main() {
    // Variáveis para armazenar os atributos da cidade
    char codigo[10], nome[50];
    int populacao;
    float area, pib;
    int pontosTuristicos;

    printf("=== Cadastro da Carta - Super Trunfo ===\n");

    printf("Digite o código da cidade (ex: RJ01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade (ex: Rio de Janeiro): ");
    scanf("%s", nome);

    printf("Digite a população (ex: 6748000): ");
    scanf("%d", &populacao);

    printf("Digite a área em km² (ex: 1182.30): ");
    scanf("%f", &area);

    printf("Digite o PIB em bilhões (ex: 400.50): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos (ex: 10): ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados
    printf("\n=== Dados da Carta Cadastrada ===\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}