#include <stdio.h>
int main(void){
    char name[] = "Oh Hanbit";
    char *p;
    
    for(int i=0;i<10;i++){
        if(*(name+i)==' '){
            p=(name+i);
            *(name+i)='\0';//end of the string
        }
    }
    printf("First Name = %s\n",name);
    printf("Last Name = %s",p+1);
}
