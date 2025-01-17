#include <stdio.h>

int main() {
    int password = 2002;
    int palpite;

    while (1) {
        scanf("%d", &palpite);
        if (palpite == password) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
