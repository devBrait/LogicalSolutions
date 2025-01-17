#include <stdio.h>
 
int main() {
 
    int n, cont=0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n*4; i++)
    {
        if(cont == 3)
        {
            printf("PUM\n");
            cont = -1;
        }
        else
        {
            printf("%d ", i);
        }
        cont++;
    }
 
    return 0;
}