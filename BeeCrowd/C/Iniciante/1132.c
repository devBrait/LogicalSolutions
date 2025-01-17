#include <stdio.h>
 
int main() {
 
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int i=0, soma=0;
    
    if(x > y)
    {
        for(i = y; i<=x; i++)
        {
            if(i % 13 != 0)
            {
                soma+=i;
            }
        }
    }
    else
    {
        for(i = x; i<=y; i++)
        {
            if(i % 13 != 0)
            {
                soma+=i;
            }
        }
    }
    printf("%d\n", soma);
    
 
    return 0;
}