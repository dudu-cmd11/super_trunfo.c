#include <stdio.h>
#include <stdlib.h>

int main (){

int populacao, pontoTuristico, populacao2, pontoTuristico2;
char pais [30];
char pais2 [30];
float area, densidade, PIB, area2, densidade2, PIB2;
int escolhaJogador;

printf("|----------- Bem vindo ao jogo SuperTrunfo -----------|\n\n");
printf("Insira os dados da carta 1\n\n");

printf("Digite o nome do País:\n");
scanf("%s", pais);

printf("Qual a população desse País:\n");
scanf("%d", &populacao);

printf("Qual a área total desse País:\n");
scanf("%f", &area);

printf("Qual o PIB desse País:\n");
scanf("%f", &PIB);

printf("Quantos pontos turisticos tem nesse país:\n");
scanf("%d", &pontoTuristico);

densidade = (float)populacao / area;

/////////////////////////////////////////////  Parte da segunda carta  ///////////////////////////////////////////////////////////////////////

printf("\nAgora insira os dados da carta 2\n");

printf("\nDigite o nome do País:\n");
scanf("%s", pais2);

printf("Qual a população desse País:\n");
scanf("%d", &populacao2);

printf("Qual a área total desse País:\n");
scanf("%f", &area2);

printf("Qual o PIB desse País:\n");
scanf("%f", &PIB2);

printf("Quantos pontos turisticos tem nesse país:\n");
scanf("%d", &pontoTuristico2);

densidade2 = (float)populacao2 / area2;

//////////////////////////////////////////////////////////////////

printf("Esses são os atributos que podem ser escolhidos para o duelo:\n\n");

printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Demográfica\n");

printf("Qual deles você deseja ver o duelo:\n");
scanf("%d", &escolhaJogador);

//////////////////////////////////////////////////////////////////

printf("Esse são os dados de ambas as cartas cadastradas acima:\n\n");
printf("Pais -  %s|------|Pais - %s\n", pais, pais2);
printf("1 - População: %d|------|População: %d\n", populacao, populacao2);
printf("2 - Área: %.2f|------|Área: %.2f\n", area, area2);
printf("3 - PIB: %.2f|------|PIB: %.2f\n", PIB, PIB2);
printf("4 - Pontos Turisticos: %d|------|Pontos Turisticos: %d\n", pontoTuristico, pontoTuristico2);
printf("5 - Densidade demográfica: %.2f|------|Densidade demográfica: %.2f\n\n", densidade, densidade2);

//////////////////////////////////////////////////////////////////

switch (escolhaJogador)
{
case 1:
        printf("Você escolheu o atributo População para o duelo e o reultado é...\n");
    if (populacao > populacao2)
        printf("O atributo 'População' da carta 1 ganhou!");
     else if 
        (populacao2 > populacao)
        printf("O atributo 'População' da carta 2 ganhou!");
    else
        printf("Temos um Empate!");
    break;
case 2:
        printf("Você escolheu o atributo Área para o duelo e o reultado é...\n");
    if (area > area2)
        printf("O atributo 'Área' da carta 1 ganhou!");
     else if 
        (area2 > area)
        printf("O atributo 'Área' da carta 2 ganhou!");
    else
        printf("Temos um Empate!");
    break;
case 3:
        printf("Você escolheu o atributo PIB para o duelo e o reultado é...\n");
    if (PIB > PIB2)
        printf("O atributo 'PIB' da carta 1 ganhou!");
     else if 
        (PIB2 > PIB)
        printf("O atributo 'PIB' da carta 2 ganhou!");
    else
        printf("Temos um Empate!");
    break;
case 4:
        printf("Você escolheu o atributo Pontos Turisticos para o duelo e o reultado é...\n");
    if (pontoTuristico > pontoTuristico2)
        printf("O atributo 'Pontos Turisticos' da carta 1 ganhou!");
     else if 
        (pontoTuristico2 > pontoTuristico)
        printf("O atributo 'Ponto Turisticos' da carta 2 ganhou!");
    else
        printf("Temos um Empate!");
    break;
case 5:
        printf("Você escolheu o atributo Densidade Demográfica para o duelo e o reultado é...\n");
    if (densidade < densidade2)
        printf("O atributo 'Densidade Demográfica' da carta 1 ganhou!");
     else if 
        (densidade2 < densidade)
        printf("O atributo 'População' da carta 2 ganhou!");
    else
        printf("Temos um Empate!");
    break;

default:
        printf("Opção inválida!");
    break;
}

return 0;
}
