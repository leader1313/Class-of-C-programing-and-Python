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
    int a,b;
    scanf("%d,%d",&a,&b);
    
    sort(&a,&b);
    printf("%d,%d",a,b);

}
