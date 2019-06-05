#include <stdio.h>
int main(void){
    int score[20];
    int sum,ave=0;
    
    for(int i=0;i<20;i++){
        scanf("%d",&score[i]);
        if(score[i]<0) {
            printf("\n");
            printf("Average = %d",ave);
            break;
        }
        printf("%d ",score[i]);
        sum += score[i];
        ave = sum/(i+1);
    }
    
}
