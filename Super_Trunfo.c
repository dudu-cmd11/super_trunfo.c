#include <stdio.h>

int main() {
    int carta, pt, populacao;
    char cidade[30];
    char estado[30];
    char codigo[30];
    float area, pib;

    printf("Bem vindo ao nosso jogo SuperTrunfo!\n\n");
    printf("Preencha os campos a seguir:\n\n");

    // Somente visual de inicio

    printf("Qual o número da sua carta:\n");
    scanf("%d", &carta);

    printf("Qual o codigo de sua carta:\n");
    scanf("%s", codigo);

    printf("Qual o estado:\n");
    scanf(" %[^\n]", estado);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem em sua cidade: \n");
    scanf("%d", &pt);

    printf("Muito obrigado!\n\n");
    printf("Segue os dados da carta 1:\n\n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("No total são %d pontos turisticos\n\n", pt);

    printf("Agora iremos para a segunda carta!\n");

    // Dados da segunda carta.

    printf("Qual o número da sua carta:\n");
    scanf("%d", &carta);

    printf("Qual o codigo de sua carta:\n");
    scanf("%s", codigo);

    printf("Qual o estado:\n");
    scanf(" %[^\n]", estado);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("Qual o PIB dessa cidade:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem em sua cidade: \n");
    scanf("%d", &pt);

    printf("Muito obrigado!\n\n");
    printf("Segue os dados da carta 2:\n\n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("No total são %d pontos turisticos\n\n", pt);

    printf("Agradecemos as informações e um bom jogo!\n");

    return 0;
}
