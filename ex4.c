// Exercício 4
// Leia 5 valores inteiros e armazene em um vetor. ok
// Mostre apenas os valores maiores que a média geral do vetor. ok
// Encontre o menor valor ímpar e exiba sua posição. ok
// Calcule a soma dos múltiplos de 3.

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
    printf("\n");

    // calculo de media
    float media;
    int soma = 0;

    for (i = 0; i < 5; i++)
    {
        soma += vet[i];
    }
    media = (float)soma / 5;
    printf("A media geral do vetor eh de %.2f.\n", media);

    // Mostrar numeros maiores que a media
    printf("Os numeros do vetor maiores que a media sao: ");
    for (i = 0; i < 5; i++)
    {
        if (vet[i] > media)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");

    // Menor valor impar e sua posição
    int menor_impar = -1;
    int pos = -1;

    for (i = 0; i < 15; i++)
    {
        if (vet[i] % 2 != 0)
        {
            if (menor_impar == -1 || vet[i] < menor_impar)
            {
                menor_impar = vet[i];
                pos = i;
            }
        }
    }

    if (menor_impar != -1)
    {
        printf("Menor valor impar: %d, na posicao: %d\n", menor_impar, pos);
    }
    else
    {
        printf("Nao existem numeros impares\n");
    }

    // Soma dos multiplos de 3
    int soma_mult = 0;

    for (i = 0; i < 5; i++)
    {
        if (vet[i] % 3 == 0)
        {
            soma_mult += vet[i];
        }
    }
    printf("A soma de numeros multiplos eh de %d.\n", soma_mult);

    return 0;
}