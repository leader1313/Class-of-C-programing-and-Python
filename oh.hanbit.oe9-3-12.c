#include <stdio.h>
int main(void){
    // Your code here!
    int a;

    scanf("%d",&a);
    
    for(int i=2;i<=a;i++){
        if(a%i==0){
            printf("%d ",i);
            a /= i;
            i--;
        }
    }
    
}
