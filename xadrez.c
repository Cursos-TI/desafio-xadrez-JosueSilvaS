#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    int torre_mov = 5;
    int bispo_mov = 5;
    int rainha_mov = 8;

    int iniciailizador = 0 ;
    while ( iniciailizador < torre_mov)
    {
        printf("Torre move: Direita\n");
        iniciailizador++;
    }
    printf("\n");
    int x = 0 ;
    do{
        printf("Bispo move: Cima\n");
        printf("Bispo move: Direita\n");
        x++;
    }while(x < bispo_mov);
    printf("\n");
    for(int i = 0 ; i < rainha_mov; i++){
        printf("Rainha move: Esquerda\n");
    }


    printf("\n");




    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.


    for( int i = 1 ; i > 0 ; i--){
        int x = 2;
        while (x > 0)
        {
            printf("Cavalo move: Cima\n");
            x--;
        }
        printf("Cavalo move: Esquerda\n");
        
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.











    return 0;
}
