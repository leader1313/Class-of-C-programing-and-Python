#include <stdio.h>
void swap(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main(void){
    int x,y;

    scanf("%d,%d",&x,&y);
    printf("%d, %d\n",x,y);
    swap(&x,&y);
    printf("%d, %d\n",x,y);
    
    
}
