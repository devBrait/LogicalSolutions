#include <stdio.h>
 
int main() {
 
    double salario, salarioNovo, reajuste;
    int porcentagem;
    
    printf("");
    scanf("%lf", &salario);
    
    if(salario <= 400.00 && salario > 0){
        
        salarioNovo = salario * 1.15;
        reajuste = salarioNovo - salario;
        porcentagem = 15;
        
    }else if(salario > 400.00 && salario <= 800.00){
        
        salarioNovo = salario * 1.12;
        reajuste = salarioNovo - salario;
        porcentagem = 12;
        
    }else if(salario > 800.00 && salario <= 1200.00){
        salarioNovo = salario * 1.10;
        reajuste = salarioNovo - salario;
        porcentagem = 10;
        
    }else if(salario > 1200.00 && salario <= 2000.00){
        
        salarioNovo = salario * 1.07;
        reajuste = salarioNovo - salario;
        porcentagem = 7;
        
    }else{
        
        salarioNovo = salario * 1.04;
        reajuste = salarioNovo - salario;
        porcentagem = 4;
        
    }
 
    printf("Novo salario: %.2lf\n", salarioNovo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);
    
    return 0;
}