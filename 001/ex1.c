// Exercício 1 - Escreva uma função  que receba um vetor com x números inteiros,
// calcule e retorne a quantidade de números iguais ou superiores ao valor n, dado como entrada.
int ex1(int x, int v[], int n)
{
    int i = 0, amount_gt = 0;
    for (i = 0; i < x; i++)
    {
        if (v[i] >= n)
        {
            amount_gt = amount_gt + 1;
        }
    }

    return amount_gt;
}