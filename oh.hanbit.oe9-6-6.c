#include <stdio.h>
void sort(int *x, int *y){
    int z;
    if(*x<*y){
        z=*x;
        *x=*y;
        *y=z;
    }
    // printf("%d,%d\n",*x,*y);
}
int main(void){
    int a[10]={34,78,94,35,67,89,54,32,57,47};
    
    for(int i=0;i<10;i++){
        for(int j = i+1; j < 10;j++){
            sort(a+i,a+j);
        }
    }
    for(int k=0;k<10;k++){
        printf("%d ",*(a+k));    
    }
    
}
