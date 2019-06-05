#include <stdio.h>
void sum(int x1[2][2],int x2[2][2],int x3[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            x3[i][j]=x1[i][j]+x2[i][j];
        }
    }
}
void mutiply(int x1[2][2],int x2[2][2],int x3[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            x3[i][j]=x1[i][0]*x2[0][j]+x1[i][1]*x2[1][j];
        }
    }
}
void printmatrix(int y[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int A[2][2]={{4,5},{6,7}};
    int B[2][2]={{1,2},{3,4}};
    int C[2][2]={{0,0},{0,0}};
    int D[2][2]={{0,0},{0,0}};
    
    mutiply(A,B,D);
    sum(A,B,C);
    printmatrix(C);
    printf("\n");
    printmatrix(D);
    
}
