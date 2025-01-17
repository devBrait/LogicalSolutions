#include <stdio.h>

int main()
{
    int n, value=0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int soma=0;
        scanf("%d", &value);
        for(int j = 1; j < value; j++)
        {
            if(value % j == 0)
            {
                soma += j;
            }
        }
        
        if(soma == value)
        {
            printf("%d eh perfeito\n", value);
        }else
            printf("%d nao eh perfeito\n", value);
    }
    
}
