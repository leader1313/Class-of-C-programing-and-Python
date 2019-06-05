#include <stdio.h>
int main(void){
    // Your code here!

    int a,b,c;
    
    scanf("%d\n", &a);
    
    b = a*1.8+32;
    c = (a-32)/1.8;
    
    printf("%d C = %d F\n", a,b);
    printf("%d F = %d C\n", a,c);
    
}
