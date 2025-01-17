#include <stdio.h>


int main(){
    
    int n=0;
    while(1){
        
        int soma = 0;
        scanf("%d", &n);
        
        if(n == 0)
        {
            break;
        }
        else if(n % 2 == 0)
        {
           for (int i = 0; i < 5; i++) 
           {
                soma += n + 2 * i;  
           }
           printf("%d\n", soma);
        }
        else
        {
           n += 1;
           for (int i = 0; i < 5; i++) 
           {
                soma += n + 2 * i;  
           }
           printf("%d\n", soma);
        }
    }
    
    return 0;
}