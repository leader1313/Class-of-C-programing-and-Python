#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c,d,e,f,g,h,y,m,i,ymd;

    scanf("%d",&ymd);
    
    h= ymd%10;
    g= (ymd%100)/10;
    f= (ymd%1000)/100;
    e= (ymd%10000)/1000;
    d= (ymd%100000)/10000;
    c= (ymd%1000000)/100000;
    b= (ymd%10000000)/1000000;
    a= (ymd%100000000)/10000000;
    
    y = 1000*a+100*b+10*c+d;
    m = 10*e+f;
    i = 10*g+h;

    printf("%d/%d/%d",y,m,i);
}
