#include <stdio.h>
int main(void){
    int score[10][3];
    int sum[3]={0,0,0};
    int ave[3]={0,0,0};//we have to initialization!!!
    int b=0;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&score[i][j]);  
                if(score[i][0]<0) {
                printf("\n");
                printf("Sum = %d %d %d\n",sum[0],sum[1],sum[2]);
                printf("Average = %d %d %d",ave[0],ave[1],ave[2]);
                b=1;
                break;
                }
            
            sum[j] += score[i][j];
            ave[j] = sum[j]/(i+1);
            printf("%d ",score[i][j]);
        }
        if(b==1){
            break;
        }
        printf("\n");
    }
    
}
