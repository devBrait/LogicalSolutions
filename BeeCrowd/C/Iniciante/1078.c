#include <stdio.h>
 
int main() {
 
    int n;
    printf("");
    scanf("%d", &n);
    
    for(int i=1; i<=10; i++){
        int result = i*n;
        printf("%d x %d = %d\n", i, n, result);
    }
 
    return 0;
}