// Exercício 1
// Armazene 20 valores inteiros em um vetor (suponha que são distintos).ok
// Exiba apenas os números múltiplos de 5.ok
// Encontre e mostre o maior valor do vetor. ok
// Calcule a soma dos valores armazenados nas posições pares do vetor (índices pares).

#include <stdio.h>

int main()
{
    int vet[20], i = 0;

    // inserir valores no vetor
    for (i = 0; i < 20; i++)
    {
        printf("Digite os valores do vetor %d:  ", i + 1);
        scanf("%d", &vet[i]);
    }
    // mostrar valores no vetor
    printf("Os numeros armazenados sao: ");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    // encontre e mostre os numeros multiplos por 5
    int mult = 0;
    printf("Sao numeros multiplos de 5: ");
    for (i = 0; i < 20; i++)
    {
        if (vet[i] % 5 == 0)
        {
            printf("%d ", vet[i]);
            mult = 1;
        }
    }
    if (!mult)
    {
        printf("Nao existem numeros multiplos de 5 no vetor");
    }
    printf("\n");

    // maior valor no vetor
    int maior = vet[0];
    for (i = 1; i < 20; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    printf("O maior numero do vetor eh: %d\n", maior);

    // soma dos pares
    int soma_par = 0;
    for (i = 0; i < 20; i += 2)
    {
        soma_par += vet[i];
    }
    printf("Soma dos elementos nas posicoes pares: %d\n", soma_par);

    return 0;
}
