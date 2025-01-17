#include <stdio.h>

int main() {
    int valores[15];
    int par[5], impar[5];
    int parIndex = 0, imparIndex = 0;

    for(int i = 0; i < 15; i++) {
        scanf("%d", &valores[i]);
    }

    for(int i = 0; i < 15; i++) {
        if(valores[i] % 2 == 0) {
            par[parIndex] = valores[i];
            parIndex++;
            if(parIndex == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                parIndex = 0;
            }
        } else {
            impar[imparIndex] = valores[i];
            imparIndex++;
            if(imparIndex == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                imparIndex = 0;
            }
        }
    }

    for(int i = 0; i < imparIndex; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(int i = 0; i < parIndex; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
