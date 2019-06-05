#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    int i=0;
    int j=0;
    int c = 1;
    scanf("%d",&a);
    b = a;
    while(a!=0){
        a/=10;
        i++;
    }
    if(i==3){
        printf("%d",b);
    }else if(i>3){
        for(j=0;j<i-3;j++){
            b += 5*c;
            c *= 10;
            b /= c;
            b *= c;
        }
        
        printf("%d",b);
    }
}
