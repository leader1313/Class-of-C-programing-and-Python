#include <stdio.h>
int main(void){
    int a=1;
    int b=0;
    
    while(a>0){
        
        scanf("%d",&a);
        if(a<0){
        break;
        }
        b += a;
    }
    
    printf("%d",b);
}
