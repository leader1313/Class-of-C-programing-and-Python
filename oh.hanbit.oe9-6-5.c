#include <stdio.h>
void sort(int *x, int *y){
    int z;
    if(*x<*y){
        z=*x;
        *x=*y;
        *y=z;
    }
}
int main(void){
    int a[10]={34,78,94,35,67,89,54,32,57,47};
    
    for(int i=0;i<10;i++){
            sort(a,a+i);
        }
        printf("%d",*a);    
    
}
