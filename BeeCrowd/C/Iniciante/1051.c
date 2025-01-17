#include <stdio.h>
 
int main() {
 
     double salario, taxa, desconto;

    printf("");
    scanf("%lf", &salario);

    if (salario <= 2000.0) {
        printf("Isento\n");
    } else {
        if (salario <= 3000.0) {
            taxa = 0.08;
            desconto = (salario - 2000.0) * taxa;
        } else if (salario <= 4500.0) {
            taxa = 0.18;
            desconto = 1000.0 * 0.08 + (salario - 3000.0) * taxa;
        } else {
            taxa = 0.28;
            desconto = 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * taxa;
        }

        printf("R$ %.2lf\n", desconto);
    }

    return 0;
}