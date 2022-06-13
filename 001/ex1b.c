// Exercício 1b - Faça uma função que receba dois vetores, em que o primeiro contém n números inteiros,
// então você deve copiar o conteúdo do primeiro para o segundo em ordem reversa.

int *ex1b(int vetor1[], int vetor2[], int n)
{
    int i = n;
    for (i = n; i >= 0; i--)
    {
        vetor2[n - i - 1] = vetor1[i];
    }
    return vetor2;
}
