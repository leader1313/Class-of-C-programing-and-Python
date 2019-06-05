#include <stdio.h>
int main(void){
    char name[]="Oh Hanbit";
    char nickname[2];
    
    for(int i=0; i<20; i++){
        if(i==0){
            nickname[0]=name[0];
        }
        if(name[i]==' '){
            nickname[1]=name[i+1];
        }
    }
    printf("%c.%c.",nickname[0],nickname[1]);
}
