#include <stdio.h>
int min(int x1, int x2){
    if(x1>x2) return x2;
    else return x1;
}

int main(void){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d = min(min(a,b),c);
    printf("%d", d);
}
