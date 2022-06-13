// Exercício 1c - Faça uma função que receba um vetor com n números inteiros,
// então você deve rotacionar os elementos do vetor em r vezes.
void ex1c(int vetor[], int n, int r)
{
    int i = 0, j = 0, aux = 0;

    for (i = 0; i < r; i++)
    {
        aux = vetor[0];
        for (j = 0; j < n - 1; j++)
        {
            vetor[j] = vetor[j + 1];
        }
        vetor[n - 1] = aux;
    }
}
