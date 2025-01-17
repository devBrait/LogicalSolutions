#include <stdio.h>
 
int main() {
 
    int value;
    
    printf("");
    scanf("%d", &value);
    
    for(int i = 1; i <= value; i++){
        if(i % 2 == 0){
            int result = i*i;
            printf("%d^2 = %d\n", i, result);
        }
    }
 
    return 0;
}