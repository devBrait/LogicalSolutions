#include <stdio.h>
 
int main() {
 
    int number, horas;
    double salario, salarioTotal;
    
    printf("");
    scanf("%d", &number);
    printf("");
    scanf("%d", &horas);
    printf("");
    scanf("%lf", &salario);
    
    salarioTotal = (horas * salario);
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salarioTotal);
 
    return 0;
}