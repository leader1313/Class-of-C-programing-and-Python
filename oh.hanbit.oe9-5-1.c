#include <stdio.h>
int main(void){
    int score[10]={34,78,94,35,67,89,54,32,57,47};
    float sum=0;
    float mean = 0;
    
    for(int i=0; i<10 ;i++){
        sum += score[i];
    }
    mean = sum/10;
    printf("%f",mean);
}
