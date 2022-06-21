// Exercício 2 - Implemente as funções de uma fila linear nos locais indicados, utilizando, para isso, a struct declarada abaixo.
// Utilize como referência os slides de aula do prof. Fabrizzio.
// Na função ex2, receba um caractere "operacao", que deverá indicar a realização das seguintes operações:
//
//      'e' - enfileirar o valor informado - retornar 1 para sucesso e 0 caso a fila esteja cheia.
//      'd' - desenfileirar - neste processo a fila precisa ser rearranjada. Retornar o valor desenfileirado. Em caso de fila vazia, retornar 0.
//      'p' - retornar o número que é o primeiro da fila
//      'q' - retornar a quantidade de elementos da fila
//
// Todos os valores da pilha são inicializados com 0, inclusive o valor n.
//

#include <stdio.h>

struct fila
{
    int dados[10]; // armazena os elementos inseridos na FILA
    int n;         // indica o numero de elementos inseridos na FILA (deve ser atualizado a cada operação)
};

int ex2(struct fila *f, int valor, char operacao)
{
    int success = 0, i = 0;
    for (i = 0; i < 10; i++)
    {
    }
    switch (operacao)
    {
    case 'e':
        success = enfileirar(f, valor);
        break;
    case 'd':
        success = desenfileirar(f);
        break;
    case 'p':
        success = primeiro(f);
        break;
    case 'q':
        success = quantidade(f);
        break;
    }
    return success;
}

int enfileirar(struct fila *f, int valor)
{
    if (f->n >= 10)
    {
        return 0;
    }
    f->dados[f->n] = valor;
    f->n++;
    return 1;
}

int desenfileirar(struct fila *f)
{
    int dequeued = f->dados[0];
    int i = 0;
    if (f->n <= 0)
    {
        return 0;
    }
    f->n--;
    for (i = 0; i < f->n - 1; i++)
    {
        f->dados[i] = f->dados[i + 1];
    }
    f->dados[f->n] = 0;
    return dequeued;
}

int primeiro(struct fila *f)
{
    if (f->n <= 0)
    {
        return 0;
    }
    return f->dados[0];
}

int quantidade(struct fila *f)
{
    return f->n;
}