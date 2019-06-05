#include <stdio.h>
int main(void){
    int a=20;
    int b=10;
    int *pa = &a;
    int *pb = &b;
    
    printf("sum = %d\n", *pa+*pb);
    printf("minus = %d\n", *pa-*pb);
    printf("multiply = %d\n", (*pa)*(*pb));
    printf("devide = %d\n", (*pa)/(*pb));
 
    
}
