#include <stdio.h>
int main(void){
    int a[20];
    a[0]=0;
    a[1]=1;
    printf("a[%d]=%d\n",0,a[0]);
    printf("a[%d]=%d\n",1,a[1]);
    for(int i=2;i<21;i++){
        a[i]=a[i-1]+a[i-2];
        printf("a[%d]=%d\n",i,a[i]);
    }
}
