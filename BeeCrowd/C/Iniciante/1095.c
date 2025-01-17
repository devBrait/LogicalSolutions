#include <stdio.h>

int main(){
    
    int i=-2;

    for(int j = 60; j >= 0; j-=5)
    {
        printf("I=%d J=%d\n", i+=3, j);
        
    }
    return 0;
}