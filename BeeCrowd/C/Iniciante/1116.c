#include <stdio.h>

int main(){
    
     
    int n, x, y;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &x, &y);
        
        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
           float result = (float)x / y;
           printf("%.1f\n", result); 
        }
    }
 
    return 0;
}