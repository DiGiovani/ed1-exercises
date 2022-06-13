// Exercício 2 - Escreva uma função que recebe uma pilha (vetor) de tamanho máximo x e recebe o caractere que indica uma operação:
// "e": empilha o número n
// "d": desempilha um valor (neste caso, o valor de n é irrelevante)

// Você dispoõe da variável topo_ex2, do tipo "int", para controlar sua pilha. Ela é inicializada com -1.
#include <stdio.h>
extern int topo_ex2;

void ex2(int x, int pilha[], char operacao, int n)
{
    switch (operacao)
    {
    case 'e':
        topo_ex2++;
        pilha[topo_ex2] = n;
        break;

    case 'd':
        topo_ex2--;
        break;
    }
}