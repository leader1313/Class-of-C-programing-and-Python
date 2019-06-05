#include <stdio.h>
int main(void){
    // Your code here!
    int buy, bill,a;
    int b,c,d,e,f,g,h;
    
    scanf("%d\n",&buy);
    scanf("%d",&bill);
    
    a = bill-buy;
    
    printf("残り%d円\n",a);
    
    b = a/1000;
    a = a%1000;
    c = a/500;
    a %= 500;
    d = a/100;
    a %= 100;
    e = a/50;
    a %= 50;
    f = a/10;
    a %= 10;
    g = a/5;
    a %= 5;
    h = a;
    
    printf("%d千/%d五百/%d百/%d五十/%d十/%d五/%d円",b,c,d,e,f,g,h);
    
}
