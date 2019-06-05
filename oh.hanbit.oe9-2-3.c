#include <stdio.h>
int main(void){
    // Your code here!
    double a, b, c;
    
    scanf("%lf\n", &a);
    b = a*2.54;
    c = a/2.54;
    
    printf("%0.6lf in = %0.6lf cm\n", a,b);
    printf("%0.6lf cm = %0.6lf in\n", a,c);
    
}
