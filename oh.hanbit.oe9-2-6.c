#include <stdio.h>
int main(void){
    // Your code here!
    double a, b, c;
    
    scanf("%lf\n", &a);
    b = a*1.8+32;
    c = (a-32)/1.8;
    
    printf("%0.2lf C = %0.2lf F\n", a,b);
    printf("%0.2lf F = %0.2lf C\n", a,c);
    
}
