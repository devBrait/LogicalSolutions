#include <stdio.h>
 
int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int h, l;
    scanf("%d %d", &h, &l);
    
    if((a <= h && b <= l) || (a <= l && b <= h) || (b <= h && c <= l) ||
    (b <= l && c <= h) || (a <= h && c <= l) || (a <= l && c <= h))
    {
        printf("S\n");
    }else
    {
        printf("N\n");
    }
 
    return 0;
}