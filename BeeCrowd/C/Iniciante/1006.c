#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
        
    printf("");
    scanf("%lf", &a);
    printf("");
    scanf("%lf", &b);
    printf("");
    scanf("%lf", &c);
    
    media = (a * 2.0 + b * 3.0 + c * 5.0)/10.0;
    
    printf("MEDIA = %.1lf\n", media);
        
 
    return 0;
}