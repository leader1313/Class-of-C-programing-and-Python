#include <stdio.h>
int main(void){
    int a,b;
    int i=0;
    int h=0;
    int l=0;
    scanf("%d",&a);
    b=a;
    if(a>0){
    while(a!=0){
        a/=10;
        i++;
        }
    }else if(a==0){
        i=1;
    }else{
        a= -a;
        i=1;
     while(a!=0){
        a/=10;
        i++;
        }   
    }

    for(int j=1;j<=b;j++){
        h=0;
        l=j;
         if(l>0){
            
            while(l!=0){
                l/=10;
                h++;
                }
            }

        if(i!=h){
        for(int g=0;g<i-h;g++){
            printf(" ");
            }
        }
        printf("%d ",j);
        if(j%10==0){
            printf("\n");
        }
    }
}
