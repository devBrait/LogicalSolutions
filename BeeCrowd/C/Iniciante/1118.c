#include <stdio.h>

int main()
{
    float notaA, notaB;
    int continuar = 1;

    while (continuar == 1)
    {
        int count = 0;
        while (count < 2)
        {
            float nota;
            scanf("%f", &nota);
            if (nota >= 0 && nota <= 10)
            {
                if (count == 0)
                {
                    notaA = nota;
                }
                else
                {
                    notaB = nota;
                }
                count++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }

        printf("media = %.2f\n", (notaA + notaB) / 2);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continuar);
        } while (continuar != 1 && continuar != 2);
    }

    return 0;
}
