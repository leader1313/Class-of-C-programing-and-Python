#include <stdio.h>
int absolute(int x){
    if(x<0){
        x = -x;
    }
    return x;
}

int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", absolute(a));
}