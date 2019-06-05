#include <stdio.h>
int max(int x1, int x2){
    if(x1>x2) return x1;
    else return x2;
}

int min(int x1, int x2){
    if(x1>x2) return x2;
    else return x1;
}

int main(void){
    int score[10]={34,78,94,35,67,89,54,32,57,47};
    int MAX,MIN= score[0];
    
    for(int i=0; i<9 ; i++){
        MAX=max(MAX,score[i]);
        MIN=min(MIN,score[i]);
    }
    
    printf("MAX num: %d\n",MAX);
    printf("MIN num: %d",MIN);
    
    
}
