#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
}
