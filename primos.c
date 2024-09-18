#include <stdio.h>

void listarPrimos(int n)
{
    int i, j, primo;
    printf("Números primos até %d: ", n);
    for (i = 2; i <= n; i++)
    {
        primo = 1; // Assume que i é primo
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                primo = 0; // i não é primo
                break;
            }
        }
        if (primo)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    listarPrimos(n);
    return 0;
}