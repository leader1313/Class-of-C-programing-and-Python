#include <stdio.h>
int main(void){
    // Your code here!
    int a;
    int n=0;
    
    scanf("%d",&a);
    
    for(int i=2;i<a;i++){
        if(a%i==0){
            n = 1;
            break;
        }
    }
    if(n==1){
    printf("no");
    }else{
    printf("Yes");
    }
        
}
