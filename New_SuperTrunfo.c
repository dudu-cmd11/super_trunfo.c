#include <stdio.h>
#include <stdlib.h>

int main (){

int populacao, pontoTuristico, populacao2, pontoTuristico2;
char pais [30];
char pais2 [30];
float area, densidade, PIB, area2, densidade2, PIB2;
int atributo1, atributo2;
float soma1Carta1, soma2Carta1, soma1Carta2, soma2Carta2, resultado1, resultado2, resultadoFinal;

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

printf("Você pode escolher até dois atributos para o duelo. Lembrando que eles não podem se repetir:\n\n");

printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Demográfica\n");

printf("Qual será o primeiro atributo:\n");
scanf("%d", &atributo1);

printf("Qual será o segundo atributo:\n");
scanf("%d", &atributo2);

//////////////////////////////////////////////////////////////////

printf("Esse são os dados de ambas as cartas cadastradas acima:\n\n");
printf("Pais - %s|------|Pais - %s\n", pais, pais2);
printf("1 - População: %d|------|População: %d\n", populacao, populacao2);
printf("2 - Área: %.2f|------|Área: %.2f\n", area, area2);
printf("3 - PIB: %.2f|------|PIB: %.2f\n", PIB, PIB2);
printf("4 - Pontos Turisticos: %d|------|Pontos Turisticos: %d\n", pontoTuristico, pontoTuristico2);
printf("5 - Densidade demográfica: %.2f|------|Densidade demográfica: %.2f\n\n", densidade, densidade2);

//////////////////////////////////////////////////////////////////

switch (atributo1)
{
case 1:
    if (atributo1 == 1) soma1Carta1 = populacao;
    if (atributo2 == 1) soma2Carta1 = populacao;
    if (atributo1 == 1) soma1Carta2 = populacao2;
    if (atributo2 == 1) soma2Carta2 = populacao2;
    {
    }
        printf("Você escolheu o atributo População para o duelo e o resultado é...\n");
    if (populacao > populacao2)
        printf("O atributo 'População' da carta 1 ganhou!\n");
     else if 
        (populacao2 > populacao)
        printf("O atributo 'População' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 2:
    if (atributo1 == 2) soma1Carta1 = area;
    if (atributo2 == 2) soma2Carta1 = area;
    if (atributo1 == 2) soma1Carta2 = area2;
    if (atributo2 == 2) soma2Carta2 = area2;
    {
    }
        printf("Você escolheu o atributo Área para o duelo e o resultado é...\n");
    if (area > area2)
        printf("O atributo 'Área' da carta 1 ganhou!\n");
     else if 
        (area2 > area)
        printf("O atributo 'Área' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 3:
    if (atributo1 == 3) soma1Carta1 = PIB;
    if (atributo2 == 3) soma2Carta1 = PIB;
    if (atributo1 == 3) soma1Carta2 = PIB2;
    if (atributo2 == 3) soma2Carta2 = PIB2;
    {
    }
        printf("Você escolheu o atributo PIB para o duelo e o resultado é...\n");
    if (PIB > PIB2)
        printf("O atributo 'PIB' da carta 1 ganhou!\n");
     else if 
        (PIB2 > PIB)
        printf("O atributo 'PIB' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 4:
    if (atributo1 == 4) soma1Carta1 = pontoTuristico;
    if (atributo2 == 4) soma2Carta1 = pontoTuristico;
    if (atributo1 == 4) soma1Carta2 = pontoTuristico2;
    if (atributo2 == 4) soma2Carta2 = pontoTuristico2;
    {
    }
        printf("Você escolheu o atributo Pontos Turisticos para o duelo e o resultado é...\n");
    if (pontoTuristico > pontoTuristico2)
        printf("O atributo 'Pontos Turisticos' da carta 1 ganhou!\n");
     else if 
        (pontoTuristico2 > pontoTuristico)
        printf("O atributo 'Ponto Turisticos' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 5:
    if (atributo1 == 5) soma1Carta1 = densidade;
    if (atributo2 == 5) soma2Carta1 = densidade;
    if (atributo1 == 5) soma1Carta2 = densidade2;
    if (atributo2 == 5) soma2Carta2 = densidade2;
    {
    }
        printf("Você escolheu o atributo Densidade Demográfica para o duelo e o resultado é...\n");
    if (densidade < densidade2)
        printf("O atributo 'Densidade Demográfica' da carta 1 ganhou!\n");
     else if 
        (densidade2 < densidade)
        printf("O atributo 'População' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;

default:
        printf("Opção inválida!\n");
    break;
}

switch (atributo2)
{
case 1:
    if (atributo1 == 1) soma1Carta1 = populacao;
    if (atributo2 == 1) soma2Carta1 = populacao;
    if (atributo1 == 1) soma1Carta2 = populacao2;
    if (atributo2 == 1) soma2Carta2 = populacao2;
    {
    }
        printf("Você escolheu o atributo População para o duelo e o resultado é...\n");
    if (populacao > populacao2)
        printf("O atributo 'População' da carta 1 ganhou!\n");
     else if 
        (populacao2 > populacao)
        printf("O atributo 'População' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 2:
    if (atributo1 == 2) soma1Carta1 = area;
    if (atributo2 == 2) soma2Carta1 = area;
    if (atributo1 == 2) soma1Carta2 = area2;
    if (atributo2 == 2) soma2Carta2 = area2;
    {
    }
        printf("Você escolheu o atributo Área para o duelo e o resultado é...\n");
    if (area > area2)
        printf("O atributo 'Área' da carta 1 ganhou!\n");
     else if 
        (area2 > area)
        printf("O atributo 'Área' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 3:
    if (atributo1 == 3) soma1Carta1 = PIB;
    if (atributo2 == 3) soma2Carta1 = PIB;
    if (atributo1 == 3) soma1Carta2 = PIB2;
    if (atributo2 == 3) soma2Carta2 = PIB2;
    {
    }
        printf("Você escolheu o atributo PIB para o duelo e o resultado é...\n");
    if (PIB > PIB2)
        printf("O atributo 'PIB' da carta 1 ganhou!\n");
     else if 
        (PIB2 > PIB)
        printf("O atributo 'PIB' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 4:
    if (atributo1 == 4) soma1Carta1 = pontoTuristico;
    if (atributo2 == 4) soma2Carta1 = pontoTuristico;
    if (atributo1 == 4) soma1Carta2 = pontoTuristico2;
    if (atributo2 == 4) soma2Carta2 = pontoTuristico2;
    {
    }
        printf("Você escolheu o atributo Pontos Turisticos para o duelo e o resultado é...\n");
    if (pontoTuristico > pontoTuristico2)
        printf("O atributo 'Pontos Turisticos' da carta 1 ganhou!\n");
     else if 
        (pontoTuristico2 > pontoTuristico)
        printf("O atributo 'Ponto Turisticos' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;
case 5:
    if (atributo1 == 5) soma1Carta1 = densidade;
    if (atributo2 == 5) soma2Carta1 = densidade;
    if (atributo1 == 5) soma1Carta2 = densidade2;
    if (atributo2 == 5) soma2Carta2 = densidade2;
    {
    }
        printf("Você escolheu o atributo Densidade Demográfica para o duelo e o resultado é...\n");
    if (densidade < densidade2)
        printf("O atributo 'Densidade Demográfica' da carta 1 ganhou!\n");
     else if 
        (densidade2 < densidade)
        printf("O atributo 'Densidade Demográfica' da carta 2 ganhou!\n");
    else
        printf("Temos um Empate!\n");
    break;

default:
        printf("Opção inválida!\n");
    break;
}

printf("\nAgora temos a soma dos dois atributos que você escolheu para a comparação.\n");

resultado1 = soma1Carta1 + soma2Carta1;
resultado2 = soma1Carta2 + soma2Carta2;

printf("A soma dos atributos da carta 1 é igual a %.2f\n", resultado1);
printf("E a soma dos atributos da carta 2 é de %.2f\n\n", resultado2);

printf("Agora iremos para a comparação final e ver quem foi o vencedor na soma dos atributos.\n");

if (resultado1 > resultado2)
{
    printf("Com %.2f de atributos a carta1 vence!\n", resultado1);
} else 
{
    printf("Com %.2f de atributos a carta1 vence!\n", resultado2);
}
        
return 0;
}
