#include <stdio.h>

int main()
{
    int n[20], value;
    
    for(int i=19; i>=0; i--)
    {
        scanf("%d", &value);
        n[i] = value;
    }
    
    for(int i=0; i<20; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}
