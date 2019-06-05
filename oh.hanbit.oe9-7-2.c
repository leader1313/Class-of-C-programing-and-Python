#include <stdio.h>
#include <string.h>
void sort(char x[80], char y[80]){
    char z[80];
    if(strcmp(x,y)>0){
        strcpy(z,x);
        strcpy(x,y);
        strcpy(y,z);
    }
}
int main(void){
    char str[5][80];
    
    for(int i=0;i<5;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
                sort(str[j],str[i]);
        }
    }
    
    for(int i=0;i<5;i++){
        printf("%s ",str[i]);
    }
}
