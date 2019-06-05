#include <stdio.h>
int min(int x1, int x2){
    if(x1>x2) return x2;
    else return x1;
}

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    
    printf("%d", min(a,b));
    
}
