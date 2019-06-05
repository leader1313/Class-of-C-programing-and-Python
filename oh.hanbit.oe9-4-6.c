#include <stdio.h>
int ucrid(int x1, int x2){
    if(x2==0) return x1;
    else return ucrid(x2,x1%x2);
}

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a) printf("%d is bigger than %d",b, a);
    else printf("%d",ucrid(a,b));
    
}
