// Exercício 3
// Leia 10 valores inteiros e armazene em um vetor. ok
// Exiba apenas os números pares em ordem inversa. ok
// Conte quantos valores ímpares foram digitados. ok
// Mostre o segundo maior valor armazenado. ok

#include <stdio.h>

int main()
{

    int vet[10];
    int i;

    // Adicionar os valores ao vetor
    printf("Digite 10 valores a seguir:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\n");

    // Mostrar apenas os números pares digitados
    printf("Os valores pares digitados sao: ");
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");

    // Mostrar os números pares na ordem inversa
    printf("Os valores pares na ordem inversa sao: ");
    for (i = 9; i >= 0; i--)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");

    // Mostrar a quantidade de números ímpares digitados
    int impar = 0;
    for (i = 0; i < 10; i++)
    {
        if (vet[i] % 2 != 0)
        {
            impar++;
        }
    }
    printf("A quantidade de numeros impares eh: %d\n", impar);

    // Mostrar o segundo maior número armazenado
    int maior = vet[0];
    int seg_maior = vet[0];

    for (i = 1; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            seg_maior = maior;
            maior = vet[i];
        }
        else if (vet[i] > seg_maior && vet[i] < maior)
        {
            seg_maior = vet[i];
        }
    }
    printf("Segundo maior valor: %d\n", seg_maior);

    return 0;
}
