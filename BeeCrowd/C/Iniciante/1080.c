#include <stdio.h>

int main() {
    int values[100];
    
    for(int i = 0; i < 100; i++){
        scanf("%d", &values[i]);
    }
    
    int bigger = values[0];
    int position = 0;
    
    for(int j = 1; j < 100; j++){
        if(values[j] > bigger){
            bigger = values[j];
            position = j;
        }
    }
    
    printf("%d\n", bigger);
    printf("%d\n", position + 1); 
    
    return 0;
}
