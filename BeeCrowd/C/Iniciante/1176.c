#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        int n;
        scanf("%d", &n);

        unsigned long long int a = 0, b = 1, temp;
        for (int j = 0; j < n; j++) {
            temp = a + b;
            a = b;
            b = temp;
        }

        printf("Fib(%d) = %llu\n", n, a);
    }

    return 0;
}
