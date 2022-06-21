// Exercício 1 - Implemente as funções de pilha nos locais indicados, utilizando, para isso, a struct declarada abaixo.
// Utilize como referência os slides de aula do prof. Fabrizzio.
// Na função ex1, receba um caractere "operacao", que deverá indicar a realização das seguintes operações:
//
//      'e' - empilhar o valor informado - retornar 1 para sucesso e 0 caso a pilha esteja cheia.
//      'd' - desempilhar - retornar o valor desempilhado. Em caso de pilha vazia, retornar 0.
//      't' - retornar o número que é o topo da pilha.
//
// Todos os valores da pilha são inicializados com 0, inclusive o valor n.
//

#include <stdio.h>

struct pilha
{
    int dados[10]; // armazena os elementos inseridos na PILHA
    int n;         // indica o numero de elementos inseridos na PILHA (deve ser atualizado a cada operação)
};

int ex1(struct pilha *p, int valor, char operacao)
{
    int success = 0;

    switch (operacao)
    {
    case 'e':
        success = empilha(p, valor);
        break;
    case 'd':
        success = desempilha(p);
        break;
    case 't':
        success = topo(p);
        break;
    }
    return success;
}

int empilha(struct pilha *p, int valor)
{
    if (p->n >= 10)
    {
        return 0;
    }
    p->dados[p->n] = valor;
    p->n++;
    return 1;
}

int desempilha(struct pilha *p)
{
    if (p->n <= 0)
    {
        return 0;
    }
    p->n--;
    p->dados[p->n] = 0;
    return 1;
}

int topo(struct pilha *p)
{
    return p->dados[(p->n) - 1];
}