#include <stdio.h>
int main(void){
    // Your code here!
    int a;
    int i=0;
    
    scanf("%d",&a);
    if(a>0){
    while(a!=0){
        a/=10;
        i++;
    }
        
    }else if(a==0){
        i=1;
    }else{
        a= -a;
        i=1;
     while(a!=0){
        a/=10;
        i++;
    }   
    }
    printf("%d",i);
}
