// Exercício 2
// Leia 12 números inteiros e armazene em um vetor. ok
// Mostre todos os números que são negativos. ok
// Calcule a média aritmética dos números positivos. ok
// Encontre o menor número do vetor e mostre sua posição.

#include <stdio.h>

int main()
{

    int vet[5];
    int i;

    // Armazenar dados no vetor
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // Mostrar numeros armazenados
    printf("Os numeros armazenados sao: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Mostrar numeros negativos
    int neg = 0;
    printf("Os numeros negativos sao: ");
    for (i = 0; i < 5; i++)
    {
        if (vet[i] < 0)
        {
            printf("%d ", vet[i]);
            neg++;
        }
    }
    if (neg == 0)
    {
        printf("Nao existem numeros negativos");
    }
    printf("\n");

    // Media dos numeros positivos
    float media;
    int soma = 0, cont = 0;

    for (i = 0; i < 5; i++)
    {
        if (vet[i] > 0)
        {
            soma += vet[i];
            cont++;
        }
    }
    if (cont > 0)
    {
        media = (float)soma / cont;
        printf("Media dos numeros positivos: %.2f\n", media);
    }
    else
    {
        printf("Nao existem numeros positivos\n");
    }

    // Mostrar o menor numero do vetor
    int menor = vet[0];
    int posi = 0;
    for (i = 1; i < 5; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
            posi = i;
        }
    }
    printf("Menor numero: %d, na posicao: %d\n", menor, posi);

    return 0;
}
