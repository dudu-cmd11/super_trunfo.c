#include <stdio.h>

int main() {
    int carta, pt1, pt2;
    unsigned long int populacao1, populacao2; 
    char cidade[30];
    char estado[30];
    char codigo[30];
    float densidade, inverso_densidade, pib_per_capita, superpoder1, superpoder2, area1, area2, pib1, pib2;

    
    printf("**Bem vindo ao nosso jogo SuperTrunfo**\n\n");
    printf("Preencha os campos da primeira carta:\n\n");

    printf("Qual o número da sua carta:\n");
    scanf("%d", &carta);

    printf("Qual o codigo de sua carta:\n");
    scanf("%s", codigo);

    printf("Qual o estado:\n");
    scanf(" %[^\n]", estado);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade:\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem em sua cidade: \n");
    scanf("%d", &pt1);

    
    densidade = (float)populacao1 / area1;
    inverso_densidade = 1.0 / densidade;
    pib_per_capita = pib1 / (float)populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + inverso_densidade + pib_per_capita + pt1;

    
    printf("\n *Dados da carta* 1 \n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n\n", pt1);

    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Inverso da densidade: %.2f\n", inverso_densidade);
    printf("Super poder da carta: %.2f\n\n", superpoder1);

   
    printf("Agora iremos para a segunda carta!\n\n");

    printf("Qual o número da sua carta:\n");
    scanf("%d", &carta);

    printf("Qual o codigo de sua carta:\n");
    scanf("%s", codigo);

    printf("Qual o estado:\n");
    scanf(" %[^\n]", estado);

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem em sua cidade: \n");
    scanf("%d", &pt2);

    
    densidade = (float)populacao2 / area2;
    inverso_densidade = 1.0 / densidade;
    pib_per_capita = pib1 / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib1 + inverso_densidade + pib_per_capita + pt2;

    
    printf("\n *Dados da carta 2* \n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n\n", pt2);

    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Inverso da densidade: %.2f\n", inverso_densidade);
    printf("Super poder da carta: %.2f\n\n", superpoder2);

    
    printf("Agora vamos para a comparação das cartas!\n");

    printf("A população da carta 1 é maior que o da carta 2? %d\n", (populacao1 > populacao2));
    printf("A Área da carta 1 é maior que o da carta 2? %d\n", (area1 > area2));
    printf("O PIB da carta 1 é maior que o da carta 2? %d\n", (pib1 > pib2));
    printf("Os pontos turísticos da carta 1 são maiores que o da carta 2? %d\n", (pt1 > pt2));
    printf("O SuperPoder da carta 1 é maior que o da carta 2? %d\n", (superpoder1 > superpoder2));
    return 0;
}
