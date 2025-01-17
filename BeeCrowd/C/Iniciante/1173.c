#include <stdio.h>

int main()
{
    
    int n[10], x;
    
    scanf("%d", &x);
    
    for(int i=0; i<10; i++)
    {
        n[i] = x;
        x = x*2;
    }
    
    for(int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
