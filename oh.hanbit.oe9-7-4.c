#include <stdio.h>
#include <string.h>
struct GAKUSEI{
    char name[80];
    float height;
    float weight;
}student[5];
int main(void){
    float wsum=0;
    float hsum=0;
    float mean[2] = {};
    
    for(int i=0;i<5;i++){
        scanf("%s %f %f",student[i].name,&student[i].height,&student[i].weight);
        hsum += student[i].height;
        wsum += student[i].weight;
    }
    
        
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            if(student[i].height>student[j].height){
                struct GAKUSEI temp;
                temp=student[i];
                student[i]=student[j];
                student[j]=temp;
            }
        }
    }
    
    for(int i=0;i<5;i++){
        printf("%s, %.1f, %.1f\n",student[i].name,student[i].height,student[i].weight);
    }
    mean[0]=wsum/5;
    mean[1]=hsum/5;
    
    printf("whole weight = %.1f,height = %.1f\n", wsum,hsum);
    printf("mean of weight = %.1f,height = %.1f\n", mean[0], mean[1]);
    // Your code here!
    
}
