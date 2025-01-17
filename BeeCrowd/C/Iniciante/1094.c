#include <stdio.h>
 
int main() {
 
    
    int quantidadeTestes;
    scanf("%d", &quantidadeTestes);
    int cont=0;
    int contC=0;
    int contR=0;
    int contS=0;
    
    char tipos; 
    
    for(int i = 0; i < quantidadeTestes; i++){
        scanf("%d %c\n", &cont, &tipos);
        
        if(tipos == 'C'){
           contC += cont;
        }else if(tipos == 'R'){
            contR += cont;
        }else{
            contS += cont;
        }
        
    }
    
    int total= contC+contR+contS;
    double percentualCoelhos = (double)contC/total * 100;
    double percentualRatos = (double)contR/total * 100;
    double percentualSapos = (double)contS/total * 100;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", contC);
    printf("Total de ratos: %d\n", contR);
    printf("Total de sapos: %d\n", contS);
    
    printf("Percentual de coelhos: %.2lf %\n", percentualCoelhos);
    printf("Percentual de ratos: %.2lf %\n", percentualRatos);
    printf("Percentual de sapos: %.2lf %\n", percentualSapos);
    
    return 0;
}