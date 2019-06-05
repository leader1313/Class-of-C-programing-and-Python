#include <stdio.h>
int main(void){
    // Your code here!
    int i = 1;
    int d = 0;
    
    do{d += i;
        i++;
    }while(i<=20);
        
    printf("%d",d);
}

