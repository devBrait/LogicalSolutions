#include <stdio.h>


int main(){
    
    int n, values=0, cont=0;
    float media;
    
    while(1){
        
        scanf("%d", &n);
        if(n < 0)
        {
            break;
        }else
            values += n;
            cont++;
    }
    
    media = values/(float)cont;
    printf("%.2lf\n", media);
    
    
    return 0;
}