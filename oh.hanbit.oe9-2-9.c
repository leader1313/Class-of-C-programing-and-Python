#include <stdio.h>
int main(void){
    // Your code here!
    char A;
    int b,c,d;
    
    scanf("%c%d",&A,&d);
    
    b = d/100;
    c = d%100;
    
    printf("Building %c,Floor %d, Room No.%d",A,b,c);
}
