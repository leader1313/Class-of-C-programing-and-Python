#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
double rad(int x1){
    return x1*M_PI/180;
}
void tsc(int x){
    printf("%d,%f,%f\n",x,cos(rad(x)),sin(rad(x)));
}

int main(void){
    for(int i=0;i<=72;i++){
        tsc(i*5);
    }
}
