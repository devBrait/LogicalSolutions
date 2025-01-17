#include <stdio.h>

int main()
{
    int i, j;
    float x;

    for (i = 0; i <= 20; i += 2) {
        x = i / 10.f;
        for (j = 1; j <= 3; ++j)
            printf("I=%g J=%g\n", x, j + x);
    }

    return 0;
}