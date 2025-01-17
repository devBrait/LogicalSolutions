#include <stdio.h>
 
int main() {
 
    int value, cont=1;
    int contAl=0, contG=0, contD=0;
    
   
    while(cont == 1){
        scanf("%d", &value);
       switch (value) {
          case  1:
            contAl++;
            break;
          case 2:
            contG++;
            break;
          case 3:
            contD++;
            break;
          case 4:
            cont=0;
            break;  
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", contAl);
    printf("Gasolina: %d\n", contG);
    printf("Diesel: %d\n", contD);
 
    return 0;
}