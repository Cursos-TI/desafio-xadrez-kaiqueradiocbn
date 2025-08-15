#include <stdio.h>


int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int Bispo = 5;  
    int Torre = 5;
    int Rainha = 8;
    int cavalo = 1;
    int i;
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("Bispo Anda:\n");
    for (i = 0 ; i < Bispo; i++) {
        printf("Diagonal Cima Direita\n");
       

    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("Torre anda:\n");
    i = 0;
    while (i < Torre){
        printf("Direita\n");
        i++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Rainha anda:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    }while ( i < Rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf ("Cavalo Anda:\n");
    while (cavalo--)
    {
        for(int i = 0; i < 2; i++){
            printf ("Baixo\n");
        }
        printf ("Esquerda\n");


    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
