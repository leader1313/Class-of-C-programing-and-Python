#include <stdio.h>
int main(void){
    // Your code here!
    float a,b,c;
    int d,e;
    
    scanf("%f\n", &a);
    
    b = a*1.8+32;
    c = (a-32)/1.8;
    
    d = b+0.5;
    e = c+0.5;
    
    printf("%f C = %d F\n", a,d);
    printf("%f F = %d C\n", a,e);
    
}
