#include <stdio.h>

int main(){
    
    int n, x, y;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int soma = 0;
        scanf("%d %d", &x, &y);
        

        if(x % 2 == 0)
        {
            x += 1;
        }
        
        for(int j = 0; j < y; j++)
        {
            soma += x;
            x += 2; 
        }
        
        printf("%d\n", soma);
    }
    
    return 0;
}
