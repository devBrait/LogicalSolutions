#include <stdio.h>
 
int main() {
 
   int quantidade, x;
   int cont=0;
   scanf("%d", &quantidade);
   
   for(int i=0; i<quantidade; i++){
       scanf("%d", &x);
       if(x >=10 && x <= 20){
           cont++;
       }
   }
   
   printf("%d in\n", cont);
   printf("%d out\n", quantidade-cont);
 
    return 0;
}