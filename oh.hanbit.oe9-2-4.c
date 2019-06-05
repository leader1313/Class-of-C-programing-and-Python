#include <stdio.h>
int main(void){
    // Your code here!
    int sec, min, hour ;

    scanf("%d", &sec);
    min = sec/60;
    hour = min/60;
    sec = sec%60;
    min = min%60;
    
    printf("%dh %dmin %dsec",hour,min,sec);
    
}
