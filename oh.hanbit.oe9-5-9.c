#include <stdio.h>
void input(int x1[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&x1[i][j]);
        }
    }
    
}

void sum(int x1[3][3],int x2[3][3],int x3[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x3[i][j]=x1[i][j]+x2[i][j];
        }
    }
}
void mutiply(int x1[3][3],int x2[3][3],int x3[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x3[i][j]=x1[i][0]*x2[0][j]+x1[i][1]*x2[1][j]+x1[i][2]*x2[2][j];
        }
    }
}
void printmatrix(int y[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int A[3][3]={{4,5,6},{6,7,8},{8,7,9}};
    int B[3][3]={{1,2,3},{3,4,5},{6,7,8}};
    int C[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int D[3][3]={{0,0,0},{0,0,0},{0,0,0}};
   
    input(A);
    input(B);
    mutiply(A,B,D);
    sum(A,B,C);
    printmatrix(A);
    printf("\n");
    printmatrix(B);
    printf("\n");
    printmatrix(C);
    printf("\n");
    printmatrix(D);
    
}