#include <stdio.h>
int main(void){
    int a;
    
    scanf("%d", & a);
    
    if(a > 0){
        printf("positive");
    }else if(a==0){
        printf("zero");
    }else{
        printf("negative");
    }
}
