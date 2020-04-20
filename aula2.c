#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
    int numero;
    
    printf("Digite um numero");
    scanf("%d", &numero);
    getchar();

    printf("O numero e igual a %d", numero);

    return 0;
}
