#include <stdio.h>

int main() {
    int x, z, soma = 0, cont = 0;
    scanf("%d\n", &x);
    scanf("%d\n", &z);
    
    while (z <= x) 
    {
        scanf("%d", &z);
    } 

    while (soma <= z) 
    {
        soma += x;
        x++;
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}
