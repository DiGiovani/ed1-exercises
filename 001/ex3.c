// Exercício 3 - Escreva uma função que recebe uma pilha (vetor) de tamanho máximo x e recebe uma palavra (vetor de char) de tamanho n.
// utilize a pilha para descobrir se a palavra informada é um palíndromo, retornando 1 em caso positivo e 0, caso contrário.

// Você dispoõe da variável topo_ex3, do tipo "int", para controlar sua pilha. Ela é inicializada com -1.
#include <stdio.h>
extern int topo_ex3;

int ex3(int x, char pilha[], char palavra[], int n)
{
    int i = 0;

    for (i = 1; i <= n; i++)
    {
        topo_ex3++;
        pilha[i - 1] = palavra[n - i];
    }
    for (i = 0; i < n; i++)
    {
        if (palavra[i] != pilha[i])
        {
            return 0;
        }
    }

    return 1;
}