#include <stdio.h>
int main(){

    // Informações que precisam ser exatas
    // Torre se move somente 5 casas para a direita 
    // Bispo se move somente 5 casas para a diagonal direita Ex: Cima, Direita
    // Rainha se move 8 casas para a esquerda

    int peca;

    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n");

    printf("Qual das peças você deseja mover:\n");
    scanf("%d", &peca);

    //Torre
    if (peca == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Direita!\n");
        }
    }
    //Bispo
    if (peca == 2)
    {
        int i = 1;
        while (i < 6)
        {
            printf("Cima Direita!\n");
            i++;
        } 
    }
    //Rainha
    if (peca == 3)
    {
        int i = 1;
        do
        {
            printf("Esquerda!\n");
            i++;
        } while (i <= 8); 
    }
    
    return 0;
}
