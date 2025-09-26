// Exercício 5
// Armazene 5 números inteiros em um vetor. ok
// Exiba apenas os valores nas posições ímpares do vetor.ok
// Conte quantos números são divisíveis por 2 e por 3 ao mesmo tempo.ok
// Mostre o maior valor armazenado e o menor valor armazenado. ok

#include <stdio.h>

int main()
{
    int vet[5];
    int i;

    // armazenar dados no vetor
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\n");

    // valores em posições ímpares
    printf("Os valores nas posicoes impares sao: ");
    for (i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");

    // valores divisíveis por 2 e 3
    int cont_div = 0;
    for (i = 0; i < 5; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            cont_div++;
        }
    }
    printf("Quantidade de numeros divisiveis por 2 e por 3: %d\n", cont_div);

    // maior e menor valor
    int maior = vet[0];
    int menor = vet[0];

    for (i = 1; i < 5; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }

    printf("Maior valor do vetor: %d\n", maior);
    printf("Menor valor do vetor: %d\n", menor);

    return 0;
}
