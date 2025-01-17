#include <stdio.h>

int main()
{
    int n=0;
    
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        else
        {
            for(int i = 1; i <= n; i++)
            {
                printf("%d", i);
                if (i < n) 
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
