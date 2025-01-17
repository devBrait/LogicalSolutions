#include <stdio.h>
 
int main() {
 
    int a, b;
    
    while(1){
        scanf("%d %d", &a, &b);
        
        if(a <= 0 || b <= 0)
        {
            break;
        }
        
        int i, soma=0;
        
        if (a < b) {
            for (i = a; i <= b; i++) {
                printf("%d ", i);
                soma += i;
            }
        } else {
            for (i = b; i <= a; i++) {
                printf("%d ", i);
                soma += i;
            }
        }
        
        printf("Sum=%d\n", soma);
    }
 
    return 0;
}
