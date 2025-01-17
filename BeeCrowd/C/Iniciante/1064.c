#include <stdio.h>
 
int main() {
 
    float values[6]; 
    
    for(int i=0; i<6; i++){
        printf("");
        scanf("%f", &values[i]);
    }
    
    int cont=0;
    float sum=0;
    
    for(int j=0; j<6; j++){
        if(values[j] > 0){
            cont++;
            sum += values[j];
        }
    }
    
    printf("%d valores positivos\n", cont);
    if(cont > 0){
        float average = sum / cont;
        printf("%.1f\n", average);
    }
 
    return 0;
}