#include <stdio.h>

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;
    printf("Sequência de Fibonacci até %d termos: ", n);

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2)
        {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}