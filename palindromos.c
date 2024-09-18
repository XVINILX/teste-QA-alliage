#include <stdio.h>

int ehPalindromo(int num)
{
    int reverso = 0, original = num;
    printf("Valor inicial de num: %d\n", num);

    while (num > 0)
    {

        // obtém o útlimo valor inteiro
        int ultimoDigito = num % 10;

        // obtém o valor reverso: passa os últimos dígitos para a frente (reverso *10)
        reverso = reverso * 10 + ultimoDigito;

        printf("Último dígito: %d\n", ultimoDigito);
        printf("Reverso após adicionar último dígito: %d\n", reverso);

        // passa os primeiros dígitos para trás
        num /= 10;
        printf("Num após divisão: %d\n", num);
    }

    // compara se o o inteiro revertido é igual ao inteiro que entrou
    return original == reverso;
}

void listarPalindromos(int ini, int fim)
{
    printf("Números palíndromos entre %d e %d: ", ini, fim);

    for (int i = ini; i <= fim; i++)
    {
        if (ehPalindromo(i))
        {
            printf("Palindromo: %d\n", i);
        }
    }
    printf("\n");
}

int main()
{
    int ini, fim;
    printf("Digite o início do intervalo: ");
    scanf("%d", &ini);

    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    listarPalindromos(ini, fim);

    return 0;
}