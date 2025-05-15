#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
      #include <stdio.h>

  int main () {

    int bispo, rainha;
    // Objetivo: Mover a torre 5 casas para direita
    printf ("Torre\n");

    for (int i = 0; i < 5; i++){
      printf ("Direita\n"); // Imprime a direção dos movimentos
    }
    //  o 1 é a quantidade de vezes que vamos mover a peça. Comeca do 0 e vai ate o 4. Ele comeca do zero, incrementa +1 e vai se repetir 5x.


    printf ("\n");

    printf ("Bispo\n");

    // Objetivo: Mover o Bispo

    bispo = 0;
    while (bispo < 5){
        printf ("Cima Direita\n");
        bispo++;
    }
    

    printf ("\n");

    printf ("Rainha\n");

    rainha = 0;

    do{
        printf ("Esquerda\n");
        rainha++;
    } while (rainha < 8);


    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
