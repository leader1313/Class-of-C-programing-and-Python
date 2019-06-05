#include <stdio.h>
int main(void){
    int x[10]={0,1,2,3,4,5,6,7,8,9};
    
    printf("%x\n",x);
    printf("%x\n",x+1);
    printf("%d\n",*x);
    printf("%d",*(x+1));
}
